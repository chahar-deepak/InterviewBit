bool custom(int x,int y){
	if(x==0)
		return false;
	
	int x_copy = x ;
	int y_copy = y ;

	int x_counter = 1,y_counter = 1 ;
	while(x/10){
		x_counter++;
		x = x/10;
	}
	while(y/10){
		y = y/10;
		y_counter++;
	}
		
	
	if( x < y )
		return false;
	else if ( x > y )
		return true;
	else{
		if(x_copy*pow(10,y_counter)+y_copy > y_copy*pow(10,x_counter)+x_copy)
			return true;
		return false;
	}
}


string Solution::largestNumber(const vector<int> &vc) {
    vector<int> vec = vc ;
    sort(vec.begin() , vec.end() , custom );
    
    ostringstream str1;
    
    for ( int i : vec ) str1 << i;
    
    if(vec[0]==0)
        return "0";
    
    return str1.str() ;
    
}
