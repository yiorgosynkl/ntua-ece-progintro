/**********************************************************************
* Project           : ntua-ece-progintro
* Program name      : smthree.cpp
* Author            : yiorgosynkl (find me in Github: https://github.com/yiorgosynkl)
* Date created      : 20200123
* Purpose           : return the smallest between three numbers
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