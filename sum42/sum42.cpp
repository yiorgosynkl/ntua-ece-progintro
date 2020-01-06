/**********************************************************************
* Project           : ntua-ece-progintro
* Program name      : sum42.cpp
* Author            : yiorgosynkl (find me in Github: https://github.com/yiorgosynkl)
* Date created      : 20200106
* Purpose           : yes if sum ends with 42
**********************************************************************/

#include <iostream>
using namespace std;

int main(){

    long N, M;
    cin >> N; cin >> M;
    if ( (N + M) % 100 == 42)
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    return 0;
}