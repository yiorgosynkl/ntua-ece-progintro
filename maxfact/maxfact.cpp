/**********************************************************************
* Project           : ntua-ece-progintro
* Program name      : maxfact.cpp
* Author            : yiorgosynkl (find me in Github: https://github.com/yiorgosynkl)
* Date created      : 20200102
* Purpose           : return the biggest number whose with factorial is less than the input
**********************************************************************/

#include <iostream>
using namespace std;

int main(){

    long input, factorial = 1, output;
    cin >> input;

    output = 1; factorial = 1;
    while (factorial <= input){
        output++;
        factorial *= output;
    }

    cout << --output << endl;

    return 0;
}
