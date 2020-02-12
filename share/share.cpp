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

long long max(long long alpha, long long bravo){
    if ( alpha > bravo )
        return alpha;
    return bravo;
}

int main(){

    long n_nums;
    cin >> n_nums;

    long *nums = new long[n_nums];
    for (long i = 0; i < n_nums; i++)
        cin >> nums[i];

    long long *sum_left = new long long [n_nums];
    sum_left[0] = nums[0];
    for (long i = 1; i < n_nums; i++)
        sum_left[i] = sum_left[i-1] + nums[i];

    long long sol = sum_left[n_nums - 1]; // sol can be 1 to sum of all (binary search)
    long long left = 1, right = sum_left[n_nums - 1];
    long long mid = (left + right) / 2; // div operation

    // cout << mid << endl;
    long subsum_idx = 0;
    long last_sum = 0;

    while (mid > left){
        last_sum = 0; subsum_idx = 0;
        // cout << "mid is: " << mid << endl;
        for (int i = 0; i < 3; i++){
            while (sum_left[subsum_idx] - last_sum <= mid && subsum_idx < n_nums)
                subsum_idx++;
            last_sum = sum_left[max(subsum_idx - 1, 0)];
        }
        if (subsum_idx == n_nums) // the goal is achievable
            right = mid;
        else
            left = mid;
        mid = (left + right) / 2;            
    }

    cout << right << endl;

    return 0;
}