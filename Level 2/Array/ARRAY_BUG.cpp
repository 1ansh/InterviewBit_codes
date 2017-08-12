vector<int> Solution::rotateArray(vector<int> &A, int B) {
	int i;
	while(B--)
	{
	    int key = A[0];
	    for( i=1;i<A.size();i++)
	    {
	        A[i-1] = A[i];
	    }
	    A[i-1] = key;
	}
	
	return A; 
}
