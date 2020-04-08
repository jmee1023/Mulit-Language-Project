//
// Created by Jimmy Mee on 4/8/20.
//

#ifndef JMM_DC_FINAL_PROJECT_MPL_INVESTMENT_H
#define JMM_DC_FINAL_PROJECT_MPL_INVESTMENT_H

#include "string"
class Investment{
protected:
//    int userChoice;
//    int targetSavings;
//    int numYears;
//    int currentSavings;
public:
    constexpr static const double INTEREST_RATE = .05;
    int userChoice;
    int targetSavings;
    int numYears;
    int currentSavings;
    int moneyNeeded;
    double savingsPerYear;



    /**
     * Requires: nothing
     * Modifies: current savings
     * Effects: set current savings to 0
     */
     Investment();

    /**
    * Requires: nothing
    * Modifies: current savings
    * Effects: sets current savings to curSave
    */
    Investment(double cursave);


    //Getters
    /**
     * Requires: nothing
     * Modifies: nothing
     * Effects: returns user choice
     */
     int getUserChoice() const;

    /**
    * Requires: nothing
    * Modifies: nothing 
    * Effects: returns users target savings
    */
    int getTargetSavings() const;

    /**
     * Requires: nothing
     * Modifies: noting
     * Effects: returns years from retiremnt
     */
     int getNumYears() const;

    /**
   * Requires: nothing
   * Modifies: noting
   * Effects: returns current savings
   */
     int getCurrentSavings();

     //Setters
    /**
   * Requires: int choice
   * Modifies: choice
   * Effects: sets choice to the paramater
   */
   void setUserChoice(int choice);
    /**
   * Requires: double savings
   * Modifies: target Savings
   * Effects: sets target savings to savings
   */
   void setTargetSavings(int savings);

    /**
   * Requires: int years
   * Modifies: numYears
   * Effects: sets numYears to years
   */
   void setNumYears(int years);

    /**
   * Requires: double savings
   * Modifies: currentsavings
   * Effects: sets current savings to savings
   */

    void setCurrentSavings(int savings);

    double calcRetirement();



};

#endif //JMM_DC_FINAL_PROJECT_MPL_INVESTMENT_H
