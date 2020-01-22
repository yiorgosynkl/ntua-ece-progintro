/**********************************************************************
* Project           : ntua-ece-progintro
* Program name      : mul4dig.cpp
* Author            : yiorgosynkl (find me in Github: https://github.com/yiorgosynkl)
* Date created      : 20200122
* Purpose           : product is 4 digits
**********************************************************************/

#include <iostream>
using namespace std;

int main(){

    long alpha, bravo, product;
    cin >> alpha; cin >> bravo;

    product = alpha*bravo;

    if (product>=1000 && product<10000)
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    return 0;
}