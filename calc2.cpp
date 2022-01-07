//Name: Tahmina Akther Munni
//CSCI 135, Project 1C, 
//this project makes a better version of the calculator that can evaluate multiple arithmetic expressions such as semicolon
//Tahmina.munni49@myhunter.cuny.edu
/*Example
Assuming that the input file formulas.txt looks as follows:
15 ;
10 + 3 + 0 + 25 ;
5 + 6 - 7 - 8 + 9 + 10 - 11 ;
When we run the program with that input, the output should evaluate all of the expressions and print them each on its own line:
$ ./calc2 < formulas.txt
15 
38
4
*/

#include <iostream>
using namespace std;

int main()
{
    int sum = 0 ;               // set the sum value same as 0
    cin >> sum;
    char ch ;                    // define character variables +,- and ;
    int num;                     // create a num.txt file for input redirection
    
    while (cin >> ch >> num)     //used >> operator to read the numbers and the +/- characters
    {
        if ( ch  == '+' )        // if operator is '+' add the value
        {
            sum = sum + num ;    // sum = sum + num
        }

        else if ( ch  == '-' )    // if operator is '-' subtract the value
        {
            sum = sum - num ;      // sum = sum - num
        }
        else if ( ch == ';')       // if ch is ; set sum=num
	    {
            cout << sum << endl;
            sum = num;
        }
    }
    cout << sum << endl;           // print out the sum value
    return 0;
}
	
	



 
