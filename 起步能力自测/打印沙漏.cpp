#include<cstdio>
int main()
{
    int a[10000]={0};
    int b,c,d,e,sum,g,k;
    char f;
    d=1;
    sum=1;
    scanf("%d",&b);
    getchar();//吸收数字后的空格 
    scanf("%c",&f);
a[0]=1;
//找到最大沙漏 
    for(c=1;sum<b;c++)
    {
       d=d+2;//沙漏要增加的两行中的一行 
       sum=sum+2*d;//沙漏数目 
       a[c]=sum;
    }
    c=c-2;//找到最大沙漏对应的数组下标 
    if(d!=1)
	d=d-2;
    k=d;
    e=0;
    //输出倒立三角（不包含1个的） 
    while(d>1)
    {
for(g=0;g<e;g++)
printf(" ");
for(g=0;g<d;g++)
printf("%c",f);
printf("\n");
d=d-2;
e++;
    }
    //输出正立的三角 
    while(d<k+1)
    {
for(g=0;g<e;g++)
printf(" ");
for(g=0;g<d;g++)
printf("%c",f);
printf("\n");
d=d+2;
e--;
    }
    printf("%d",b-a[c]);
    return 0;
}
