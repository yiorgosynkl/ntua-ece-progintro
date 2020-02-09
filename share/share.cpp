/**********************************************************************
* Project           : ntua-ece-progintro
* Program name      : share.cpp
* Author            : yiorgosynkl (find me in Github: https://github.com/yiorgosynkl)
* Date created      : 20200209
* Purpose           : minimise maximum sum (split into 3  subarrays)
**********************************************************************/

#include <iostream>
#include <math.h>       /* cbrt */
using namespace std;

long long max(long long alpha, long long bravo, long long charlie){
    long long maximum = alpha;
    maximum = max(maximum, bravo);
    maximum = max(maximum, charlie);
    return maximum;
}

int main(){

    long n_nums;
    cin >> n_nums;

    long *nums = new long[n_nums];
    for (long i = 0; i < n_nums; i++)
        cin >> nums[i];

    long long *sums = new long long [n_nums];
    sums[0] = nums[0];
    for (long i = 1; i < n_nums; i++)
        sums[i] = sums[i-1] + nums[i];

    long left_end_idx = 0, mid_end_idx = 1; 
    long long left_sum = sums[left_end_idx];
    long long mid_sum = sums[mid_end_idx] - sums[left_end_idx]; 
    long long right_sum = sums[n_nums - 1] - sums[mid_end_idx];

    long long sol = max(left_sum, mid_sum, right_sum);

    return 0;
}