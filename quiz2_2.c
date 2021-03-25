#include<stdio.h>
int main()
{
    int m,n,i,j,x,y;

    scanf("%d",&m);
    scanf("%d",&n);
    int p[n],q[n],r[n];
    for(i=1; i<=n; i++)
    {
        scanf("%d",&p[i]);
        scanf("%d",&q[i]);
        scanf("%d",&r[i]);
    }

    for(j=1; j<=m; j++)
    {
        for(y=1; y<=n; y++)
            if(p[y]==j)
            {
                for(i=1; i<70; i++)
                {

                    if(q[i]==i)
                        for(x=0; x<5; x++)
                            printf("o");

                    else
                        printf("x");
                }
            }

        printf("\n");
    }



    return 0;
}
