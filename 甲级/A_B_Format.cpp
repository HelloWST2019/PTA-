#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;

int main(){
	const int MAX=100000;
    long a[MAX]={0},b[MAX]={0},sum[MAX]={0};
    long h=0,h1=0,k=0;
   //while(scanf("%ld",&a[h++])!=EOF&&scanf("%ld",&b[h1++])!=EOF){
	while(cin >> a[h++] >> b[h1++]){
	
	sum[h-1]=a[h-1]+b[h1-1];
	};
    while(k<h-1)
    {
	if(sum[k]>1000000||sum[k]<-1000000)
    {
printf("%ld,%ld,%ld\n",sum[k]/1000000,abs((sum[k]%1000000)/1000),abs(sum[k]%1000));
    }
    else if(sum[k]>1000||sum[k]<-1000)
    {
        printf("%ld,%ld\n",sum[k]/1000,abs(sum[k]%1000));
    }
    else
    {
        printf("%ld\n",sum[k]);
    }
    k++;
}
}
