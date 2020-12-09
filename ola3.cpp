/* Description: This program will take in a number from a user
//    and then create an equilateral triangle based on that number.
/////////////////////////////////////////////////////////////////*/

//pre=processor directives
#include <iostream>
#include <string>
#include <cmath>

//namespace
using namespace std;

//main function
int main()
{
    int num, triangleSum;
    //num = size of the base
    // triangleNum = sum of previous num numbers
    char repeat;
    // sets the do while loop to repeat

    do // do while loop that will execute as long as the user continues th program.
    {
        cout << "Please enter a number:\n";
        cin >> num; 
        
        
                       // users number for the triangle
        for (int i = 1; i <= num; i++) // for loop for the count of how many rows
        {
            for (int j = 0; j < num - i; j++) // for loop for the spaces in each row
            {
                cout << " ";
            }
            for (int k = 1; k <= i; k++) // for loop for the * pattern
            {
                cout << "* ";
            }
            cout << endl; //newline
        }
        triangleSum = (num * (num + 1)) / 2;                            // formula for adding the *
        cout << "The sum of your triangle is " << triangleSum << ".\n"; // displays the sum to the user

        cout << "Do you want to enter another number? (Y/N)\n";
        cin >> repeat;
        

        while (repeat != 'N' && repeat != 'n' && repeat != 'Y' && repeat != 'y')
        {
            {
                cout << "Invalid character. Please select Y or N.\n";
                cin >> num;
                
            }
        }
        if (repeat == 'N' || repeat == 'n') // if user enters n this will stop the program
            cout << "Thank you! see you again!\n";

    } while (repeat == 'Y' || repeat == 'y');

    return 0;
}
