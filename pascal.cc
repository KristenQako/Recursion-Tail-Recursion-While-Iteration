/********************************************
Name: Kristen Qako
Date: 3/20/2019
File: pascal.cc
Specification: Prints pascals pyramid.
*********************************************/
#include <iostream>

using namespace std;

int coeff(int n, int k);

int main(){ //main function that calls coeff to print pyramid.
    int num;
    cout << "Enter an integer greater than zero: ";
    cin >> num;

    for(int n = 0; n < num; n++){ //for loop to print the triangle as the desired output.
        cout << endl;
        for(int k = 0; k <= n; k++){
            cout << " " << coeff(n,k) << " ";
        }
    }
    
    cout << endl;   
}
int coeff(int n, int k){ //coeff function that calculates the values of the pyramid.
    if(k == 0 || k == n){
        return 1;
    }else{
        return coeff(n-1,k) + coeff(n - 1, k - 1);
    }
}
