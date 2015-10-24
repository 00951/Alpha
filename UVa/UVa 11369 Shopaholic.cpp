
/*
* GM Arif
* CSE, Jahangirnagar University
* id: gmarif_online(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/



#include <bits/stdc++.h>
using namespace std;
#include <algorithm>

int main()
{
    int T,i,n,sum,arr[100000];
    scanf("%d", &T);
    while(T--)
    {
        sum=0;
        scanf("%d", &n);

        for(i=1; i<=n; i++)
        {
            cin>>arr[i];
        }


        sort(arr+1, arr+n+1);


        for(i=n-2; i>=1; i-=3)
        {

            sum+=arr[i];
        }

        printf("%d\n", sum);


    }
    return 0;
}
