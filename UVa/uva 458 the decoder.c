/*
* GM Arif
* CSE, Jhangirnagar University
* id: gmarif_online (uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <stdio.h>
#include <string.h>

int main()
{
    char str[100000];
    while(gets(str)){
        long long len = strlen(str);

        long long i;

        for(i=0; i<len; i++){
            str[i]=str[i]-7;
        }
        puts(str);
    }
    return 0;
}
