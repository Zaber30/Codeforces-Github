#include<stdio.h>
int main()
{
    int n,i,j,k,temp,m,cont=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&m);
        int a[m];
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[j]);
        }
        for(j=0;j<m;j++)
        {
            for(k=j+1;k<m;k++)
            {
                if(a[j]>a[k])
                {
                    temp=a[j];
                    a[j]=a[k];
                    a[k]=temp;
                }
            }
        }
        for(j=0;j<m-1;j++)
        {
            if((a[j+1])-(a[j])>=1)
               {
                   cont++;
               }
        }



        if(cont==(m-1))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        cont=0;


    }

}
