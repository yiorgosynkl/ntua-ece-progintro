/**********************************************************************
* Project           : ntua-ece-progintro
* Program name      : twoends.cpp
* Author            : yiorgosynkl (find me in Github: https://github.com/yiorgosynkl)
* Date created      : 20200117
* Purpose           : find equal sums starting from ends of the array
**********************************************************************/

#include <iostream>
using namespace std;

int main(){

    long long n_nums;
    cin >> n_nums;

    long long *nums = new long long[n_nums];
    for (long long i=0; i < n_nums; i++)
        cin >> nums[i];

    long long sol = 0;
    long long left_idx = 0;
    long long right_idx = n_nums - 1;
    long long sum_left = nums[left_idx];
    long long sum_right = nums[right_idx];

    while (left_idx < right_idx){
        if (sum_left < sum_right){
            left_idx++;
            sum_left += nums[left_idx];
        }
        else if (sum_left > sum_right){
            right_idx--;
            sum_right += nums[right_idx];
        }
        else{
            sol = sum_left;
            left_idx++;
            sum_left += nums[left_idx];
        }
    }

    cout << sol << endl;

    return 0;
}