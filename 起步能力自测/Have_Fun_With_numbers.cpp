#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
const int M=pow(10,8);
int main()
{

    int h,k,n=1;
    char q[20];//�������� 
    int s[25]={0},so[25]={0};
    int i[10]={0},o[20]={0};
    scanf("%s",q);
    n=strlen(q);
    for(k=n-1;k>=0;k--)
    {
    	
		s[k+1]=int(q[k]-'0');//�ַ�ת���� 
		i[s[k+1]]++;//��¼������ÿ�����ĸ��� 
		so[k+1]=(so[k+1]+2*s[k+1])%10;//��¼��� 
		o[so[k+1]]++;//��¼�����ÿ�����ĸ��� 
    	so[k]=(2*s[k+1])/10;//�н�λ�Ļ����� 
	}
	for(k=0;k<10;k++)//�ж�������������Ƿ���ͬ����ͬ k=10 
	if(i[k]!=o[k])
	break;
	 if(so[0]!=0)//ע�����˳�򣬱������ж���λ�Ƿ��λ 
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
	
 
