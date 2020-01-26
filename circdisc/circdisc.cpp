/**********************************************************************
* Project           : ntua-ece-progintro
* Program name      : circdisc.cpp
* Author            : yiorgosynkl (find me in Github: https://github.com/yiorgosynkl)
* Date created      : 20200126
* Purpose           : where is a 2 dimensional point relevant to the unit circle 
**********************************************************************/

#include <iostream>
using namespace std;

int main(){

    double x_cord, y_cord;
    cin >> x_cord; cin >> y_cord;

    double dist = x_cord * x_cord + y_cord * y_cord;

    if (dist < 1.0)
        cout << "inside" << endl;
    else if (dist == 1.0)
        cout << "border" << endl;
    else
        cout << "outside" << endl;

    return 0;
}