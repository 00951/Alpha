#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define MAX 12345
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)


int main()
{
    LL tm[123][123];
    LL x,y,f;

    while(cin>>x>>y){
            f=6;
       rep(i,1,x){
            rep(j,1,y){
                cin>>tm[i][j];
            }
        }

        LL c=0;

         rep(i,1,x){
            rep(j,1,y){
                if(tm[i][j]==0){
                    f=0;
                    break;
                }
                else f=1;
            }
            if(f==1) c++;
        }

        cout << c << endl;

    }


    return 0;
}
