/**********************************************************************
* Project           : ntua-ece-progintro
* Program name      : sumx.cpp
* Author            : yiorgosynkl (find me in Github: https://github.com/yiorgosynkl)
* Date created      : 20200110
* Purpose           : return amount of pair of numbers that adds at x
**********************************************************************/

#include <iostream>
using namespace std;
#define MAX_NUM 1000000

int main(){

    long n, x;
    cin >> n; cin >> x;
    
    bool *nums = new bool[MAX_NUM]; // 1...1000000 (index 0 to 999999)
    for (long i=0; i < MAX_NUM; i++)
        nums[i] = 0;

    long alpha = 0;
    for (long i=0; i < n; i++){
        cin >> alpha;
        nums[alpha - 1] = 1;
    }

    long res = 0;
    long small_idx, big_idx;
    big_idx = x/2 + 1; 
    if (x % 2 == 0)
        small_idx = x/2 - 1;
    else
        small_idx = x/2;
    big_idx--; small_idx--; // because idx starts at 0
    while (small_idx>=0 && big_idx<MAX_NUM){
        if (nums[small_idx] && nums[big_idx])
            res++;
        small_idx--;
        big_idx++;
    }

    cout << res << endl;

    return 0;
}