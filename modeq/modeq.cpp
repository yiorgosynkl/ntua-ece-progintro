/**********************************************************************
* Project           : ntua-ece-progintro
* Program name      : modeq.cpp
* Author            : yiorgosynkl (find me in Github: https://github.com/yiorgosynkl)
* Date created      : 20200109
* Purpose           : mod 42 of 3 numbers
**********************************************************************/

#include <iostream>
using namespace std;

int main(){

    long alpha, bravo, charlie;
    cin >> alpha; cin >> bravo; cin >> charlie;

    if (alpha % 42 == bravo % 42 && alpha % 42 == charlie % 42)
        cout << alpha % 42 << endl;
    else
        cout << "no" << endl;

    return 0;
}