/**********************************************************************
* Project           : ntua-ece-progintro/
* Program name      : sumofpow.cpp
* Author            : yiorgosynkl (find me in Github)
* Date created      : 20191231
* Purpose           : find how many sums of powers of 2, 3, 5 are less than N
**********************************************************************/

#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main(){

    long N;
    cin >> N;

    vector<long> vec2, vec3, vec5;
    for (long i=1; i<=N-2; i*=2) // has to be smaller than N-1 (because we add another 2 numbers >= 1)
        vec2.push_back(i);
    for (long i=1; i<=N-2; i*=3)
        vec3.push_back(i);    
    for (long i=1; i<=N-2; i*=5)
        vec5.push_back(i);

    // long nums[N+1] = { 0 }; // from 0 to N
    long nums[N+1];
    for (long i=0; i<N+1; i++)
        nums[i] = 0;
    long sum = 0;

    for (auto i = vec2.begin(); i != vec2.end(); ++i){
        for (auto j = vec3.begin(); j != vec3.end(); ++j){
            for (auto k = vec5.begin(); k != vec5.end(); ++k){
                sum = *i + *j + *k;
                if (sum <= N){
                    nums[sum] = 1;
                }
                // cout << *i << " " << *j << " " << *k << "  =>  " << sum << endl;
            }
        }
    }

    long ans = accumulate(nums, nums+N+1, 0);
    cout << ans << endl;

    return 0;
}

