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
    
    long result = 0;
    long sum = 0, best = sum, last_idx = n_blocks - 1;

    // reps for each shop
    for (int reps = 0; reps < 2; reps++){
        sum = 0;
        for (long i = 0; i < n_blocks; i++){
            sum += nums[i];
        }
        
        last_idx = n_blocks - 1; // last element of the best block
        best = sum;
        for (long i = n_blocks; i < nums.size(); i++){
            sum = sum - nums[i - n_blocks] + nums[i]; 
            cout << sum << " ";
            if (best <= sum){
                best = sum;
                last_idx = i;
            }
        }
        cout << " --- " << last_idx << endl;
        result += best;
        // the shops will never cover each other since every shop has positive value
        nums.erase( nums.begin() + last_idx - n_blocks + 1, nums.begin() + last_idx + 1); 
    }

    cout << result << endl;
   
    return 0;
}

/********
TODO:
- needs to be corrected
********/