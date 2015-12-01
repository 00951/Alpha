/*
* GM Arif Shuvo
* CSE, Jahangirnagar University
* id: aarif_shuvo(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define MAX 1234
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)


int main()
{
    char s[MAX];
    char a[MAX]={ '`', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '-', '=',
                'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P', '[', ']',
                  'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L', ';', '\'', '\\',
                  'Z', 'X', 'C', 'V', 'B', 'N', 'M', ',', '.', '/'
                };
    while(gets(s)){
        LL l=strlen(s);
        rep(i,0,l-1){
            if(isspace(s[i]))
                printf("%c", s[i]);
            else{
                rep(j,0,46){
                    if(s[i]==a[j])
                        printf("%c", a[j-1]);
                }
            }
        }
        cout << endl;
    }
    return 0;
}
