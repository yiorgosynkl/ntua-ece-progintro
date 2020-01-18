/**********************************************************************
* Project           : ntua-ece-progintro
* Program name      : skating.cpp
* Author            : yiorgosynkl (find me in Github: https://github.com/yiorgosynkl)
* Date created      : 20200118
* Purpose           : find max sum, starting from the end of array
**********************************************************************/

#include <iostream>
using namespace std;

int main(){

    long n_nums;
    cin >> n_nums;

    int *nums = new int[n_nums];
    for (long i=0; i < n_nums; i++)
        cin >> nums[i];
    
    long sol = 0;
    long sum_right = 0; // sum i...n_nums-1
    for (long i=n_nums-1; i >= 0; i--){
        sum_right += nums[i];
        if (sum_right > sol)
            sol = sum_right;
    }

    cout << sol << endl;

    return 0;
}