//Name: Tahmina Akther Munni
//CSCI 135, Project 1D,
//professor: Tong yi
//this project makes a better version of the calculator program calc3.cpp that can understand squared numbers. We are going to use a simplified notation X^ to mean X2. For example, 10^ + 7 - 51^ should mean 102 + 7 − 512.
/*A hint:
To take into account ^, don’t add or subtract new numbers right away after reading them. 
Instead, remember the number, read the next operator and if it is a ^, 
square the remembered number, then add or subtract it.*/

/*Example
Assuming that the input file formulas.txt looks as follows:
5^;
1000 + 6^ - 5^ + 1;
When we run the program with that input, the output should evaluate all of the expressions and print them each on its own line:
$ ./calc2 < formulas.txt
25
1012
*/

#include <iostream>
using namespace std;

int main()
{
    int sum = 0 ;             // set the sum value same as 0
    char ch ;                // define character variables +,- and ;
    int num, sq;            // create a num.txt file for input redirection    
    cin >> num;

    if (cin.peek() == '^')     // need to check if there is a square
       {
           num *= num;
           cin.ignore();
       }
    sum = num;                      //update sum value
       
    while (cin >> ch >> num)        // used >> operator to read the numbers and the +/-/;/^ characters
    {
        if (cin.peek() == '^')
        {
            num *=num;                // sq the number by itself
            cin.ignore();
        }
        
            if ( ch  == '+' )          // if operator is '+' add the value
            {
                sum = sum + num ;      // sum = sum + num
            }

            else if ( ch  == '-' )      // if operator is '-' subtract the value
            {
                sum = sum - num ;       // sum = sum - num
            }
            else if ( ch == ';')       // if ch is ; set sum=num
            {
                cout << sum << endl;   // end the equation amd moved to next line
                sum = num;
            }
    }
    cout << sum << endl;               // print out the sum value
    return 0;
}
	
	



 
