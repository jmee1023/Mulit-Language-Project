#include <iostream>

using namespace std;

int main() {
    //fields
    string name;
    string email;
    string stock;
    double stockPrice;
    int numberShares;
    double applePrice = 267.99;
    double teslaPrice = 573.00;
    double facebookPrice = 175.19;
    double totalCost;

    cout << "Hello and welcome to our stocks portal, please follow the instructions to purchase shares successfully!" << endl;
    cout << endl;
    cout << "Please enter your name: " << endl;
    cin >> name;
    cout << endl;
    cout << "Currently, out of our portfolio, we have three stocks that we are reccommending to BUY." << endl;
    cout << "Option 1: Apple" << endl;
    cout << "Option 2: Tesla" << endl;
    cout << "Option 3: Facebook" << endl;
    cout << endl;
    int i = 0;
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
        stockPrice = applePrice;
    }
    if (i == 2) {
        stockPrice = teslaPrice;
    }
    if (i == 3) {
        stockPrice = facebookPrice;
    }

    cout << stock + " is a Great choice! We think that this is the perfect time to buy in regards to " + stock + "." << endl;
    cout << endl;
    cout << "How many shares would you like to purchase? (1-1000)" << endl;
    cin >> numberShares;
    while (numberShares < 1 || numberShares > 1000) {
        cout << "Please enter a number between 1 and 1000." << endl;
        cin >> numberShares;
    }
    //calcualate total cost
    totalCost = numberShares * stockPrice;

    cout << "Purchase successful!" << endl;
    cout << "Please enter your email address to which a confirmation email should be sent to: " << endl;
    cin >> email;
    cout << "A confirmation email has been sent to " + email + ", thank you for your business." << endl;

    //make command line call to python program
    string command = "python testEmail.py " + email + " " + stock + " " + to_string(numberShares) + " " + to_string(totalCost) + " " + name;
    system(command.c_str());
}




















////
//// Created by Jimmy Mee on 4/8/20.
////
//#include "Investment.h"
//#include <iostream>
//#include <memory>
//
//
//using namespace std;
//int get_int_input(string prompt, string invalid, int low, int high) {
//    cout << prompt;
//    int choice = 0;
//    string junk;
//    while (!(cin >> choice) || choice < low || choice > high) {
//        cout << invalid;
//        cin.clear();
//        getline(cin, junk);
//    }
//    return choice;
//}
//
//void displayMessage();
//void retirementCalc();
//void stockPortfolio();
//int main(){
//    Investment myInvestment;
//    displayMessage();
//    cout<<"To start, we are dealing only with saving cash. We will deal with stocks ans bonds later"<< endl;
//    cout <<"" <<endl;
//    cout<<"Lets gather some information for you"<<endl;
//
//    //get info from user
//    int choice = get_int_input("What is your target savings for retirment($1,000,000 is a good target number): ","invalid entry, try again: ",0,10000000);
//    myInvestment.setTargetSavings(choice);
//    int years = get_int_input("In how many years would you like to retire?: ", "Invalid entry, Try again: ", 0, 100);
//    myInvestment.setNumYears(years);
//    int curSav = get_int_input("What is your current savings: ", "Invalid entry, Try again: ", 0, 10000000);
//    myInvestment.setCurrentSavings(curSav);
//    cout<< myInvestment.calcRetirement() << endl;
//
//
//
//
//
//}
//
//
//void displayMessage(){
//    cout<<"Welcome to Jimmys and Dans Personal Finance and investment calculator"<< endl;
//    cout<<"As we are seeing, time can change quick, and it is important for you to be on top of your finances"<< endl;
//    cout<<""<< endl;
//    cout<<"Lets start with saving for retirement. "<< endl;
//}
//
