#include<stdio.h>
int main()
{
    int b,c,d,e;
    scanf("%d",&c);
    int a[c];
    for(b=0;b<c;b++)
    {
        scanf("%d",&a[b]);
    }
    e=a[0];
    for(b=0;b<c;b++)
    {
        if(a[b]>e)
        {
            e=a[b];
        }
    }
    printf("%d",e);
}
