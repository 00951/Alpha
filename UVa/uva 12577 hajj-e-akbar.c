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
    int cs=0;

    while(gets(str)){
            cs++;
        if(strcmp("*",str)==0)
            break;
        else if(strcmp("Hajj",str)==0)
            printf("Case %d: Hajj-e-Akbar\n", cs);
        else if(strcmp("Umrah",str)==0)
            printf("Case %d: Hajj-e-Asghar\n", cs);
    }
    return 0;
}
