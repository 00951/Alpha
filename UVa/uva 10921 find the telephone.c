/*
* GM Arif
* CSE, Jhangirnagar University
* id: gmarif_online (uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <stdio.h>
#include <string.h>

int main()
{
    char str[10000];
    while(scanf("%s", str)!=EOF){

        int len = strlen(str);
        int i;
        for(i=0; i<len; i++){

            if(str[i]=='A' || str[i]=='B' || str[i]=='C')
                str[i]='2';
            else if(str[i]=='D' || str[i]=='E' || str[i]=='F')
                str[i]='3';
            else if(str[i]=='G' || str[i]=='H' || str[i]=='I')
                str[i]='4';
            else if(str[i]=='J' || str[i]=='K' || str[i]=='L')
                str[i]='5';
            else if(str[i]=='M' || str[i]=='N' || str[i]=='O')
                str[i]='6';
            else if(str[i]=='P' || str[i]=='Q' || str[i]=='R' || str[i]=='S')
                str[i]='7';
            else if(str[i]=='T' || str[i]=='U' || str[i]=='V' )
                str[i]='8';
            else if(str[i]=='W' || str[i]=='X' || str[i]=='Y' || str[i]=='Z')
                str[i]='9';
            else
                str[i]=str[i];
        }
        puts(str);
    }
    return 0;
}
