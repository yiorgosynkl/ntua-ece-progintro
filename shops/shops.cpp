/**********************************************************************
* Project           : ntua-ece-progintro
* Program name      : circdisc.cpp
* Author            : yiorgosynkl (find me in Github: https://github.com/yiorgosynkl)
* Date created      : 20200126
* Purpose           : where is a 2 dimensional point relevant to the unit circle 
**********************************************************************/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    long n_nums, n_blocks;
    cin >> n_nums; cin >> n_blocks;
    
    vector<long> nums;
    long alpha = 0;
    for (long i = 0; i < n_nums; i++){
        cin >> alpha;
        nums.push_back(alpha);
    }
    
    // find last element of block
    long sum = 0;
    for (long i = 0; i < n_blocks; i++)
        sum += nums[i];

    long last_idx = n_blocks - 1;
    long best = sum;
    for (long i = n_blocks; i < n_nums; i++){
        sum = sum - nums[i - n_blocks] + nums[i]; 
        if (best < sum){
            best = sum;
            last_idx = i;
        }
    }
    
    cout << best << endl;
    long result = best;
    // delete the selected blocks
    nums.erase( nums.begin() + last_idx - n_blocks + 1, nums.begin() + last_idx );

    // find last element of block
    sum = 0;
    for (long i = 0; i < n_blocks; i++)
        sum += nums[i];

    last_idx = n_blocks - 1;
    best = sum;
    for (long i = n_blocks; i < n_nums; i++){
        sum = sum - nums[i - n_blocks] + nums[i]; 
        if (best < sum){
            best = sum;
            last_idx = i;
        }
    }
    result += best;
    cout << best << endl;
    cout << result << endl;

    return 0;
}