/******************************************
Name: Kristen Qako
Date: 3/20/2019
File: fibRec.cc
Specification: Implements fibonacci as regualar recursion.
********************************************/
#include <iostream>
int fibRec(int n);

using namespace std;
int main() //main function that takes in integer and evaluates fibRec at that integer.
{
    int n;
    cout << "Enter an integer" << endl;
    cin >> n;

    cout << "The fiboncci number for month " << n << " is " << fibRec(n) <<  endl;
    return 0;
}
    
int fibRec(int n){ //calculates fibonacci as a regular recursion.
    if(n<=1){ //base case.
            return n;
        }else{
        return fibRec(n - 1) + fibRec(n-2); //general case.
        }
}

