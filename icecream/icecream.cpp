/**********************************************************************
* Project           : ntua-ece-progintro
* Program name      : icecream.cpp
* Author            : yiorgosynkl (find me in Github: https://github.com/yiorgosynkl)
* Date created      : 20200203
* Purpose           : find the maximum nubmer of children the icecream shop can serve
**********************************************************************/

#include <iostream>
using namespace std;

int main(){

    long n_children, walk_distance;
    cin >> n_children; 
    cin >> walk_distance;

    long *children = new long[n_children];
    for (long i = 0; i < n_children; i++)
        cin >> children[i];

    long shop_area = 2 * walk_distance + 1;
    long left_idx = 0, right_idx = 0;
    long max_children_served = 0;

    for (left_idx = 0; left_idx < n_children; left_idx++){
        while ( right_idx < n_children - 1 && children[right_idx + 1] - children[left_idx] <= shop_area )
            right_idx++;
        max_children_served = max(max_children_served, right_idx - left_idx + 1);
    }    

    cout << max_children_served << endl;

    return 0;
}
