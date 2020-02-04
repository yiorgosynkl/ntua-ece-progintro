/**********************************************************************
* Project           : ntua-ece-progintro
* Program name      : dsum.cpp
* Author            : yiorgosynkl (find me in Github: https://github.com/yiorgosynkl)
* Date created      : 20200204
* Purpose           : return the sum of the digits of input number
**********************************************************************/

#include <iostream>
using namespace std;

int main(){

    long input;
    cin >> input; // 1 <= input <= 10.000.000

    int res = 0;
    for (int i = 0; i < 8; i++){
        res += input % 10;
        input /=10;
    }

    cout << res << endl;

    return 0;
}