#include <bits/stdc++.h>
using namespace std;

vector<vector<int> > prettyPrint(int key) {
	vector<vector<int>> vec ( key , vector<int>( 2*key - 1 ) ) ;

	for(int i =0 ; i<key ; i++ ) {
		// i no. of time i need to change
		int remaining_change = i ;
		int fill = key ;
		for ( int j = 0 ; j < key ; j++ ) {
			if(j && remaining_change){
				remaining_change--;
				fill--;
			}

			vec[i][j] = fill ;
		}

		for ( int j = key ; j < 2*key-1 ; j++){
			vec[ i ][ j ] = vec[i][ key - (j-key) - 2 ] ;
		}
	}

	for( int i = key - 2 ; i >= 0 ; i--)
		vec.push_back(vec[i]);

	return vec;
}

int main(){

	auto a = prettyPrint(3);

	for (auto i : a){
		for (auto j : i )
			cout << j << ' ' ;
		cout << endl ;
	}

	return 0;
}