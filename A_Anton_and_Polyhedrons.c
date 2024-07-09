#include<stdio.h>
#include<string.h>
int main()
{
    long long int n;
    int i,p,q,r,s,t,sum,d;
    p=q=r=s=t=sum=0;
     scanf("%lld",&n);


    char str[n][70];
    char ch1[50]="Tetrahedron",ch2[50]="Cube",ch3[50]="Octahedron",ch4[50]="Dodecahedron",ch5[50]="Icosahedron";

    //scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf(" %[^\n]",str[i]);


        if((d=strcmp(str[i],ch1))==0)
        {
            p=p+4;

        }

        if(( d=strcmp(str[i],ch2))==0)
        {
            q=q+6;
        }
       if((d=strcmp(str[i],ch3))==0)
        {
            r=r+8;
        }
        if((d=strcmp(str[i],ch4))==0)
        {
            s=s+12;

        }
       if((d=strcmp(str[i],ch5))==0)
        {
            t=t+20;
        }

    }
        sum=p+q+r+s+t;
        printf("%d\n",sum);
        return 0;


}

