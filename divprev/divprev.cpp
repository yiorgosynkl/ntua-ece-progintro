/**********************************************************************
* Project           : ntua-ece-progintro
* Program name      : divprev.cpp
* Author            : yiorgosynkl (find me in Github: https://github.com/yiorgosynkl)
* Date created      : 20200112
* Purpose           : find the smallest num that divides all his previous nums
**********************************************************************/

#include <iostream>
using namespace std;

int main(){

    long n_nums; 
    cin >> n_nums;
    long nums[n_nums];
    for (long i=0; i<n_nums; i++)
        cin >> nums[i];

    long sol_idx = 0;
    long sol_value = nums[sol_idx];
    long i, j;

    for (i = 1; i<n_nums; i++){
        for (j=i; j >= sol_idx; j--){
            if (nums[j] % nums[i] != 0)
                break;
        }
        if (j == sol_idx - 1){ // found solution
            sol_idx = i;
            sol_value = nums[sol_idx];
        }
    }

    cout << sol_value << endl;

    return 0;
}

/**********************************************************************
if a number _a divides all his previous (lets call it set K), we have an answer.
it is enough to find a number _b that divides _a to be sure that _b divides all the 
numbers in set K.
this trick reduces the complexity of the program
**********************************************************************/

/**********************************************************************
it would be even better to have a vector with the undivided numbers
this way, if a number is divided, than you can remove it and hold only the divisor in the vector
**********************************************************************/