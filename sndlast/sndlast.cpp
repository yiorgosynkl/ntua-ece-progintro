/**********************************************************************
* Project           : ntua-ece-progintro/sndlast
* Program name      : sndlast.cpp
* Author            : yiorgosynkl
* Date created      : 20191229
* Purpose           : return second digit from end
**********************************************************************/

#include <iostream>

using namespace std;

int main(){

    long input, output;
    cin >> input;

    output = (input % 100) / 10;
    cout << output << endl;

    return 0;
}

