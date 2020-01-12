/**********************************************************************
* Project           : ntua-ece-progintro
* Program name      : divprev_quick.cpp
* Author            : yiorgosynkl (find me in Github: https://github.com/yiorgosynkl)
* Date created      : 20200112
* Purpose           : find the smallest num that divides all his previous nums
**********************************************************************/

#include <iostream>
#include <stack>
using namespace std;

int main(){

    long n_nums; 
    cin >> n_nums;
    long nums[n_nums];
    for (long i=0; i<n_nums; i++)
        cin >> nums[i];

    long sol = nums[0];

    stack <long> stack; // stack of numbers that are not divided yet
    stack.push(sol);

    for (long i = 1; i<n_nums; i++){
        while (!stack.empty() && stack.top() % nums[i] == 0)
            stack.pop();
        if (stack.empty()) // found number that divides all undivided
            sol = nums[i];
        stack.push(nums[i]);
    }

    cout << sol << endl;

    return 0;
}

/**********************************************************************
the stack contains numbers, for which we have not found a divisor yet
if a divides b, a < b
**********************************************************************/
