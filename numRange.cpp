#include <bits/stdc++.h>
using namespace std;



int numRange(vector<int> &vec, int B, int C) {
// int Solution::numRange(vector<int> &vec, int B, int C) {
	vec.insert(vec.begin() , 0 );
	for ( int i=1 ; i<vec.size() ; i++ ){
		vec[i] += vec[i-1] ;
	}

	int count = 0 ;
	int i=0 ;
	int j=1 ;
	while( i != vec.size()-1 ) {

		if(i==j)
			j++ ;

		if( j == vec.size() ) {
			// handle it
			j-- ;
			i++ ;
		}

		int sum = vec[j] - vec[i] ;

		if( B <= sum && sum <= C ){
		  //  cout << i << ' ' << j << endl ;
			count++ ;
			j++ ;
		}
		else if ( sum > C ){
			i++ ;
		}
		else {
			// sum < B
			j++ ;
		}

	}
	return count ;
}


int main() {

}