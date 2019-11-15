//
// Created by 刘颖恒 on 2019/11/14.
//
#include <string>
#include <iostream>
#include "Data.h"

using namespace std;

// default constructor
Data::Data() {
    country = " ";
    Rank = 0.0;
    Score = 0.0;
    GDP = 0.0;
    Expectancy = 0.0;
}

Data::Data(string a, double b, double c, double d, double e) {
    country = a;
    Rank = b;
    Score = c;
    GDP = d;
    Expectancy = e;

}


ostream& operator<<(ostream& os, const Data& x) {
    os << x.country << ": " << x.Rank<< ", " << x.Score<< "," << x.GDP << ", "<< x.Expectancy;
    return os;
}


bool Data:: operator < (Data& y){
    if (this->GDP > y.GDP){
        return false;
    }
    else if (this->GDP < y.GDP){
        return true;
    }
    else{
        return false;
    }
}


bool Data::operator>=(Data& y) {
    return this->GDP>y.GDP;
}

