/**
 * cupcakes.cpp
 * Project UID 2c646c3369a0cdeb397d0a1c849078dc
 *
 * <#Name#>
 * <#Uniqname#>
 *
 * EECS 183: Project 1
 * Winter 2020
 *
 * <#description#>
 */
 
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/**
 * Pluralizes a word if needed.
 *
 * Requires: singular is the singular form of the word.
 *           plural is the plural form of the word.
 *           number determines how many things there are; must be >= 1.
 * Modifies: Nothing.
 * Effects:  Returns return the singular form of the word if number == 1.
 *           Otherwise, returns the plural form.
 * Examples:
 *           // prints "bag"
 *           cout << pluralize("bag", "bags", 1);
 *
 *           // prints "pounds"
 *           string temp = pluralize("pound", "pounds", 3);
 *           cout << temp;
 */
string pluralize(string singular, string plural, int number);

int main() {
    // TODO: implement. Write code here.
    double numServings; 

    cout << "How many people do you need to serve? ";
    cin >> numServings;

    int numBatches = ceil(numServings/12);

    string description = pluralize("batch", "batches", numBatches);

    cout << numBatches << " " << description << endl;

    // get the input needed
    // calculate how many batches you will need
    // print out the number of batches --
    //     use the exact output expected for batches
    // make sure it is correct -- test on a few test sets
    // fix the singular/plural
    //    "batch" if you have 1
    //    "batches" if 2 or more
    // test again to make sure it worked

    // now add the print needed for "Shopping List ..."
    //    and don't forget about all the "----------..."
    //    Note: you may want to copy/past those "----"s
    //    because if you are off on the count,
    //    you will fail the autograder on every test!

    // Calculate how much flour is needed
    // How do you do this conversion?  What data is needed?
    // Where is the most appropriate location for this code?
    //    above the print for the "Shopping List ..." or below it?
    // Do you need to store the result of the calculation in a variable?
    //    That answer is "Yes" if you need the result again.
    //    The answer is "No" if you don't need the result again
    // Now how do you print how much flour is needed in your shopping list?
    // Test to make sure it is correct

    // After you are positive that all the above works perfectly
    // calculate how much sugar is needed
    // test it out

    // etc -- one piece at a time
    // test as you go

    return 0;
}

string pluralize(string singular, string plural, int number) {
    if (number == 1) {
        return singular;
    }
    return plural;
}


