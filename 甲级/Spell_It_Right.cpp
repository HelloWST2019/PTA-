#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
const int MAX=101;
using namespace std;
int main()
{
	int n,h,sw,k;
	int o[MAX];
	string word[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
	int sum=0;
	char i[MAX];
	n=0;
	n=strlen(i);
	for(h=0;h<n;h++)
	{
		o[h]=int(i[h]-'0');
		sum=sum+o[h];
	}
	sw=0;
	h=sum;
//	if(h==0)
//	printf("zero");
	while(sum!=0)
	{
		sw++;
		sum/=10;
	}
	for(sum=0;sum<sw;sum++)
	{
		k=h/pow(10,sw-sum-1);
		k%=10;
		cout<<word[k];
		if(sum!=sw-1)
		{
			cout<<" ";
		}
	}
	
}
