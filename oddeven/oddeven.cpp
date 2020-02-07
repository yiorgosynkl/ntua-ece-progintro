/**********************************************************************
* Project           : ntua-ece-progintro
* Program name      : oddeven.cpp
* Author            : yiorgosynkl (find me in Github: https://github.com/yiorgosynkl)
* Date created      : 20200207
* Purpose           : find max subarray with equal odd and even nums
**********************************************************************/

#include <iostream>
using namespace std;

int main(){

    long n_nums = 0, alpha = 0, counter = 0;
    cin >> n_nums;
    // count saves a counter with difference of odd and even number (pos if odd are more, neg if even are more)
    // whenever we find two equal numbers in count array => they have equal amount of even and odd nums inbetween (edges of subarray)
    long *count = new long[n_nums];
    long min_count = +2, max_count = -2;
    for (long i = 0; i < n_nums; i++){
        cin >> alpha;
        if (alpha % 2 == 1) 
            counter++;
        else
            counter--;
        min_count = min(counter, min_count);
        max_count = max(counter, max_count);
        count[i] = counter;
    }

    // for each value of count [min...max], save the first time (index) it showed up
    long n_first = max_count - min_count + 1;
    long *first = new long[n_first];
    // initialise with not a valid idx
    for (long i = 0; i < n_first; i++)
        first[i] = -1;

    long sol = 0;
    for (long i = 0; i < n_nums; i++){
        if (first[count[i] - min_count] == -1) // first time we find the number
            first[count[i] - min_count] = i;
        else
            sol = max(sol, i - first[count[i] - min_count]);
    }

    cout << sol << endl;

    return 0;
}