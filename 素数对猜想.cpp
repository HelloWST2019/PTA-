#include<cstdio>
#include<cmath>
int main()
{
    int cin,a,b,c,d,e,sum=0;
    int arr[10000];
    arr[0]=2,arr[1]=3;
    e=2;
    bool flag=false;
    scanf("%d",&cin);
    for(a=2;a<=cin;a++)
    {
        for(b=2;b<=sqrt(a);b++)
        {
if(a%b==0)
{
flag=true;
break;}
        }
        if(!flag)
        {arr[e++]=a;
if(arr[e-1]-arr[e-2]==2)
sum++;}
flag=false;

    }
    printf("%d",sum);
}
