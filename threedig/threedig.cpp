/**********************************************************************
* Project           : ntua-ece-progintro/threedig
* Program name      : threedig.cpp
* Author            : yiorgosynkl
* Date created      : 20191229
* Purpose           : return yes if number has 3 digits
**********************************************************************/

#include <iostream>

using namespace std;

int main(){

    long input, output;
    cin >> input;

    if (input>=100 && input<1000)
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    return 0;
}

