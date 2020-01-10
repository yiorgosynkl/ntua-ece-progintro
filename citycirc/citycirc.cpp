/**********************************************************************
* Project           : ntua-ece-progintro
* Program name      : citycirc.cpp
* Author            : yiorgosynkl (find me in Github: https://github.com/yiorgosynkl)
* Date created      : 20200109
* Purpose           : go around citys having positive amount of money in pocket
**********************************************************************/

#include <iostream>
using namespace std;

int main(){

    long n_citys;
    cin >> n_citys;
    long taxes[n_citys];
    for (long i=0; i<n_citys; i++)
        cin >> taxes[i];
    
    long pocket = 0;
    // if trip is not possible
    for (long i=0; i<n_citys; i++)
        pocket += taxes[i];
    if (pocket < 0){ // trip cannot be made
        cout << 0 << endl;
        return 0;
    }

    if (n_citys == 1){
        if (taxes[0] < 0)
            cout << 0 << endl;
        else
            cout << 1 << endl;
        return 0;
    }

    // find the possible trip
    long start_city = 0, end_city = 0; // the true index of end_city will be end_city % n_citys
    pocket = taxes[start_city];
    while( start_city != (end_city + 1) % n_citys ){
        if( pocket < 0 ){
            pocket -= taxes[start_city];
            start_city++;
        }
        else{ // pocket >= 0
            end_city++;
            pocket += taxes[end_city % n_citys];
        }
        if (start_city > end_city){
            end_city = start_city; // end_city++;
            pocket = taxes[start_city];
        }
        // cout << "start city: " << start_city << ", end_city: " << end_city % n_citys << ", pocket: " << pocket << endl;
    }

    cout << start_city + 1 << endl;

    return 0;
}