#include <iostream>
#include "Pointers.h"

using namespace std;

int User_Prompt();

int main()
{
    // Prompt User to Enter Details
    if (User_Prompt() == 1) {
        // Enter User Name and Age
        string user_name;
        int user_age;
        cout << "Please Enter Your Name: " << endl;
        cin >> user_name;
        cout << "Please Enter Your Age: " << endl;
        cin >> user_age;

        // Print User details and state if user is self
        if (user_name == "Robbie") {
            cout << "You are me. Your name is " << user_name << ". Your Age is " << user_age << endl;
        }
        else {
            cout << "Your name is " << user_name << ". You are not me." << " Your Age is " << user_age << endl;
        }

        // Declare pointers to variable addresses
        string* pUser_Name = &user_name;
        int* pUser_Age = &user_age;
        Pointer(pUser_Name, pUser_Age);
    }

    else if (User_Prompt == 0) {
        return 0;
    }

    // End Main
    return 0;
}

int User_Prompt()
{
    string user_decision;
    int x = 0;

    // Determine whether the user wants to enter their details or not
    while (x == 0) {
        cout << "Would You Like to Enter Your Details? \nPlease Enter 'Yes' or 'No'" << endl;
        cin >> user_decision;

        // If yes run the rest of Main
        if (user_decision == "Yes") {
            x = 1;
            return 1;
        }
        // If not return 0 and return 0 in main
        else if (user_decision == "No") {
            x = 1;
            return 0;
        }
        // Error if invalid user input, try again
        else {
            cout << "Invalid Answer. Try Again" << endl;
        }
    }
}
