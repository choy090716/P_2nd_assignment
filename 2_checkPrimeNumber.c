#include <stdio.h>
#include <math.h>
int checkPrimeNumber(int n);
int checkArmstrongNumber(int n);

int checkPrimeNumber(int n)
{
	int i, flag = 1;    
	for(i=2; i<=n/2; ++i)    
	{    
	// condition for non-prime number        
		if(n%i == 0)        
		{            
			flag = 0;            
			break;        
		}    
	}    
	return flag;
}
