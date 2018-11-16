#include <iostream>



using namespace std;

/* Program: Lab 3 part 2
 * ----------------------
 *Author: Lawrence Warner
 *Last Modified: 10/11/18
 *CS 161 C++
 *
 */
int main()
{

// Define functions
    int user_number1, user_number2, user_answer;
    char user_choice, start_over;

// Display question to user
    cout << "            " << endl;
    cout << " Welcome to my simple calculator. "  << endl;

    do
    {
            cout << "                     "  << endl;
            cout << " Please enter 2 integers: ";
            cout << "                     "  << endl;
            cout << " Integer one : ";
            cin >> user_number1;
            cout << "                     "  << endl;
            cout << " Integer two : ";
            cin >> user_number2;
            cout << "            " << endl;
            while (!cin)
            {
                cout << "Wrong input. Please, try again: ";
//clear input buffer
                cin.clear();
                cin.ignore();
                cout << "                     "  << endl;
            cout << " Integer one : ";
            cin >> user_number1;
            cout << "                     "  << endl;
            cout << " Integer two : ";
            cin >> user_number2;
            cout << "            " << endl;

            }

// Display user input
            cout << " You entered " << user_number1 << " and " << user_number2 << "." << endl;

// Ask for operator choice
            cout << "                     "  << endl;
            cout << " Please pick your operator." << endl;
            cout << " Use * for multiplication" << endl;
            cout << " Use / for division" << endl;
            cout << " Use % to find the remainder after division" << endl;
            cout << " Use + for addition" << endl;
            cout << " Use - for subtraction" << endl;
            cin >> user_choice;

// Applying user choice to integers
            if ( user_choice != '*' and user_choice != '/' and user_choice != '%' and user_choice != '+' and user_choice != '-')
        {
            cout << " Please enter a valid math operator" << endl;
            cout << "            " << endl;
            break;
        }

                else
                if ( user_choice == '*')
            {
                user_answer = user_number1 * user_number2;
                cout << " " << user_number1 << " " << user_choice << " " << user_number2 << " = " << user_answer;
            }
                else
                if ( user_choice == '/')
            {
                if (user_number2 > 0)
                {
                    user_answer = user_number1 / user_number2;
                    cout << " " << user_number1 << " " << user_choice << " " << user_number2 << " = " << user_answer;
                }
                else
                cout << " Cannot divide by zero" << endl;
            }
                if (user_choice == '%')
            {
                user_answer = user_number1 % user_number2;
                cout << " " << user_number1 << " " << user_choice << " " << user_number2 << " = " << user_answer;
            }
                else
                if (user_choice == '+')
            {
                user_answer = user_number1 + user_number2;
                cout << " " << user_number1 << " " << user_choice << " " << user_number2 << " = " << user_answer;
            }
                else
                if (user_choice == '-')
            {
                user_answer = user_number1 - user_number2;
                cout << " " << user_number1 << " " << user_choice << " " << user_number2 << " = " << user_answer;
            }

        {
// Ask if user wants to go again
            cout << "                     "  << endl;
            cout << "                     "  << endl;
            cout << " Would you like to start over? [y/n] and enter: ";
            cin >> start_over;
            if ( start_over != 'Y' and start_over != 'y' and start_over != 'N' and start_over != 'n')
            cout << start_over << " is not a valid option. Try again" << endl;
        }

    }while ( start_over == 'Y' || start_over =='y' );

    return 0;
}
