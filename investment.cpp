//
// Created by Jimmy Mee on 4/8/20.
//
#include "Investment.h"
#include <iostream>
#include <memory>

using namespace std;
Investment::Investment() {
    currentSavings = 0;
}

Investment::Investment(double cursave) {
    currentSavings = cursave;
}

int Investment::getUserChoice() const {
    return userChoice;
}

int Investment::getTargetSavings() const {
    return targetSavings;
}

int Investment::getNumYears() const {
    return numYears;
}

int Investment::getCurrentSavings() {
    return currentSavings;
}


void Investment::setUserChoice(int choice) {
    userChoice = choice;
}

void Investment::setTargetSavings(int savings) {
    targetSavings = savings;
}

void Investment::setNumYears(int years) {
    numYears = years;
}

void Investment::setCurrentSavings(int savings) {
    currentSavings = savings;
}

double Investment::calcRetirement() {
    moneyNeeded = targetSavings  - currentSavings;
    savingsPerYear = numYears/moneyNeeded;
    return savingsPerYear;


}
