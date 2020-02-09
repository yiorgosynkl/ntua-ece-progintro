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

// long long max(long long alpha, long long bravo, long long charlie){
//     long long maximum = alpha;
//     maximum = max(maximum, bravo);
//     maximum = max(maximum, charlie);
//     return maximum;
// }

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

    long long sol = sums[n_nums - 1]; // sol can be 1 to sum of all (binary search)
    long long left = 1, right = sums[n_nums - 1];
    long long mid = (left + right) / 2; // div operation

    // cout << mid << endl;
    long subsum_idx = 0;
    long last_sum = 0;

    while (mid > left){
        last_sum = 0;
        for (int i = 0; i < 3; i++){
            while (sums[subsum_idx] - last_sum <= mid && subsum_idx < n_nums)
                subsum_idx++;
            if (subsum_idx > 0)
                last_sum = sums[subsum_idx - 1];
            else
                last_sum = 0;
        }
        if (subsum_idx == n_nums) // the goal is achievable
            left = mid;
        else
            right = mid;
        mid = (left + right) / 2;            
    }

    cout << mid << endl;

    return 0;
}