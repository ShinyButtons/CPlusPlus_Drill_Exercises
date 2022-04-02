/*Jennifer Langford, 03/31/2022, SDEV-240-45
Week 2: Assignment 2 - Iteration
*/
#include <iostream>

using namespace std;

int main()
{

    int variable;   //declares the integer variable
    cout<<"This program calculates the first 10 multiples of a positive integer.\n"
          "If you enter a fraction or a number with a decimal, it will multiply\n"
          "only the value of the whole number(no rounding).\n"
          "Please, enter any positive integer: ";
    cin >> variable;   //input from EU

    for (int i= 0; i<10; i++)
        cout<<variable*(i+1)<<" ";  //prints the multiples

    return 0;
}