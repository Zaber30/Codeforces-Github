#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,count[26]={0},sum=0;
    char s[1001];
    scanf(" %[^\n]",s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            count[s[i]-'a']++;

        }


    }
    for(j=0;j<26;j++)
    {
        if(count[j]>1)
        {
            count[j]=1;
        }
        sum=sum+count[j];
    }
    printf("%d",sum);
    return 0;


}

