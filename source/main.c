#include<stdio.h>
#include<stdlib.h>


int main(void)
{
	int a;						//
	float bal, cha, cred, lim;  //bal(balance),cha(charges),cred(credits),lim(limit)
	
	printf("Enter account number(-1 to end):");
	scanf_s("%d", &a);
	
	while (a != -1)
	{   
		printf("Enter beginning balance:");
		scanf_s("%f", &bal);
		printf("Enter total charges:");
		scanf_s("%f", &cha);
		printf("Enter total credits:");
		scanf_s("%f", &cred);
		printf("Enter credit limit:");
		scanf_s("%f", &lim);

		bal = bal + cha - cred;
			
		if (bal > lim)
		{
			printf("Account:      %d\n", a);
			printf("Credits limit:%.2f\n", lim);
			printf("Balance:      %.2f\n", bal);
			printf("Credits Limit Exceeded!\n\n");
			
		}
		printf("\n");

		printf("Enter account number(-1 to end):");
		scanf_s("%d", &a);
		

		
	}
	
	system("pause");
	return 0;
}