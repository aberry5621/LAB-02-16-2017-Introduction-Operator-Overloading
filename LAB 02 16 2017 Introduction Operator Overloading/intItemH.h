//
// intItemH.hpp
// LAB 02 16 2017 Introduction Operator Overloading
//
// Created by ax on 3/20/17.
// Copyright © 2017 COMP235. All rights reserved.

// This project allows you to seek answer to questions in overloading an operator:
// 1. Does C++ allow it?
// 2. Would it be better to a class member?
// 3. What parameter(s) and what passing mechanism?
// 4. Would like allow cascading, if so, then what kind of return type?
// (e.g. of cascading: cout << item1 << item2 << item3;
// Do I pass back a reference? (Careful here if it is a local variable)
// Do I pass a local variable back by value instead?
// 5. What is the return type? By reference or by value?

// Purpose, to demo overloading of:
// A. Augmented assignments
// B. increment operators
// C. stream I/O operators
// D. Arithmetic operators

#ifndef intItemH_h
#define intItemH_h

#include <iostream>

class IntItem {
public:
    IntItem(int p_num = 0);
    void operator+= (const IntItem& rhs);
    void operator-= (const IntItem& rhs);
    void operator*= (const IntItem& rhs);
    void operator/= (const IntItem& rhs);
    IntItem operator++();
    IntItem operator++(int p_dummy); //postfix, or post-increment
    IntItem operator--();
    IntItem operator--(int p_dummy); //postfix, or post-decrement
    //friends: streams
    friend std::ostream& operator<<(std::ostream& out, const IntItem& printMe);
    friend std::istream& operator >> (std::istream& in, IntItem& readMe);
    //Comparison operators
    friend bool operator<(const IntItem& lhs, const IntItem& rhs);
    friend bool operator<=(const IntItem& lhs, const IntItem& rhs);
    //Arithmetic operators
    friend IntItem operator+(const IntItem &lhs, const IntItem& rhs);
    friend IntItem operator-(const IntItem &lhs, const IntItem& rhs);
    friend IntItem operator*(const IntItem &lhs, const IntItem& rhs);
    friend IntItem operator/(const IntItem &lhs, const IntItem& rhs);
private:
    int m_intNum;
};

#endif /* intItemH_h */
