/**********************************************************************
* Project           : ntua-ece-progintro
* Program name      : cntdivs.cpp
* Author            : yiorgosynkl (find me in Github: https://github.com/yiorgosynkl)
* Date created      : 20200104
* Purpose           : number of nubmers with common divisors with input
**********************************************************************/

#include <iostream>
#include <vector>
#include <algorithm> // sqrt
using namespace std;

long sum_array(short int* p, long length){
    long sum = 0;
    for (long i=0; i<length; i++)
        sum += p[i];
    return sum;
}

void print_array(short int* p, long length){
    cout << "[ ";
    for (long i=0; i < length; i++)
        cout << p[i] << " "; 
    cout << "]" << endl;
}

void print_vector(vector<long> p){
    vector<long>::iterator itr;
    cout << "{ ";
    for (itr = p.begin(); itr != p.end(); ++itr) 
        cout << *itr << " ";
    cout << "}" << endl;
}

int main(){

    long input;
    cin >> input;

    /* 1. find divisors of number */
    vector<long> divisors;
    vector<long>::iterator itr;
    for (long i = 2; i < input; i++){
        if (input % i == 0)
            divisors.push_back(i);
    }
    // print_vector(divisors);

    /* 2. find multiples of divisors */
    short int *commons = new short int[input];
    fill_n(commons, input, 0);
    commons[1] = 1;

    long alpha = 0;
    for (itr = divisors.begin(); itr != divisors.end(); ++itr){
        alpha = *itr;
        for (long i=alpha; i<input; i+=alpha)
            commons[i] = 1;
    }
    // print_array(commons, input);
    
    cout << sum_array(commons, input) << endl;

    return 0;
}