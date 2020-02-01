/**********************************************************************
* Project           : ntua-ece-progintro
* Program name      : divpow2.cpp
* Author            : yiorgosynkl (find me in Github: https://github.com/yiorgosynkl)
* Date created      : 20200201
* Purpose           : return highset power of 2 that divides input nubmer
**********************************************************************/

#include <iostream>
using namespace std;

int main(){
    
    long input;
    cin >> input;

    long exp = 1, pow = 2;
    while (input % pow == 0){
        pow *= 2;
        exp++;
    }

    cout << exp - 1 << endl;

    return 0;
}