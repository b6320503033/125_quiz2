#include<stdio.h>
#include<math.h>
int main()
{
    int n,x=2,k=0,i,y,j,a;

    scanf("%d",&n);
    int m[n];
    for(y=1;; y++,x++)
    {
        m[y]=pow(x,3);
        if(m[y]==n)
            a=1;
        if(m[y]>n)
            break;

    }
    y--;
    k=n;
    for(j=1; j<=y; j++)
    {

        for(i=1; i<=n; i++,x++)
        {
            if(i==m[j])
            {
                k--;
            }
        }
        if(n==m[j])
        {
            k=0;
            break;
        }


    }

    if(a==1)
        printf("Not Cube Free");
    else
        printf("%d",k);

    return 0;
}
