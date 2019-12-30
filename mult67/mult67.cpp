/**********************************************************************
* Project           : ntua-ece-progintro
* Program name      : mult67.cpp
* Author            : yiorgosynkl
* Date created      : 20191230
* Purpose           : return yes if number has multiple of 7 and not 6
**********************************************************************/

#include <iostream>

using namespace std;

int main(){

    long alpha;
    cin >> alpha;

    if (alpha % 7 == 0 && alpha % 6 != 0)
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    return 0;
}