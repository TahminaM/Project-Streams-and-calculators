//Name: Tahmina Akther Munni
//CSCI 135, Project 1B, 
//This project makes a simple calculator that can add and substract integers
//Tahmina.munni49@myhunter.cuny.edu


#include <iostream>
using namespace std;

int main()
{
    char ch ;                        // define character variables + and -
    int num;                         // create a num.txt file for input redirection
    
    int sum = 0 ;                    // set the sum value same as 0
    cin >> sum;                      // use >> operator to read the numbers and the +/- characters, 
                                     // because >> will be skipping all spaces between the input terms

    while (cin >> ch >> num)         // used >> operator to read the numbers and the +/- characters
    {
        if ( ch  == '+' )            // if operator is '+' we add the value
        {
            sum = sum + num ;        // sum = sum + num
        }

        else if ( ch  == '-' )       // if operator is '-' we subtract the value
        {
            sum = sum - num ;        // sum = sum - num
        }

     }

    cout << sum << endl;             // print out the sum value
    return 0;
}
	
	
