 #include<stdio.h>
 int main()
 {
 	int n,i;
 	int isprime=1;
 	printf("enter a number\n");
 	scanf("%d",&n);
 	
 	for(i=2; i*i<n; i++)
 	{
 		if(n%i==0)
		{
			isprime=0;
		 }
	 }
	 if(isprime)
	 {
	 	printf("the number is prime\n");
	 }
	 else
	 {
	 	printf("the number is not prime\n");
  }
	 return 0;
 }
