#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int num1,num2,num; 
    printf("�п�J�Ʀr�W��:");
	scanf("%d",&num); 
    for(num1=0;num1<=num;num1++) 
{
    for(num2=2;num2<=num1;num2++) 
    if(num1%num2==0) 
    break; 
    if(num1==num2) 
    printf("%d,",num2);
}
	system("pause");
	return 0;
}

