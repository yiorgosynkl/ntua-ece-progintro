/**********************************************************************
* Project           : ntua-ece-progintro
* Program name      : istriangle.cpp
* Author            : yiorgosynkl (find me in Github: https://github.com/yiorgosynkl)
* Date created      : 20200124
* Purpose           : find if the lengths can form a trinagle
**********************************************************************/
// to form a triangle with lengths a<b<c it must be true a+b > c

#include <iostream>
using namespace std;

int main(){

    double alpha, bravo, charlie;
    cin >> alpha; 
    cin >> bravo; 
    cin >> charlie;

    double max = 0, sum = 0;

    if (alpha > bravo && alpha > charlie){
        max = alpha;
        sum = bravo + charlie;
    }
    else if( bravo > charlie){
        max = bravo;
        sum = alpha + charlie;
    }
    else{
        max = charlie;
        sum = alpha + bravo;
    }

    if (max < sum)
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    return 0;
}