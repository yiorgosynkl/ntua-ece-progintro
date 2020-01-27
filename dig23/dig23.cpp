/**********************************************************************
* Project           : ntua-ece-progintro
* Program name      : circdisc.cpp
* Author            : yiorgosynkl (find me in Github: https://github.com/yiorgosynkl)
* Date created      : 20200126
* Purpose           : where is a 2 dimensional point relevant to the unit circle 
**********************************************************************/

#include <iostream>
using namespace std;

int main(){

    long alpha, bravo;
    cin >> alpha;
    cin >> bravo;

    long prod = alpha * bravo;
    cout << (prod % 1000) / 100; // 3 digit from end
    cout << (prod % 100) / 10 << endl; // 2 digit from end
    // cout << (prod % 1000) / 10 << endl; // this would be one line

    return 0;
}