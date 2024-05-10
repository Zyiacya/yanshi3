#include "stdio.h"
#include "math.h"

int getsize(int i)  		//判断i是几位数
{
	int j=0;
	for(j=0;j<100;j++)
	{
		if(i/10==0)
       break;
     else
           i/=10;
	}
	return j+1;
}

int check(int i)		//判断i是否是回文数
{
	int size=getsize(i),flag=0;
	char a[size];
	int j;
	for(j=0;j<size;j++)
	{
		a[j]=i%10+'0';
		i/=10;
	}
	for(j=0;j<size/2;j++)
	{
		if(a[j]==a[size-1-j])
		flag++;
	}
	if(flag==size/2)
	return i;
	else 
	return -1;
	
}


int main ()
{
	int rec,j,flag=0;  //rec是接收，flag用于控制转行
	scanf("%d",&rec);
	for(j=0;j<=rec;j++)
	{
    if(check(j)!=-1)  //如果j是回文数，执行下列语句
   {
    printf("%d,",j);
    flag++;
    if(flag%10==0)
      printf("\n");
   }
	}

}



