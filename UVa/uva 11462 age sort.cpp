/*
* GM Arif
* CSE, Jahangirnagar University
* id: gmarif_online(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <bits/stdc++.h>
using namespace std;
#include <algorithm>

int arr[2000009];

int main()
{

    int n,i;

    while(scanf("%d", &n)==1){

        if(n==0)
            break;
        for(i=0; i<n; i++)
            scanf("%lld", &arr[i]);

       sort(arr, arr+n);

        for(i=0;i<n;i++){
            printf("%d",arr[i]);
            if(i!=n-1)
                printf(" ");
        }
        printf("\n");

    }
    return 0;
}

