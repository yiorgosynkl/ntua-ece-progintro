/**********************************************************************
* Project           : ntua-ece-progintro
* Program name      : max2sum.cpp
* Author            : yiorgosynkl (find me in Github: https://github.com/yiorgosynkl)
* Date created      : 20200125
* Purpose           : return the maximum a[i] + a[j] + |i - j|
**********************************************************************/

#include <iostream>
using namespace std;

long max(long alpha, long bravo){
    if (alpha > bravo)
        return alpha;
    else
        return bravo;
}

int main(){

    long n_nums;
    cin >> n_nums;

    long *nums = new long[n_nums];
    for (long i=0; i<n_nums; i++)
        cin >> nums[i];
    
    long res = nums[0] + nums[1] + 1;
    long best_prev = max(nums[0] + 1, nums[1]) + 1; // best possible match to maximise the result

    for (long i = 2; i < n_nums; i++){
        res = max(res, nums[i] + best_prev);
        best_prev = max(best_prev, nums[i]) + 1;        
    }

    cout << res << endl;

    return 0;
}

/**********************************************************************
THOUGHTS:
- we use a variable (best_prev) which holds the best possible value of all the previous numbers (number + index difference)
- with each loop we update this variable (for every num its different)
- using each number and the best_prev of the number we try to maximse the result
**********************************************************************/