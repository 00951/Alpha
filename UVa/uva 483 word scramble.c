/*
* GM Arif
* CSE, Jhangirnagar University
* id: gmarif_online (uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <stdio.h>
#include <string.h>

int main()
{
    int i,f=0,len,l,k;
    char str[100000];

    while(gets(str)){

            len=strlen(str);
            l=0,f=0;

        for(i=0; i<len; i++){

            if(str[i]==' '){

                    l=i-1;

                for(k=l; k>=f; k--)
                    printf("%c", str[k]);

                    f=i+1;

                printf(" ");
            }

        }

        for(k=len-1; k>=f; k--)
                printf("%c", str[k]);


        printf("\n");
    }
    return 0;
}
