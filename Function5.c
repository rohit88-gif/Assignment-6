






    void checkAmstrong();
    void main()
    {
    	checkAmstrong();
	}
	
	void checkAmstrong()
	{
	int n, sum = 0, temp, r;

		
		printf("enter the number");
		scanf("%d",&n);
		
		temp=n;
		
		while(n>0)
		{
			r=n%10; sum+=r*r*r; n/10;
			n = n / 10;

		}
		if(sum==temp)
		
			printf("it is amstrong no");
		
		else
		
			printf("it is not amstrong no");
		
	}
    
    
