#include <iostream>

using namespace std;

int main() {
    //fields
    string name;
    string email;
    string stock;
    double stock_price;
    int number_shares;
    double apple_price = 267.99;
    double tesla_price = 573.00;
    double facebook_price = 175.19;
    double total_cost;
    //Opening Message
    cout << "Hello and welcome to our stocks portal, please follow the instructions to purchase shares successfully!" << endl;
    cout << endl;
    //get name from user
    cout << "Please enter your first name: " << endl;
    cin >> name;
    cout << endl;
    //Display options
    cout << "Currently, out of our portfolio, we have three stocks that we are recommending to BUY." << endl;
    cout << "Option 1: Apple" << endl;
    cout << "Option 2: Tesla" << endl;
    cout << "Option 3: Facebook" << endl;
    cout << endl;
    int i = 0;
    //Prompt user for selection and validate input
    while (i != 1 && i != 2 && i != 3) {
        cout << "Please select one of the stocks to invest in (1,2, or 3)" << endl;
        cin >> i;
    }
    //assign the correct string to stock
    if (i == 1) {
        stock = "Apple";
    }
    if (i == 2) {
        stock = "Tesla";
    }
    if (i == 3) {
        stock = "Facebook";
    }

    //assign the correct value to stockprice based on users choice
    if (i == 1) {
        stock_price = apple_price;
    }
    if (i == 2) {
        stock_price = tesla_price;
    }
    if (i == 3) {
        stock_price = facebook_price;
    }
    //Read back what user purchashed
    cout << stock + " is a Great choice! We think that this is the perfect time to buy in regards to " + stock + "." << endl;
    cout << endl;
    //get number of shares from user
    cout << "How many shares would you like to purchase? (1-1000)" << endl;
    cin >> number_shares;
    //Validate input
    while (number_shares < 1 || number_shares > 1000) {
        cout << "Please enter a number between 1 and 1000." << endl;
        cin >> number_shares;
    }
    //calcualate total cost
    total_cost = number_shares * stock_price;

    cout << "Purchase successful!" << endl;
    //get email from user to send into python function
    cout << "Please enter your email address to which a confirmation email should be sent to: " << endl;
    cin >> email;
    cout << "A confirmation email has been sent to " + email + ", thank you for your business." << endl;

    //make command line call to python program
    //Send correct varibales into the python program
    string command = "python testEmail.py " + email + " " + stock + " " + to_string(number_shares) + " " + to_string(total_cost) + " " + name;
    system(command.c_str());
    //
}




















