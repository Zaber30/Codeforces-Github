#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k=0;
    char s1[101],s2[101];
    gets(s1);
    gets(s2);
for(i=0;i<strlen(s1);i++)
{
    if(s1[i]>=65&&s1[i]<=90)
    {
        s1[i]='a'+s1[i]-'A';
    }

}
for(j=0;j<strlen(s2);j++)
{
    if(s2[j]>=65&&s2[j]<=90)
    {
        s2[j]='a'+s2[j]-'A';
    }


}
for(i=0,j=0;i<strlen(s1),j<strlen(s2);i++,j++)
{
    if(s1[i]<s2[j])
    {
        k=-1;
        break;
    }
    if(s1[i]>s2[j])
        {
        k=1;
        break;
    }
}
printf("%d\n",k);

    return 0;
}
