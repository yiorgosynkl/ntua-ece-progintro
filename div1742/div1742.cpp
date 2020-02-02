/**********************************************************************
* Project           : ntua-ece-progintro
* Program name      : div1742.cpp
* Author            : yiorgosynkl (find me in Github: https://github.com/yiorgosynkl)
* Date created      : 20200202
* Purpose           : inputs divided by 17 and 42
**********************************************************************/

#include <iostream>
using namespace std;

int main(){

    long alpha, bravo;
    cin >> alpha; cin >> bravo;

    if ((alpha % 42 == 0 && bravo % 17 == 0) || (alpha % 17 == 0 && bravo % 42 == 0) )
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    return 0;
}