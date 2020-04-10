import datetime
from datetime import datetime
#these imports are for sending the email
import smtplib
import sys
from email.mime.multipart import MIMEMultipart
from email.mime.text import MIMEText
from email.mime.base import MIMEBase
from email import encoders

email_address = sys.argv[1]
company = sys.argv[2]
share_count = sys.argv[3]
price = sys.argv[4]
name = sys.argv[5]



def main():
    testEmail = sendEmail()


def sendEmail():
    #new variable for the date
    now = datetime.now()

    #get the date
    the_date = (str(now.month) + '/' + str(now.day) + '/' + str(now.year))
    #Get the current time
    time = datetime.now().time()
    time = str(time)
    time.split(".")
    time = time[0] + time[1] + ":" + time[3] + time[4] + ":" + time[6] + time[7]
  
    #send to my own email
    #email_address = "Lisa.Dion@uvm.edu"
    #email_address = "danielcriscuolo9@gmail.com"

    #SEND EMAIL TO RECIPIANT
    fromaddr = "CS120FinalProjectDCCJMM@gmail.com"
    toaddr = (email_address)

    # instance of MIMEMultipart
    msg = MIMEMultipart()

    # storing the senders email address
    msg['From'] = fromaddr

    # storing the receivers email address
    msg['To'] = toaddr

    # storing the subject
    msg['Subject'] = "Confirmation Email"

    # string to store the body of the mail
    body = "Hello %s, \n \n We wanted to let you know that your portfolio has been updated. There's nothing more you'll need to do at this point. However, if there's a hiccup, please let us know and we'll work with our team to get it straightened out. \n \n Company Name: %s \n \n Number of Shares: %s \n \n Total Investment: %s \n \n If you have any questions, please contact your respective financial advisor or give us a call anytime between 7am-6pm Monday-Friday. \n \n \n Sincerely,\n Burke Financial Strategies." % (name, company, share_count, price)

    # attach the body with the msg instance
    msg.attach(MIMEText(body, 'plain'))

    # creates SMTP session
    s = smtplib.SMTP('smtp.gmail.com', 587)

    # start TLS for security
    s.starttls()
    password = ("CoronaVirus")
    # Authentication
    s.login(fromaddr, password)

    # Converts the Multipart msg into a string
    text = msg.as_string()

    # sending the mail
    s.sendmail(fromaddr, toaddr, text)

    # terminating the session
    s.quit()


main()
