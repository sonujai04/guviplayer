#include<stdio.h>
int main()
{
    int a[30][30],i,n,j,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    for(i=0;i<n;i++)
    {
        if(a[i][0]<a[i][1])
        {
            c=c+1;
        }
    }
    printf("%d",c);
    return 0;
}
