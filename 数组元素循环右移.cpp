#include<cstdio>
int main()
{
    int N,M,i;
    int arr[100];
    scanf("%d%d",&N,&M);
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[(i+M)%N]);//Ñ­»·ÓÒÒÆMÎ» 
    }
    for(i=0;i<N;i++)
    {
        printf("%d",arr[i]);
        if(i!=N-1)
        printf(" ");
    }
}
