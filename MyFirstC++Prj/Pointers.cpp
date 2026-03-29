#include <iostream>
#include "Pointers.h"

using namespace std;

int Pointer(string* user_name_address, int* user_age_address) {

    cout << "The Address of your Name is: " << user_name_address << endl;
    cout << "The Address of your Age is: " << user_age_address << endl;
    cout << "Thank you for playing" << endl;

    return 0;
}
