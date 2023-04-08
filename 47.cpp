#include<iostream>

using namespace std;

/*
    Question link: https://projecteuler.net/problem=47
    Question: 
        The first two consecutive numbers to have two distinct prime factors are:
        14 = 2 × 7
        15 = 3 × 5
        The first three consecutive numbers to have three distinct prime factors are:
        644 = 2² × 7 × 23
        645 = 3 × 5 × 43
        646 = 2 × 17 × 19.
        Find the first four consecutive integers to have four distinct prime factors. What is the first of these numbers?
    -> No formula to find number of distinct prime factors for any number(Ref: https://mathworld.wolfram.com/DistinctPrimeFactors.html)
*/

int * get_first_four() {
    int * p = new int[4];
    // TODO: Implement
}

int main() {
    int * p = get_first_four();
    for (int i = 0; i < 3; i++) {
        cout << p[i] << ", ";
    }
    cout << p[3] << endl;
}