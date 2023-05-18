#include <iostream>
#include <stdexcept>
#include "Time.h"

using namespace std;

void displayTime(const string& message, const Time& time) {
    cout << message << "\nUniversal Time: " << time.toUniversalString()
    << "\nStandard Time: " << time.toStandardString() << "\n\n";
}

int main() {
    Time t;

    displayTime("Initial time:", t);
    t.setTime(14, 27, 9);
    displayTime("After seTime:", t);

    try {
        t.setTime(100,99,98);
    }
    catch (invalid_argument& e) {
        cout << "Exception: " << e.what() << "\n\n";
    }

    displayTime("After attempting to set an invalid time:", t); 
}