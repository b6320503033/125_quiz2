#include<stdio.h>
int main()
{
    int n,k=0,i,j,x,y=0,z,a=0,s;
    int num[7];

    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        s=i;
        k=1;
        while(s>10)
        {
            num[k]=s%10;
            s=s/10;
            k++;
        }
        k=k+1;
        num[k]=s;
        z=k;
        y=0;
        for(j=1; j<=k,k>=1; j++,k--)
        {
            x=num[k]-num[j];

            if(x==0)
                y++;
            printf("%d - %d = %d >%d %d\n",num[k],num[j],x,y,z);
        }
        if((z==2)||(y==z))
            a++;

    }
    printf("%d",a);


    return 0;

}
