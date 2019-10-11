#include<cstdio>
const int PK=55;
int main()
{
	char card[5]={'S','H','C','D','J'};
	int i[PK],sw[PK],o[PK];
	int h,n,h2;
	scanf("%d",&n);
	for(h=1;h<PK;h++)
	{
		scanf("%d",&i[h]);
		o[h]=h;//初始化输出 
	}
	for(h=0;h<n;h++)//交换n次 
	{
		for(h2=1;h2<PK;h2++)
		{
			sw[i[h2]]=o[h2];//记录交换后数据 
		}
		for(h2=1;h2<PK;h2++)
		{
			o[h2]=sw[h2];//将交换后数据赋给 o[] 
		}
	}
	for(h=1;h<PK;h++)
	{
		h2=(o[h]-1)/13;
		printf("%c%d",card[h2],(o[h]-1)%13+1);
		if(h!=PK-1)
		printf(" ");
	}
	
}
