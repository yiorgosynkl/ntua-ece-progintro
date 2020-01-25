/**********************************************************************
* Project           : ntua-ece-progintro
* Program name      : max2sum_nomem.cpp
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

    long alpha, bravo;
    cin >> alpha; cin >> bravo;

    long res = alpha + bravo + 1; // the best result
    long best_prev = max(alpha + 1, bravo) + 1; // holds the best possible match to maximise the result for each number

    for (long i = 2; i < n_nums; i++){
        cin >> alpha;
        res = max(res, alpha + best_prev);
        best_prev = max(best_prev, alpha) + 1;        
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