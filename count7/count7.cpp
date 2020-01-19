/**********************************************************************
* Project           : ntua-ece-progintro
* Program name      : count7.cpp
* Author            : yiorgosynkl (find me in Github: https://github.com/yiorgosynkl)
* Date created      : 20200119
* Purpose           : how many 7 digits in a 2 digit number
**********************************************************************/

#include <iostream>
using namespace std;

int main(){

    int input;
    cin >> input;


    if (input == 77)
        cout << 2 << endl;
    else if (input%10 == 7)
        cout << 1 << endl;
    else if (input < 80 && input >= 70)
        cout << 1 << endl;
    else
        cout << 0 << endl;

    return 0;
}