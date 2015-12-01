/*
* GM Arif Shuvo
* CSE, Jahangirnagar University
* id: aarif_shuvo(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/

//Effff....

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define MAX 12345
    
double value(char a)
{
    if (a == 'C') return 12.01;
    if (a == 'H') return 1.008;
    if (a == 'O') return 16.00;
    if (a == 'N') return 14.01;
    
    return (a - '0');   //***
}

int main()
{
    char s[MAX];
    int n;
    scanf("%d", &n);
    while (n--)
    {
        double ans = 0.0;
        
        scanf("%s", s);
        int l = strlen(s);
        
        s[l] = s[l + 1] = 'X';  //****
        
        for (int i = 0; i < l; i++)         /*********************/
        {
            if (isalpha(s[i]) && isalpha(s[i + 1]))
                ans += value(s[i]);
                
            else if (isalpha(s[i]) && !isalpha(s[i + 1]) && isalpha(s[i + 2]))
                ans += value(s[i++]) * value(s[i]);
                
            else if (isalpha(s[i]) && !isalpha(s[i + 1]) && !isalpha(s[i + 2]))
                ans += value(s[i++]) * (10 * value(s[i++]) + value(s[i]));
        }
        printf("%.3f\n", ans);
    }
    return 0;
}


/**********************************************/


#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define MAX 12345
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)

double chk(char x){
    if(x=='C')
        return 12.010;
    else if(x=='H')
        return 1.008;
    else if(x=='O')
        return 16.00;
    else if(x=='N')
        return 14.01 ;
}

int main()
{
    LL T;
    char x,s[MAX];
    cin>>T;
    getchar();
    while(T--){
        cin>>s;
        double sum=0,z;
        LL num;
        LL l=strlen(s);
        rep(i,0,l-1){
            z=chk(s[i]);
            if(((s[i]>='A'&&s[i]<='Z') && (s[i+1]>='A'&&s[i+1]<='Z'))||i==l-1){
                sum+=chk(s[i]);
                z=chk(s[i]);
            }
            else {
                num=0;
                while(i<l){
                    if((s[i+1]>='A' && s[i+1]<='Z') || i==l-1){
                        sum+=z*num;
                        break;
                    }else{
                        num=10*num+(s[i+1]-48);
                    }
                    i++;
                }
            }
        }
        printf("%.03lf\n", sum);
    }
    return 0;
}
