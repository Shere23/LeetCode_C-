/*
Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

You must not use any built-in exponent function or operator.
*/

int mySqrt(int x){

    // Base cases
    if (x == 0 || x == 1)
        return x;
 
    // Starting from 1, try all numbers until
    // i*i is greater than or equal to x.
    double i = 1;
    double result = 1;
    while (result <= x) {
        i++;
        result = i * i;
    }
    return i - 1;
}
