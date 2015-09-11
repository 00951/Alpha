/*
* GM Arif
* CSE, Jhangirnagar University
* id: gmarif_online (uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <stdio.h>
#include <string.h>

int main()
{
    int x,M=0,len,A=0,R=0,G=0,I=0,T=0;
    int m,a,r,g,i,t;
    char str[100000];

    scanf("%d", &x);
    getchar();

    while(x--){
        gets(str);
        M=0,A=0,R=0,G=0,I=0,T=0;

        len=strlen(str);
        int i;
        for(i=0; i<len; i++){
            if(str[i]=='M')
                M++;
            else if(str[i]=='A')
                A++;
            else if(str[i]=='R')
                R++;
            else if(str[i]=='G')
                G++;
            else if(str[i]=='I')
                I++;
            else if(str[i]=='T')
                T++;
        }
        int min=100000;

        m=M/1;
        if(m<=min)
            min=m;
        a=A/3;
        if(a<=min)
            min=a;
        r=R/2;
        if(r<=min)
            min=r;
        g=G/1;
        if(g<=min)
            min=g;
        i=I/1;
        if(i<=min)
            min=i;
        t=T/1;
        if(t<=min)
            min=t;

        printf("%d\n", min);
    }
    return 0;
}
