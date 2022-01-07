//Name: Tahmina Akther Munni
//CSCI 135, Project 1A, 
//this project prints sum of numbers
//Tahmina.munni49@myhunter.cuny.edu


#include <iostream>
using namespace std;


int main()
{
    int number, sum;             //define variables
    cout << "Enter numbers: ";  //Enter numbers from console
    sum = 0;                  //set the counter
    while ( cin >> number )   // this loop will run for each value in the file, it will take a value and add it to sum and will reapeat untill all values are used
    {
        sum = sum + number; 
    }
    cout << sum << endl;   // print the read word
    
    return 0;
}

