void Solution::merge(vector<int> &A, vector<int> &B) {
	int m = A.size() ;
	int n = B.size() ;
	vector<int> vec( m + n ) ;

	int i = 0 ;
	int j = 0 ;
	int k = 0 ;

	while ( i!=m && j!=n ) {
		if ( A[i] > B[j] ) {
			vec[k++] = B[j++] ;
		}
		else{
			vec[k++] = A[i++] ;
		}
	}
	while( i!=m )
		vec[k++] = A[i++] ;
	
	while ( j!=n )
		vec[k++] = B[j++] ;

	swap(vec,A) ;
	
}
