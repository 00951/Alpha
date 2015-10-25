/*
* GM Arif
* CSE, Jahangirnagar University
* id: gmarif_online(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/

#include <stdio.h>

int main()
{
    long long a,j,i,arr[10000];
    while(1)
    {
        i=0;
        while(scanf("%lld", &a)==1){
                arr[i]=a;
                    i++;
              }
        for(j=0; j<i; j++)
        {

            if(arr[j]==42)
                break;
            printf("%lld\n", arr[j]);
        }
        break;
    }
    return 0;
}

