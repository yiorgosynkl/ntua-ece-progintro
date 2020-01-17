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

    long long *sum_left = new long long[n_nums]; // sum 0...i
    long long *sum_right = new long long[n_nums]; // sum i...n-1
    sum_left[0] = nums[0];
    sum_right[n_nums - 1] = nums[n_nums - 1];
    for (long long i = 1; i <= n_nums - 1; i++)
        sum_left[i] = nums[i] + sum_left[i-1];
    for (long long i = n_nums - 2; i >= 0; i--)
        sum_right[i] = nums[i] + sum_right[i+1];

    long long sol = 0;
    long long left_idx = 0;
    long long right_idx = n_nums - 1;

    while (left_idx < right_idx){
        if (sum_left[left_idx] < sum_right[right_idx]){
            left_idx++;
        }
        else if (sum_left[left_idx] > sum_right[right_idx]){
            right_idx--;
        }
        else{
            sol = sum_left[left_idx];
            left_idx++;
        }
    }

    cout << sol << endl;

    return 0;
}