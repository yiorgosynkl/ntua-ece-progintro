/**********************************************************************
* Project           : ntua-ece-progintro
* Program name      : elev2.cpp
* Author            : yiorgosynkl (find me in Github: https://github.com/yiorgosynkl)
* Date created      : 20200208
* Purpose           : minimise num of rides of the elevator
**********************************************************************/

#include <iostream>
#include <vector>
#include <bits/stdc++.h> // sort
using namespace std;

// restricions: weight <= max_weight, number of people <= 2
int main(){

    long n_weights, max_weight, alpha;
    cin >> n_weights; cin >> max_weight;

    vector<long> weights;
    for (long i = 0; i < n_weights; i++){
        cin >> alpha;
        weights.push_back(alpha);
    }

    sort(weights.begin(), weights.end()); 

    long heavy_idx = n_weights - 1, light_idx = 0;
    long rides = 0;

    while (light_idx <= heavy_idx){
        if ( weights[light_idx] + weights[heavy_idx] <= max_weight ){
            light_idx++; heavy_idx--;
        }
        else{
            heavy_idx--;
        }
        rides++;
    } 

    cout << rides << endl;

    return 0;
}
