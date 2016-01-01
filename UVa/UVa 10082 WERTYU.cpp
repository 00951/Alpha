/*
* GM Arif Shuvo
* CSE, Jahangirnagar University
* id: aarif_shuvo(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <bits/stdc++.h>
using namespace std;

#define LL long long
#define MX 1234

int main()
{
    char s[]="`1234567890-=QWERTYUIOP[]ASDFGHJKL;'\ZXCVBNM,./";
    char str[MX];

    while(gets(str)){
        for(int i=0; str[i]; i++){
            for(int j=0; s[j]; j++){
                if(str[i]==' ' || str[i]=='Z' || str[i]=='A' || str[i]=='Q' || str[i]=='`') {
                    printf("%c", str[i]);
                    break;
                }
                else if(str[i]==s[j]){
                    printf("%c", s[j-1]);
                    break;
                }
            }
        }
        puts("");
    }


    return 0;
}


--------------------


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
