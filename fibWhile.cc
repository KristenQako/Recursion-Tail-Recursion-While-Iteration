/*****************************************************
 Name: Kristen Qako
 Date: 3/20/2019
 File: fibWhile.cc
 Specification: Implements the fibonacci sequence program as a tail recursion using a while loop.
*******************************************************/

#include <iostream>
int fibWhile(int n);

using namespace std;

int main() //main function that takes in integer and calls fibWhile.
{
    int n;
    cout << "Enter an integer" << endl;
    cin >> n;

    cout << "The fiboncci number for month " << n << " is " << fibWhile(n) <<  endl;
    return 0;
}
    
int fibWhile(int n){ //fibWhile. implements fibonacci using while loop.
    int i = 1; //declaration of all parameters in the fibTail function.
    int fib_i_minus1 = 0;
    int fib_i = 1;
    int fib_i_next;
    while(i < n){ //while loop to continue until i is less than the declared int n.
        i++;  
        fib_i_next = fib_i + fib_i_minus1; //changes value of next to be the addition of the precious two parameters.
        fib_i_minus1 = fib_i;
        fib_i = fib_i_next;
    }
    return fib_i;
}
