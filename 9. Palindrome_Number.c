// Given an integer x, return true if x is a palindrome, and false otherwise.

bool isPalindrome(int x){

    long rem, rev = 0;
    int tmp = x;
    while(x != 0){
        rem = x % 10;
        rev = rev * 10 + rem ;
        x /= 10;
    }

    if(rev == tmp && rev >= 0 )
        return true;
    else 
        return false;

}
