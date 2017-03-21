//
//  intItem.cpp
//  LAB 02 16 2017 Introduction Operator Overloading
//
//  Created by ax on 3/20/17.
//  Copyright © 2017 COMP235. All rights reserved.
//

#include "intItemH.h"
#include <iostream>
using namespace std;

IntItem::IntItem(int p_num1) {
    this->m_intNum = p_num1;
}

void IntItem:: operator+= (const IntItem& rhs) {
    this->m_intNum += rhs.m_intNum;
}

void IntItem:: operator-= (const IntItem& rhs) {
    this->m_intNum -= rhs.m_intNum;
}

void IntItem:: operator*= (const IntItem& rhs) {
    this->m_intNum *= rhs.m_intNum;
}

void IntItem:: operator/= (const IntItem& rhs) {
    this->m_intNum /= rhs.m_intNum;
}
//pre-increment
IntItem IntItem::operator++() {
    ++(this->m_intNum);
    return *this;
}
//postincrement
IntItem IntItem::operator++(int p_dummy) {

    IntItem temp;
    temp.m_intNum = this->m_intNum;
    this->m_intNum += 1;
    return temp;
}
//pre-decrement
IntItem IntItem::operator--() {
    --(this->m_intNum);
    return *this;
}
//postdecrement
IntItem IntItem::operator--(int p_dummy) {
    IntItem temp;
    temp.m_intNum = this->m_intNum;
    this->m_intNum -= 1;
    return temp;
}
/*** friends ***/
std::ostream& operator<<(std::ostream& out, const IntItem& printMe) {
    out << printMe.m_intNum;
    return out;
}

std::istream& operator >> (std::istream& in, IntItem& readMe) {
    in >> readMe.m_intNum;
    return in;
}

// Comparison operators
bool operator<(const IntItem& lhs, const IntItem& rhs) {
    return lhs.m_intNum < rhs.m_intNum ? true : false;
}

bool operator<=(const IntItem& lhs, const IntItem& rhs) {
    return lhs.m_intNum <= rhs.m_intNum ? true : false;
}

// Arithmetic operators
IntItem operator+(const IntItem &lhs, const IntItem& rhs) {
    IntItem temp = lhs.m_intNum + rhs.m_intNum;
    return temp;
}

IntItem operator-(const IntItem &lhs, const IntItem& rhs) {
    IntItem temp = lhs.m_intNum - rhs.m_intNum;
    return temp;
}

IntItem operator*(const IntItem &lhs, const IntItem& rhs) {
    IntItem temp = lhs.m_intNum * rhs.m_intNum;
    return temp;
}

IntItem operator/(const IntItem &lhs, const IntItem& rhs) {
    IntItem temp = lhs.m_intNum / rhs.m_intNum;
    return temp;
}


