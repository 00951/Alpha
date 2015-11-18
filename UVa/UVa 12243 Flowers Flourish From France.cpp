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
    char s[123456];
    LL l,f,chk;

    while(gets(s)){
        f=0, chk=7;
        l=strlen(s);

        if(strcmp("*", s)==0)
            break;

        rep(i,0,l-1)
            s[i]=tolower(s[i]);


        rep(i,0,l-1){
            if(s[i]==' '){
                    chk=5;
                if(s[i+1]==s[0])
                    f=1;
                else{
                    f=2;
                    break;
                }
            }
        }
        if(chk==7){
            cout << "Y" << endl;
            continue;
        }
        if(f==1)
            cout << "Y" << endl;
        else if(f==2)
            cout << "N" << endl;
    }
    return 0;
}
