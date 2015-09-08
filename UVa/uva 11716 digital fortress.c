/*
* GM Arif
* CSE, Jhangirnagar University
* id: gmarif_online (uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <stdio.h>
#include <string.h>

int main()
{
    long long len,T,x;
    char str[100000];
    scanf("%lld",&T);
    getchar();

   while(T--){
       gets(str);

         x=0,len=0;

        len=strlen(str);
        x=sqrt(len);

        if(x*x!=len)
            printf("INVALID\n");
        else
        {
            long long j=0,i=0,m=(x*x-x);


            for(;;){
                for(j; j<=m; j+=x){
                    printf("%c",str[j]);
                }
                j=0;
                i++;
                m++;
                j+=i;

                        if(j==x)
                            break;
            }
            printf("\n");
        }
   }

    return 0;
}
