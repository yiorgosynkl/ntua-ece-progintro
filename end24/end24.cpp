/**********************************************************************
* Project           : ntua-ece-progintro
* Program name      : end24.cpp
* Author            : yiorgosynkl
* Date created      : 20200101
* Purpose           : return cardinality of primes under input number
**********************************************************************/

#include <iostream>
using namespace std;

int main(){

    long input;
    cin >> input;

    if ((input*input)%100 == 24)
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    return 0;
}