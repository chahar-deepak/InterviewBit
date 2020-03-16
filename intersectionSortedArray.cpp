vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
	vector<int> vec ;

	int m = A.size() ;
	int n = B.size() ;
	int i = 0 ;
	int j = 0 ;

	while ( i!=m && j!=n ) {

		if( A[i] == B[j] ) {
			vec.push_back( A[i] ) ;
			i++ ;
			j++ ;
		}
		else if ( A[i] < B[j] )
			i++ ;
		else 
			j++ ;
	}

	return vec ;
}
