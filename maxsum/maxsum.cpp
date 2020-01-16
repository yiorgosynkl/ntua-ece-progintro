/**********************************************************************
* Project           : ntua-ece-progintro
* Program name      : maxsum.cpp
* Author            : yiorgosynkl (find me in Github: https://github.com/yiorgosynkl)
* Date created      : 20200116
* Purpose           : find maximum sum of a subarray in given array
**********************************************************************/

#include <iostream>
using namespace std;

int main(){

    long n_nums;
    cin >> n_nums;

    int *nums = new int[n_nums];
    for (long i=0; i<n_nums; i++)
        cin >> nums[i];

    long sol = nums[0]; // solution of problem
    long best_prev_sum = nums[0]; // holds the best sum that can be achieved using the number with index - 1
    for (long i=1; i<n_nums; i++){
        if (best_prev_sum < 0)
            best_prev_sum = nums[i];
        else
            best_prev_sum += nums[i];
        if (best_prev_sum > sol)
            sol = best_prev_sum;
    }

    cout << sol << endl;

    return 0;
}