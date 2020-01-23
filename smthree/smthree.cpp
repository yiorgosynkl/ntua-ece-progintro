/**********************************************************************
* Project           : ntua-ece-progintro
* Program name      : cb3.cpp
* Author            : yiorgosynkl (find me in Github: https://github.com/yiorgosynkl)
* Date created      : 20200121
* Purpose           : ways a number can be written as sum of 3 cubes
**********************************************************************/

#include <iostream>
using namespace std;

int main(){

    long alpha, bravo, charlie;
    cin >> alpha;
    cin >> bravo;
    cin >> charlie;

    if (alpha < bravo && alpha < charlie)
        cout << alpha << endl;
    else if (bravo < charlie)
        cout << bravo << endl;
    else
        cout << charlie << endl;

    return 0;
}