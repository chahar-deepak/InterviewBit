#include <bits/stdc++.h>
using namespace std ;

int gcd(int A, int B) {
    if(A==0)
        return B;
    
    if(A<0)
        A = -A ;
    if(B<0)
        B = -B ;
    
    if(A>B)
        return gcd(B,A) ;
    
    return gcd(B-A,A);
}

int main(){
	cout << gcd ( 9 , 6 ) ;

	return 0;
}