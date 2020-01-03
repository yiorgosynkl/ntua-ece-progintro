/**********************************************************************
* Project           : ntua-ece-progintro
* Program name      : greater.cpp
* Author            : yiorgosynkl (find me in Github: https://github.com/yiorgosynkl)
* Date created      : 20200103
* Purpose           : return the greatest number from two inputs
**********************************************************************/

#include <iostream>
using namespace std;

int main(){

    long alpha, bravo;
    cin >> alpha;
    cin >> bravo;

    cout << max(alpha, bravo) << endl;

    return 0;
}
