/**********************************************************************
* Project           : ntua-ece-progintro
* Program name      : swaps.cpp
* Author            : yiorgosynkl (find me in Github: https://github.com/yiorgosynkl)
* Date created      : 20200108
* Purpose           : swap number in array based on criterion
**********************************************************************/


#include <iostream>
using namespace std;

int main(){

    long N;
    cin >> N;

    long *nums = new long[N];
    for (long i=0; i<N; i++)
        cin >> nums[i];

    // calculating the smart way
    long swaps = 0; long negs = 0;
    for (long i=0; i<N; i++){
        if (nums[i] < 0){
            swaps += i - negs; // because the neg will move from index i to index negs
            negs++;
        } 
    }

    long first_neg = 0, last_pos = 0;
    for (long i=0; i < N; i++){
        if (nums[i] < 0){
            first_neg = nums[i];
            break;
        }
    }
    for (long i=N-1; i>=0; i--){
        if (nums[i] > 0){
            last_pos = nums[i];
            break;
        }
    }
    
    cout << swaps << endl;
    cout << first_neg << endl;
    cout << last_pos << endl;
    
    return 0;
}
