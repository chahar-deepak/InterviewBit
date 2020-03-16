#include <bits/stdc++.h>
using namespace std ;


int iterate( vector<int> &A , int key ) {
	
	int count = 0;

	for ( int i : A )
		if ( i <= key )
			count++ ;

	return count ;
}

int kthsmallest( vector<int> &A, int B) {
    int key = 0 ;
	if( iterate( A , key ) >= B )
		return key ;

	key = 1 ;
	while( iterate(A,key) < B )
		key = key<<1 ;
	
	int a = key>>1 ;
	int b = key ;

	while( b-a > 1 ) {
		int key = (a+b)/2 ;

		if ( iterate(A,key) >= B )
			b = key ;
		else a = key ;
	}
	if(iterate(A,a) >= B)
		return a ;
	else return b ;
}


int main(){
	
	vector<int> vec(15) ;
	for ( int &i : vec ) i = rand()%50;

	for ( int i : vec) cout << i << ' ' ; cout << endl ;
	cout << kthsmallest (  vec , 7 ) << endl ;
	sort(vec.begin() , vec.end() ) ;
	for ( int i : vec) cout << i << ' ' ; cout << endl ;

	return 0;
}