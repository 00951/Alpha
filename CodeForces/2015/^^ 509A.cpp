
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define rep(i,a,b) for(int i=a;i<=b;i++)
#define MX 100007

int arr[15][15];

int main()
{
    int n, i, j;

    scanf("%d", &n);


    rep(i,1,n){
        
        rep(j,1,n)
        {
            if(i == 1 || j == 1)       //
                arr[i][j] = 1;         //
            else
                arr[i][j] = arr[i][j - 1] + arr[i- 1][j];     //
        }
    }
        
        
    printf("%d\n", arr[n][n]);
    
    return 0;
}




//OR..........


#include <stdio.h>

int main()
{
    long long n, ans;

    while(scanf("%I64d", &n)==1){

        if(n==1)
            ans=1;
        else if(n==2)
            ans=2;
        else if(n==3)
            ans=6;
        else if(n==4)
            ans=20;
        else if(n==5)
            ans=70;
        else if(n==6)
            ans=252;
        else if(n==7)
            ans=924;
        else if(n==8)
            ans=3432;
        else if(n==9)
            ans=12870;
        else if(n==10)
            ans=48620;

        printf("%I64d\n", ans);
    }

    return 0;
}
