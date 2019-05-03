/**************************************
Name: Kristen Qako
Date: 3/20/2019
File: fibTail.cc
Specification: Implements fibonacci as a tail Recursion.
***************************************/

#include <iostream>
int fibIter(int n);
int fibTail(int n, int i, int fib_i_minus1, int fib_i);

using namespace std;
int main() //main function that takes in integer and evaluates at input integer.
{
    int n;
    cout << "Enter an integer" << endl;
    cin >> n;

    cout << "The fiboncci number for month " << n << " is " << fibIter(n) <<  endl;
    return 0;
}
int fibIter(int n){ //file that initializes values required for fibTail.
    int i = 1;
    int fib_i_minus1 = 0;
    int fib_i = 1;
    return  fibTail( n, i, fib_i_minus1, fib_i);
}

int fibTail(int n,int i,int fib_i_minus1,int fib_i){ //recursively calls fibTail that calculates fiboncci.
    if(i==n+1){
        return fib_i_minus1;
    }else{
        return fibTail(n,i+1,fib_i,fib_i_minus1+fib_i);
    }
}

