#include <iostream>

using namespace std;

/* Program: Lab 1
 * ----------------------
 *Author: Lawrence Warner
 *Last Modified: 1/27/18
 *CS 161 C++
 *
 */

int main()
{

    int user_age;

    string user_name;

// Asking for user name
    cout << "What is your name? " << endl;

//User name input
    cin >> user_name;

//Asking for user age
    cout << "What is your age? " << endl;

//Age input
    cin >> user_age;

//Display input
    cout << "Your name is " << user_name << " and your age is " << user_age << endl; //displaying name and age

    return 0;

}
