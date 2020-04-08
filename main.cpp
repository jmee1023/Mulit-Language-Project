//
// Created by Jimmy Mee on 4/8/20.
//
#include "Investment.h"
#include <iostream>
#include <memory>


using namespace std;
int get_int_input(string prompt, string invalid, int low, int high) {
    cout << prompt;
    int choice = 0;
    string junk;
    while (!(cin >> choice) || choice < low || choice > high) {
        cout << invalid;
        cin.clear();
        getline(cin, junk);
    }
    return choice;
}

void displayMessage();
void retirementCalc();
void stockPortfolio();
int main(){
    Investment myInvestment;
    displayMessage();
    cout<<"To start, we are dealing only with saving cash. We will deal with stocks ans bonds later"<< endl;
    cout <<"" <<endl;
    cout<<"Lets gather some information for you"<<endl;

    //get info from user
    int choice = get_int_input("What is your target savings for retirment($1,000,000 is a good target number","invalid entry, try again: ",0,10000000);
    myInvestment.setTargetSavings(choice);
    int years = get_int_input("In how many years would you like to retire", "Invalid entry, Try again:", 0, 100);
    myInvestment.setNumYears(years);
    int curSav = get_int_input("What is your current savings: ", "Invalid entry, Try again: ", 0, 10000000);
    myInvestment.setCurrentSavings(curSav);
    cout<< myInvestment.calcRetirement() << endl;





}


void displayMessage(){
    cout<<"Welcome to Jimmys and Dans Personal Finance and investment calculator"<< endl;
    cout<<"As we are seeing, time can change quick, and it is important for you to be on top of your finances"<< endl;
    cout<<""<< endl;
    cout<<"Lets start with saving for retirement. "<< endl;
}

