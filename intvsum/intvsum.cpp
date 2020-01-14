/**********************************************************************
* Project           : ntua-ece-progintro
* Program name      : intvsum.cpp
* Author            : yiorgosynkl (find me in Github: https://github.com/yiorgosynkl)
* Date created      : 20200114
* Purpose           : sum of subarray corner elements equal to sum of inbetween elements
**********************************************************************/

#include <iostream>
using namespace std;

int main(){

    long n_nums;
    cin >> n_nums;

    long *nums = new long[n_nums];
    long *sum_left = new long[n_nums];
    
    cin >> nums[0]; 
    sum_left[0] = nums[0];
    for (long i = 1; i < n_nums; i++){
        cin >> nums[i];
        sum_left[i] = nums[i] + sum_left[i-1];
    }

    for(long right = n_nums - 1; right >= 2; right--){
        for (long left = right - 2; left >=0; left--){
            // solution found
            if (nums[left] + nums[right] == sum_left[right - 1] - sum_left[left]){
                cout << right + 1 << endl;
                return 0;
            }
        }
    }

    cout << 0 << endl;

    return 0;
}