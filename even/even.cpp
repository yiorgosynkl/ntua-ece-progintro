/**********************************************************************
* Project           : ntua-ece-progintro
* Program name      : even.cpp
* Author            : yiorgosynkl (find me in Github: https://github.com/yiorgosynkl)
* Date created      : 20200105
* Purpose           : return how many numbers are even
**********************************************************************/

#include <iostream>
using namespace std;

int main(){

    long M, N;
    cin >> M; cin >> N;
    int solution = 0;

    if (M % 2 == 0) solution++;
    if (N % 2 == 0) solution++;

    cout << solution << endl;

    return 0;
}