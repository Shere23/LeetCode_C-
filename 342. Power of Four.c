/*
Given an integer n, return true if it is a power of four. Otherwise, return false.

An integer n is a power of four, if there exists an integer x such that n == 4x.
*/

bool isPowerOfFour(int n){

    if(n == 1)
        return true;

    long x = 4;    
    
    while(x <= n){

        if( x == n )
            return true;
        else{
            x *= 4;
        }
           
    }

    return false;
 
}
