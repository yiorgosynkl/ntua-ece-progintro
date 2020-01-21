/**********************************************************************
* Project           : ntua-ece-progintro
* Program name      : cb3.cpp
* Author            : yiorgosynkl (find me in Github: https://github.com/yiorgosynkl)
* Date created      : 20200121
* Purpose           : ways a number can be written as sum of 3 cubes
**********************************************************************/

#include <iostream>
#include <math.h>       /* cbrt */
using namespace std;

int main(){

    long long n_nums;
    cin >> n_nums;
    long long *nums = new long long[n_nums];
    long long max = 0;
    for (long long i=0; i<n_nums; i++){
        cin >> nums[i];
        if (max < nums[i])
            max = nums[i];
    }

    long limit = ceil(cbrt(max));

    long long *res = new long long[n_nums];
    for (long i=0; i<n_nums; i++)
        res[i] = 0;

    for (long long i=0; i < limit; i++){
        for (long long j=i; j < limit; j++){
            for (long long k=j; k < limit; k++){
                for (long long idx=0; idx<n_nums; idx++){
                    if (nums[idx] == (i*i*i + j*j*j + k*k*k)){
                        res[idx] += 1;
                    }
                }
            }
        }
    }

    for (long i=0; i<n_nums; i++)
        cout << res[i] << endl;

    return 0;
}
