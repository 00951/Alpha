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
    string s;

    while(cin>>s){

        if(s=="*") break;

        double sum = 0;
        LL l=s.size();
        LL c=0;

        rep(i,0,l-1){
            if(s[i]=='/'){
                if(sum==1.0){
                    c++;
                }
                sum=0;
            }
            else{
                if(s[i]=='W')
                    sum+=1.0;
                else if(s[i]=='H')
                    sum+=0.5;
                else if(s[i]=='Q')
                    sum+=0.25;
                else if(s[i]=='E')
                    sum+=0.125;
                else if(s[i]=='S')
                    sum+=0.0625;
                else if(s[i]=='T')
                    sum+=0.03125;
                else if(s[i]=='X')
                    sum+=0.015625;
            }
        }
        cout << c << endl;
    }
    return 0;
}
