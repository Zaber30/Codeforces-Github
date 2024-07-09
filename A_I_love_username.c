#include<stdio.h>
int main()
{
    int n,i,count=0,count1=0,count3=0,j=0;
    scanf("%d",&n);
    int a[n];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=2;i<=n;i++)
    {
        for(j=i;j>=1;j--)
        {
            if(a[i]>a[j])
            {
                count++;
            }
        }
        for(j=i;j>=1;j--)
        {
            if(a[i]<a[j])
            {
                count1++;
            }
        }
        if(count==i-1)
        {
            count3++;

        }
        else if(count1==i-1)
        {
            count3++;

        }
        count=0;count1=0;



    }
    printf("%d\n",count3);


}
