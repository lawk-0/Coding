#include<stdio.h>
void main()
{
	int n,n1,a,b,x=0,b1,b2,i;
	char ch[100];
	printf("Enter a no");
	scanf("%d",&n);//n=703
	n1=n;//n1=703
	a=(n-1)%26;//0
	ch[0]=(char)(65+a);//ch0='A'
	printf("%c",ch[0]);//printed 'A'
	do
	{
		b=(n-1)/26;//b=27
		if(b==0)//x
		{
			break;
		}
		else if(b<=26)//
		{
			x++;
			ch[x]=(char)(65+b);
							
		}
		else if(b>26)//Y
		{
			x++;//1
			b1=(b-1)%26;//0
			b2=(b-1)/26;//1
			ch[x]=b1;
			x++;
			ch[x]=b2;
		}
	}while(b!=0);
		for(i=x;i>=0;i--)
		printf("%c",ch[i]);
}