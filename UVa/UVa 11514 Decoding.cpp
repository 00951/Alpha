/*
* GM Arif Shuvo
* CSE, Jahangirnagar University
* id: aarif_shuvo(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define MAX 12345
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)


int main()
{
    LL T,cs=0;
    char s[MAX],p,st[MAX];
    cin>>T;

    while(T--){
        cin>>s;
        printf("Case %lld: ", ++cs);
        LL l=strlen(s);
        LL i=0,x;

        while(i<l){

            if(s[i]>=65 && s[i]<=90)  p=s[i];

            i++;
            x=0;

            while(s[i]>=48 && s[i]<=57){
                 st[x++]=s[i++];
            }
            st[x]='\0';

            long int num=atol(st);

            rep(i,1,num)
                printf("%c", p);
        }
        cout << endl;
    }

    return 0;
}
