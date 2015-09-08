/*
* GM Arif
* CSE, Jhangirnagar University
* id: gmarif_online (uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <stdio.h>
#include <string.h>

int main()
{
    long long sum,T,o;
    char str[100000];
    scanf("%lld",&T);

    while(T--){
        scanf("%s", str);
        long long i, len=strlen(str);
        sum=0,o=0;
        for(i=0; i<len; i++){

            if(str[i]=='X')
                o=0;

            if(str[i]=='O')
                o++;
                sum+=o;
        }
        printf("%lld\n", sum);
    }
    return 0;
}
