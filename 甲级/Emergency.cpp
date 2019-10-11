#include<cstdio>
#include<iostream>
using namespace std;
const int MAX=500;
int main()
{
	int NV[MAX]={0};
	int NL[MAX][MAX]={0};
	int sw,h,N,M,in,go,f,s,l,h1,min=100;
	cin>>N>>M>>in>>go;
	for(h=0;h<N;h++)
	cin>>NV[h] ;
	for(h=0;h<M;h++)
	{
		cin>>f>>s>>l;
		NL[f][s]=l;
	}
	for(h=0;h<M;h++)
	{
		sw=in;
		h1=0;
		while(NL[sw][h]!=0&&NL[sw][h]<min)
		{
			min=NL[sw][h];
		}
		
	}
}
