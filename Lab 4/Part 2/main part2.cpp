#include <iostream>


using namespace std;

/* Program: Lab 4 part 2
 * ----------------------
 *Author: Lawrence Warner
 *Last Modified: 10/21/18
 *CS 161 C++
 *
 */
int main()
{

// Define functions
    int user_answer, low_answer = 100, hi_answer = 0;
    int  counter = 0, small_num , hi_num;
    char start_over;

// Display question to user
    cout << " \n" << " *********************************" << endl;
    cout << " *********************************" << endl;
    cout << " * Welcome to my game of hi/low. *"  << endl;
    cout << " *********************************" << endl;
    cout << " *********************************" << endl;

    do
    {

            cout << " \n" << " Please enter positive integers, between 1 and 100 : ";
            cin >> user_answer;

            while ( user_answer < 0 || user_answer > 100)
            {
                cout << " \n" << " Wrong input. Please, try again: ";

//clear input buffer
                cin.clear();
                cin.ignore();

                cout << " \n" << " Please enter positive integers, between 1 and 100 : ";
                cin >> user_answer;


            }
// User hit 0 and ends the loop
            if (user_answer == 0)
            {
                cout << " \n" << " You have decided to end the program." << endl;
                break;
            }

// Computes Hi/Low



                if (user_answer < low_answer)
                {
                    low_answer = user_answer;
                }
                else if (user_answer > hi_answer)

                {
                    hi_answer = user_answer;
                }

                if (counter == 0)
                {
                    small_num = 100;
                    hi_num = 0;
                }
                    if (low_answer < small_num)
                    {
                        small_num = low_answer;

                    }
                    if (hi_answer >  hi_num)
                    {
                        hi_num = hi_answer;

                    }
                counter++;




    }while (user_answer != 0);
    // Displays Hi/Low results
                cout << " \n" << " Your lowest number is " << small_num << " and your highest is " << hi_num << "." << endl;
                cout << " \n" << " The amount of numbers you have entered are " << counter << "." << endl;
    return 0;
}
