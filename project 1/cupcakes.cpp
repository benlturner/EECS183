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

    return 0;
}

string pluralize(string singular, string plural, int number) {
    if (number == 1) {
        return singular;
    }
    return plural;
}


