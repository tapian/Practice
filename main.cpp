//
//  main.cpp
//  Practice
//
//  Created by Nydia Tapia on 9/12/19.
//  Copyright © 2019 Nydia Tapia. All rights reserved.
//
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    const double CONST_PI = 3.14;
    int radius = 5;
    double area;
    double circum;
    
    circum = 2* CONST_PI * radius;
    area = CONST_PI * pow(radius, 2);
    cout << "the circumference is " << circum << endl;
    cout << "the area is " << area << endl;
    
    return 0;
}
