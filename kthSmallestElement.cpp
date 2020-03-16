#include <bits/stdc++.h>
using namespace std ;


int main(){
	
	vector<int> vec(15) ;
	for ( int &i : vec ) i = rand()%50;

	for ( int i : vec) cout << i << ' ' ; cout << endl ;


	int n = 0;

	nth_element(vec.begin() , vec.begin()+n , vec.end() ) ;

	cout << vec[n] << endl ;

	// for ( int i : vec) cout << i << ' ' ; cout << endl ;

	return 0;
}