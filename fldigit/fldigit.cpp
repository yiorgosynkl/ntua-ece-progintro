/**********************************************************************
* Project           : ntua-ece-progintro
* Program name      : fldigit.cpp
* Author            : yiorgosynkl (find me in Github: https://github.com/yiorgosynkl)
* Date created      : 20200131
* Purpose           : return yes if first ant last digit of input are equal to given number
**********************************************************************/

#include <iostream>
using namespace std;

int main(){

    long input;
    cin >> input;

    int num, first, last;
    cin >> num;
    first = (input / 100000) % 1000000;
    last = input % 10;

    if (num == first && last == num)
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    return 0;
}