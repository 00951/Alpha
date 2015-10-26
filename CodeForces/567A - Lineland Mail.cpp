/*
* GM Arif
* CSE, Jahangirnagar University
* id: gmarif_online(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


Problem: http://codeforces.com/problemset/problem/567/A



#include <stdio.h>

int main()
{
    long long n,i,min,max,arr[100000];

    while(scanf("%I64d", &n)==1)
    {
        for(i=1; i<=n; i++)
        {
            scanf("%I64d", &arr[i]);
        }
        for(i=1; i<=n; i++)
        {
            if(i==1)
            {
                min=arr[i+1]-arr[i];
                max=arr[n]-arr[i];
                printf("%I64d %I64d\n", min, max);
            }
            else if(i==n)
            {
                min=arr[i]-arr[i-1];
                max=arr[n]-arr[1];
                printf("%I64d %I64d\n", min, max);
            }
            else
            {
                if((arr[i+1]-arr[i])<=(arr[i]-arr[i-1]))
                {

                    min=arr[i+1]-arr[i];

                    if((arr[n]-arr[i])>=(arr[i]-arr[1]))
                        max=arr[n]-arr[i];
                    else
                        max=arr[i]-arr[1];

                    printf("%I64d %I64d\n", min, max);

                }
                else if((arr[i+1]-arr[i])>(arr[i]-arr[i-1]))
                {
                    min=arr[i]-arr[i-1];
                    if((arr[n]-arr[i])>=(arr[i]-arr[1]))
                        max=arr[n]-arr[i];
                    else
                        max=arr[i]-arr[1];

                    printf("%I64d %I64d\n", min, max);
                }
            }
        }
    }

    return 0;
}
