#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
const int M=pow(10,8);
int main()
{

    int h,k,n=1;
    char q[20];//接收输入 
    int s[25]={0},so[25]={0};
    int i[10]={0},o[20]={0};
    scanf("%s",q);
    n=strlen(q);
    for(k=n-1;k>=0;k--)
    {
    	
		s[k+1]=int(q[k]-'0');//字符转数字 
		i[s[k+1]]++;//记录输入中每个数的个数 
		so[k+1]=(so[k+1]+2*s[k+1])%10;//记录输出 
		o[so[k+1]]++;//记录输出中每个数的个数 
    	so[k]=(2*s[k+1])/10;//有进位的话加上 
	}
	for(k=0;k<10;k++)//判定输入输出数字是否相同，相同 k=10 
	if(i[k]!=o[k])
	break;
	 if(so[0]!=0)//注意输出顺序，必须先判定首位是否进位 
	{
	printf("No\n");
		for(h=0;h<=n;h++)
		printf("%d",so[h]);	
	}
	else if(k!=10)
	{
		printf("No\n");
		for(h=1;h<=n;h++)
		printf("%d",so[h]);
	}
	else
	{
		printf("Yes\n");
		for(h=1;h<=n;h++)
		printf("%d",so[h]);
	 } }
	
 
