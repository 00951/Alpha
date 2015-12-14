/*
* GM Arif Shuvo
* CSE, Jahangirnagar University
* id: aarif_shuvo(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/

#include <bits/stdc++.h>
using namespace std;
#define LL  long long
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)
#define prntcs       printf("Case %I64d: ", ++cs);
#define prnt1(a)     cout<<a<<endl
#define prnt2(a,b)   cout<<a<<" "<<b<<endl
#define prnt3(a,b,c) cout<<a<<" "<<b<<" "<<c<<endl
#define debug_array(a,n) for(int i=0;i<n;i++) cerr<<a[i]<<" "; cerr<<endl;
#define debug_matrix(mat,row,col) for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cerr<<mat[i][j]<<" ";cerr<<endl;}
#define MX 1234

int main()
{
    LL n;
    char arr[MX][MX];

    while(cin>>n)
    {
        getchar();
       /*rep(i,0,n-1){
            rep(j,0,n-1){
                cin>>arr[i][j];
            }
        }
        */
        rep(i,0,n-1)          ****//
            cin>>arr[i];

        //debug_matrix(arr,n,n)

        LL fl=0;
        rep(i,0,n-1){
            rep(j,0,n-1){
                if(i==j || i==n-1-j){
                    if(arr[i][j]!=arr[0][0]){
                        fl=1;
                        break;
                    }else
                        continue;
                }
                else if(arr[i][j]!=arr[0][1] || arr[i][j]==arr[0][0])
                {
                    fl=1;
                    break;
                }
            }
            if(fl) break;
        }
        if(!fl)             ****//
            puts("YES");
        else if(fl)
            puts("NO");
    }
    return 0;
}

