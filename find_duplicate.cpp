/*  not correct - has some bug
int Solution::repeatedNumber(const vector<int> &A) {
    
    int key = ceil ( sqrt ( A.size() - 1 ) )  ;
    
    vector<int> vec(key);
    
    for(int i: A){
        vec[(i-1)/key]++;
    }
    
    int i;
    for( i=0 ; i<vec.size() ; i++ ){
        if(vec[i] > key)
            break;
    }
    if(i==vec.size())
        i--;
    
    vector<bool> vec1(key,false);
    
    for( int a : A ){
        if( key*i < a && a <= key*(i+1) ){
            if( vec1[ a - key*i - 1 ] ){
                return a ;
            }
            else{
                vec1[ a - key*i - 1 ] = true ;
            }
        }
    }
	return -1 ;
}
*/