void print(int n){
    //write your code here
 	static int i=1;
    if(i<=n)
    {
    	cout<<i<<" ";
    	i++;
	}
	else{
		return;
	}
	print(n);
}

