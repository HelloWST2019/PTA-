#include<cstdio>
#include<iostream>
using namespace std;
const int MAX=101;
int main()
{
	int N,h;
	int i[MAX]={0};
	int o[MAX]={0};
	cin>>N;
	
	for(h=1;h<=N;h++)
	{
		cin>>i[h];
	}
	for(h=1;h<=N;h++)
	{
			if(i[h]>i[h-1])
			{
			o[h]=(o[h-1]+6*(i[h]-i[h-1])+5);}
			else
			{
			o[h]=(o[h-1]+4*(i[h-1]-i[h])+5);}
	}
	cout<<o[h-1];
 } 
