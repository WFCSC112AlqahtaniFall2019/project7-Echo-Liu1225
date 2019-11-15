//
// Created by 刘颖恒 on 2019/11/14.
//

#ifndef PROJECT7_DATA_H
#define PROJECT7_DATA_H

#include <string>
#include <iostream>

using namespace std;

class Data {
public:
    Data ();
    Data(string c, double r, double s, double g, double l);
    friend ostream& operator<<(ostream& os, const Data& pr);
    bool operator >= (Data& hr);
    bool operator < (Data& hr);
    bool operator > (Data& hr);


private:
    string country;
    double Rank;
    double Score;
    double GDP;
    double Expectancy;

};


#endif //PROJECT7_DATA_H