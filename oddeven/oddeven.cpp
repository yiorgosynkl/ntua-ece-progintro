/**********************************************************************
* Project           : ntua-ece-progintro
* Program name      : oddeven.cpp
* Author            : yiorgosynkl (find me in Github: https://github.com/yiorgosynkl)
* Date created      : 20200207
* Purpose           : find max subarray with equal odd and even nums
**********************************************************************/

#include <iostream>
using namespace std;

int main(){

    long n_nums, alpha;
    cin >> n_nums;
    int *nums = new int[n_nums];
    for (long i = 0; i < n_nums; i++){
        cin >> alpha;
        if ( alpha % 2 == 1)
            nums[i] = 1;
        else
            nums[i] = -1;
    }

    long *sum_left = new long[n_nums];
    sum_left[0] = nums[0];
    for (long i = 1; i < n_nums; i++)
        sum_left[i] = sum_left[i-1] + nums[i];

    for (long i = 0; i < n_nums; i++)
        cout << sum_left[i] << " ";

    cout << endl;

    long mmin = +5, mmax = -5;
    for (long i = 0; i < n_nums; i++){
        mmin = min(sum_left[i], mmin);
        mmax = max(sum_left[i], mmax);
    }
    cout << mmax << " " << mmin << endl;

    return 0;
}