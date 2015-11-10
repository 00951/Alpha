/*
* GM Arif Shuvo
* CSE, Jahangirnagar University
* id: aarif_shuvo(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


Problem: http://codeforces.com/problemset/problem/570/A



#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int a[1234567];

int main()
{
    int n,i;
    cin >> n;
    
    for(i=0;i<n;i++) cin >> a[i];
    
    sort(a,a+n);       // just sort and get the minimum of whole array... not necessary to loop through for the min
    
    for(i=1;i<n;i++){ 
        if(a[i]%a[0]!=0){
            cout << -1 << endl;
            return 0;       // no break, just return 0
        }
    }
    cout << a[0] << endl;
    
    return 0;
}



//or...........




#include <stdio.h>

int main()
{
    long long n, arr[100000], flag, min, i;

    while(scanf("%I64d", &n)==1){
            flag=0;
            min=10000000000000;
        for(i=1; i<=n; i++){
            scanf("%lld", &arr[i]);
            if(arr[i]<=min)
                min=arr[i];
        }

        for(i=1; i<=n; i++){
            if(arr[i]%min!=0){
                flag=1;
                break;
            }

        }
        if(flag==1)
            printf("-1\n");
        else if(flag==0)
            printf("%lld\n", min);
    }
    return 0;
}
