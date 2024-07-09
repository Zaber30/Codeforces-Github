#include<stdio.h>
#include<string.h>
int main()
{
    int i,count1=0,count2=0;
    char a[101];
    gets(a);
    for(i=0;i<strlen(a);)

    {
        if(a[i]=='0'&&a[i+1]=='0'&&a[i+2]=='0'&&a[i+3]=='0'&&a[i+4]=='0'&&a[i+5]=='0'&&a[i+6]=='0')
        {
            count1=count1+7;
            i=i+7;

        }
        else if(a[i]=='1'&&a[i+1]=='1'&&a[i+2]=='1'&&a[i+3]=='1'&&a[i+4]=='1'&&a[i+5]=='1'&&a[i+6]=='1')
        {
            count2=count2+7;
            i=i+7;


        }
       else
        {
            i=i+1;
        }


    }
    if(count1>=7||count2>=7)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
