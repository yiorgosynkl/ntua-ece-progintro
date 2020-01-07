/**********************************************************************
* Project           : ntua-ece-progintro
* Program name      : eqfst.cpp
* Author            : yiorgosynkl (find me in Github: https://github.com/yiorgosynkl)
* Date created      : 20200107
* Purpose           : solve fister order equation
**********************************************************************/

#include <iostream>
using namespace std;

int main(){

    float a, b; // a*x+b
    cin >> a; cin >> b;

    if (a==0 && b==0){
        cout << "trivial" << endl;
    }
    else if (a==0 ) /* && b!=0 */{
        cout << "impossible" << endl;
    }
    else{
        cout.precision(6);
        cout << - (b / a) << endl;
    }

    return 0;
}