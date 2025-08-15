// Brute Force:
bool isPowerOfThree(int n) {

    if (n < 1) {
        return false;
    }
    while (n > 1) {
        if (n % 3 == 0) {
            n /= 3;
        } else
            return false;
    }
    return true; 
}

// using resursion:
bool isPowerOfThree(int n) {
    if(n == 1) {
        return true;
    }
    else if ( n < 1 )
        return false;

    if ( n % 3 != 0 )
        return false;
    
    return isPowerOfThree(n/3);
}