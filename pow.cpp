long recursive(long x,long n, long d){
    
    long ret ; 
    
    if ( x == 0)
        return 0 ;
    else if ( n == 0 )
        return 1 ;
    else if ( n == 1 )
        ret = x ;
    else if ( n%2 ){ // odd 
        ret =  ( x * recursive ( ( x%d * x%d ) %d , n/2 , d )  ) % d;
    }
    else ret =  recursive ( (x%d * x%d ) %d , n/2 , d ) % d ;

    
    return ret < 0 ? ret + d : ret ;
}

int Solution::pow(int x, int n, int d) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    return (int) recursive ( x , n , d ) ;    
}
