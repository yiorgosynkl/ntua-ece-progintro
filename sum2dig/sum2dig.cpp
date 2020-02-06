/**********************************************************************
* Project           : ntua-ece-progintro
* Program name      : sum2dig.cpp
* Author            : yiorgosynkl (find me in Github: https://github.com/yiorgosynkl)
* Date created      : 20200206
* Purpose           : sum of last 2 digits
**********************************************************************/

#include <iostream>
using namespace std;

int main(){

    long alpha;
    cin >> alpha;

    cout << (alpha % 10) + ((alpha/10) % 10) << endl;

    return 0;
}