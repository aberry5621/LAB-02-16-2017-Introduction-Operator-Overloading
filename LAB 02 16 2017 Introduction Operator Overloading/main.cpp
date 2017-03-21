//
//  main.cpp
//  LAB 02 16 2017 Introduction Operator Overloading
//
//  Created by ax on 3/20/17.
//  Copyright © 2017 COMP235. All rights reserved.
//

#include <iostream>
#include "intItemH.h"
using namespace std;

int main() {
    IntItem obj1;
    IntItem obj2;
    cout << "TEST 1A: >> operator\n";
    cout << "Enter the first integer item: ";
    cin >> obj1;
    cout << "Enter the second integer item: ";
    cin >> obj2;
    cout << "\nTEST 1B: << operator\n";
    cout << "Obj1 by overloaded insertion operator " << obj1 << endl;
    cout << "Obj2 by overloaded insertion operator " << obj2 << endl;
    cout << "\nTEST 2A: += shorthand addition operator\n";
    obj1 += obj2;
    cout << "obj1 += obj2, obj1 = " << obj1 << endl;
    cout << "Obj1 by shorthand addition operator " << obj1 << endl;
    cout << "Obj2 by shorthand addition operator " << obj2 << endl;
    cout << "\nTEST 2B: -= shorthand subtraction operator\n";
    obj1 -= obj2;
    cout << "obj1 -= obj2, obj1 = " << obj1 << endl;
    cout << "Obj1 by shorthand subtraction operator " << obj1 << endl;
    cout << "Obj2 by shorthand subtraction operator " << obj2 << endl;
    cout << "\nTEST 2C: *= shorthand multiplication operator\n";
    obj1 *= obj2;
    cout << "obj1 *= obj2, obj1 = " << obj1 << endl;
    cout << "Obj1 by shorthand multiplication operator " << obj1 << endl;
    cout << "Obj2 by shorthand multiplication operator " << obj2 << endl;
    cout << "\nTEST 2D: /= shorthand division operator\n";
    obj1 /= obj2;
    cout << "obj1 /= obj2, obj1 = " << obj1 << endl;
    cout << "Obj1 by shorthand division operator " << obj1 << endl;
    cout << "Obj2 by shorthand division operator " << obj2 << endl;
    cout << "\nTEST 3A: binary +\n";
    cout << "obj1 + obj2 = " << obj1 + obj2 << endl;
    cout << "Current value of obj1 = " << obj1 << endl;
    cout << "Current value of obj2 = " << obj2 << endl;
    cout << "\nTEST 3B: binary -\n";
    cout << "obj1 - obj2 = " << obj1 - obj2 << endl;
    cout << "Current value of obj1 = " << obj1 << endl;
    cout << "Current value of obj2 = " << obj2 << endl;
    cout << "\nTEST 3C: binary *\n";
    cout << "obj1 * obj2 = " << obj1 * obj2 << endl;
    cout << "Current value of obj1 = " << obj1 << endl;
    cout << "Current value of obj2 = " << obj2 << endl;
    cout << "\nTEST 3D: binary /\n";
    cout << "obj1 / obj2 = " << obj1 / obj2 << endl;
    cout << "Current value of obj1 = " << obj1 << endl;
    cout << "Current value of obj2 = " << obj2 << endl;
    cout << "\nTEST 4A: pre-increment ++\n";
    cout << "++obj1 + obj2 = " << ++obj1 + obj2 << endl;
    cout << "Current value of obj1 = " << obj1 << endl;
    cout << "Current value of obj2 = " << obj2 << endl;
    cout << "\nTEST 4B: post-increment ++\n";
    cout << "obj1 + obj2++ = " << obj1 + obj2++ << endl;
    cout << "Current value of obj1 = " << obj1 << endl;
    cout << "Current value of obj2 = " << obj2 << endl;
    cout << "\nTEST 4C: pre-decrement --\n";
    cout << "--obj1 + obj2 = " << --obj1 + obj2 << endl;
    cout << "Current value of obj1 = " << obj1 << endl;
    cout << "Current value of obj2 = " << obj2 << endl;
    cout << "\nTEST 4D: post-decrement --\n";
    cout << "obj1 + obj2-- = " << obj1 + obj2-- << endl;
    cout << "Current value of obj1 = " << obj1 << endl;
    cout << "Current value of obj2 = " << obj2 << endl;
    cout << "\nTEST 5A: comparison operator <\n";
    cout << "obj1 < obj2 = " << (obj1 < obj2) << endl;
    cout << "Current value of obj1 = " << obj1 << endl;
    cout << "Current value of obj2 = " << obj2 << endl;
    cout << "\nTEST 5B: comparison operator <=\n";
    cout << "obj1 <= obj2 = " << (obj1 <= obj2) << endl;
    cout << "Current value of obj1 = " << obj1 << endl;
    cout << "Current value of obj2 = " << obj2 << endl;
    cout << "\n\nQuestion: Why is this possible?" << endl;
    cout << "obj1 + obj2 + obj1 + obj2 + obj1 = "
    << obj1 + obj2 + obj1 + obj2 + obj1 << endl;
    cout << endl;
    return 0;
}
