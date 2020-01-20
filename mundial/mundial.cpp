/**********************************************************************
* Project           : ntua-ece-progintro
* Program name      : mundial.cpp
* Author            : yiorgosynkl (find me in Github: https://github.com/yiorgosynkl)
* Date created      : 20200120
* Purpose           : check if the input year mundial took place
**********************************************************************/

#include <iostream>
using namespace std;

int main(){

    int year;
    cin >> year;

    if (year>=1930 && year % 4 == 2 && year<2020 && year!=1942 && year!=1946)
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    return 0;
}