#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i,j,num; 
    printf("請輸入數字上限:");
	scanf("%d",&num); 
    for(i=0;i<=num;i++) 
{
    for(j=2;j<=i;j++) 
    if(i%j==0) 
    break; 
    if(i==j) 
    printf("%d,",j);
}
	system("pause");
	return 0;
}

