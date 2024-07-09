#include<stdio.h>
#include<stdio.h>
int main()
{
    int n,i,count=0,sount=0,len=0;
    char a[1000000];
    scanf("%d",&n);
    scanf(" %[^\n]",a);

    for(i=0;i<n;i++)
    {
        if(a[i]=='D')
        {
            count++;
        }
        if(a[i]=='A')
        {
            sount++;
        }

    }
    if(count>sount)
    {
        printf("Danik");
    }
    else if(sount>count)
    {
        printf("Anton");
    }
    else
    {
        printf("Friendship");
    }
    return 0;

}
