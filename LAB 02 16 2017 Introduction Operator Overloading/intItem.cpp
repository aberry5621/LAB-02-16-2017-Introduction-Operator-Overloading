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

IntItem::IntItem(int p_num1)
{
    this->m_intNum = p_num1;
}

void IntItem:: operator+= (const IntItem& rhs)
{
    this->m_intNum = rhs.m_intNum;
    
}

IntItem IntItem::operator++() //pre-increment
{
    ++(this->m_intNum);
    return *this;
}

IntItem IntItem::operator++(int p_dummy) //postincrement
{
    IntItem temp;
    temp.m_intNum = this->m_intNum;
    this->m_intNum += 1;
    return temp;
}

/*** friends ***/
std::ostream& operator<<(std::ostream& out, const IntItem& printMe)
{
    out << printMe.m_intNum;
    return out;
}

std::istream& operator>> (std::istream& in, IntItem& readMe)
{
    in >> readMe.m_intNum;
    return in;
    
}

//Comparison operators
bool operator<(const IntItem& lhs, const IntItem& rhs) {
    return lhs.m_intNum < rhs.m_intNum ? true : false;
}

//Arithmetic operators
IntItem operator+(const IntItem &lhs, const IntItem& rhs)
{
    IntItem temp = lhs.m_intNum + rhs.m_intNum;
    return temp;
}
