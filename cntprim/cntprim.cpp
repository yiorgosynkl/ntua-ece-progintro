/**********************************************************************
* Project           : ntua-ece-progintro
* Program name      : cntprim.cpp
* Author            : yiorgosynkl
* Date created      : 20191230
* Purpose           : return cardinality of primes under input number
**********************************************************************/

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

void print_array(short int* p, long length){
    cout << "[ ";
    for (long i=0; i < length; i++)
        cout << p[i] << " "; 
    cout << "]" << endl;
}

long sum_array(short int* p, long length){
    long sum = 0;
    for (long i=0; i<length; i++)
        sum += p[i];
    return sum;
}

int main(){

    long N;
    cin >> N;

    short int* nums = new short int [N+1]; // from 0 to N
    fill_n(nums, N+1, 1); nums[0] = 0; nums[1] = 0;
    // print_array(nums, N+1);

    long prime = 2; 
    long limit = (long) sqrt(N);
    // eratosthenes sieve
    for (long prime = 2; prime <= limit; prime++){
        if (nums[prime] == 0)
            continue;
        for (long k = prime * 2; k <= N; k+=prime){
            nums[k] = 0;
        }
    }

    // print_array(nums, N+1);
    cout << sum_array(nums, N+1) << endl;

    return 0;
}