/**********************************************************************
* Project           : ntua-ece-progintro
* Program name      : lowsum.cpp
* Author            : yiorgosynkl (find me in Github: https://github.com/yiorgosynkl)
* Date created      : 20200115
* Purpose           : find a sum of 2 numbers closest to 0 (in a sorted array)
**********************************************************************/

#include <iostream>
#include <cmath>        // abs
using namespace std;

int main(){

    long n_nums;
    cin >> n_nums;

    long *nums = new long[n_nums];
    for (long i=0; i<n_nums; i++)
        cin >> nums[i];

    long neg_idx = 0, pos_idx = n_nums - 1;
    long best_sum = nums[neg_idx] + nums[pos_idx];
    long sum = 0;

    while (neg_idx < pos_idx){
        sum = nums[neg_idx] + nums[pos_idx];
        if (abs(best_sum) > abs(sum))
            best_sum = sum;
        if (sum > 0)
            pos_idx--;
        else if (sum < 0)
            neg_idx++;
        else 
            break;
    }

    cout << best_sum << endl;

    return 0;
}