#include<cstdio>
int main()
{
    int a[10000]={0};
    int b,c,d,e,sum,g,k;
    char f;
    d=1;
    sum=1;
    scanf("%d",&b);
    getchar();//�������ֺ�Ŀո� 
    scanf("%c",&f);
a[0]=1;
//�ҵ����ɳ© 
    for(c=1;sum<b;c++)
    {
       d=d+2;//ɳ©Ҫ���ӵ������е�һ�� 
       sum=sum+2*d;//ɳ©��Ŀ 
       a[c]=sum;
    }
    c=c-2;//�ҵ����ɳ©��Ӧ�������±� 
    if(d!=1)
	d=d-2;
    k=d;
    e=0;
    //����������ǣ�������1���ģ� 
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
    //������������� 
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
