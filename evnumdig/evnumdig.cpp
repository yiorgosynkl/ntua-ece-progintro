/**********************************************************************
* Project           : ntua-ece-progintro
* Program name      : evnumdig.cpp
* Author            : yiorgosynkl (find me in Github: https://github.com/yiorgosynkl)
* Date created      : 20200205
* Purpose           : return yes if amount of digits is even
**********************************************************************/

#include <iostream>
#include <string>     // std::string, std::to_string
using namespace std;

int main(){

    string input;
    cin >> input;

    if (input.size() % 2 == 0)
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    return 0;
}