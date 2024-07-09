#include<stdio.h>
int main()
{
    int i,j,count[26]={0},n,sum=0;
    char s[101];
    scanf("%d",&n);
    scanf(" %[^\n]",s);
    for(j=0;j<n;j++)
    {
        if(s[j]>=65&&s[j]<=92)
        {
            s[j]='a'+s[j]-'A';
        }
    }
    for(j=0;j<n;j++)
    {
        count[s[j]-'a']++;
    }
    for(i=0;i<26;i++)
    {
        if(count[i]>1)
        {
            count[i]=1;
        }
        sum=sum+count[i];
    }
    if(sum==26)
    {
        printf("YES");

    }
    else
    {
        printf("NO");
    }
    return 0;


}
