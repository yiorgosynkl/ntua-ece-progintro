/**********************************************************************
* Project           : ntua-ece-progintro
* Program name      : sumint.cpp
* Author            : yiorgosynkl (find me in Github: https://github.com/yiorgosynkl)
* Date created      : 20200129
* Purpose           : subarrays with sum less than K
**********************************************************************/

#include <iostream>
using namespace std;

int main(){

    long n_nums, limit;
    cin >> n_nums; cin >> limit;

    long *nums = new long[n_nums];
    for (long i = 0; i < n_nums; i++)
        cin >> nums[i];

    long left_idx = 0;
    long right_idx = 0;
    long long sum = nums[0];
    long long res = 0; 

    for (;;) {
        // cout << "left: " << left_idx << ", right: " << right_idx << ", sum: " << sum << " ==> res : ";
        if (sum <= limit){
            res += right_idx - left_idx + 1; // the amount of subarrays with sum less than the limit (removing nums can only reduce the sum)
            right_idx++;
            if (right_idx >= n_nums) // terminating condition
                break;
            sum += nums[right_idx];
        }
        else{
            sum -= nums[left_idx];
            left_idx++;
            if (left_idx > right_idx){
                right_idx++;
                sum = nums[right_idx];
            }
        }
        // cout << res << endl;
    }

    cout << res << endl;

    return 0;
}