#include <stdio.h>
char SMS[10][10] = {" ",
                    ".,?\"", "abc", "def",
                    "ghi", "jkl", "mno",
                    "pqrs", "tuv", "wxyz"
                   };
int main()
{
    int cs, n, A[128], B[128];
    scanf("%d", &cs);
    while (cs--)
    {
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
            scanf("%d", &A[i]);
        for (int i = 0; i < n; i++)
            scanf("%d", &B[i]);
        for (int i = 0; i < n; i++)
            putchar(SMS[A[i]][B[i] - 1]);
        puts("");
    }
    return 0;
}



--------------------------------



#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define MAX 12345
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)


int main()
{
    char s[12345];
    LL a[12345],b[12345];
    LL T,l;
    cin >> T;

    while(T--)
    {

        cin >> l;

        rep(i,1,l)
        cin>>a[i];

        rep(i,1,l)
        cin>>b[i];

        LL k=0;

        rep(i,1,l)
        {

            if(a[i]==1)
            {
                if(b[i]==1)
                    s[k++]='.';
                else if(b[i]==2)
                    s[k++]=',';
                else if(b[i]==3)
                    s[k++]='?';
                else if(b[i]==4)
                    s[k++]='"';
            }
            else if(a[i]==2)
            {
                if(b[i]==1)
                    s[k++]='a';
                else if(b[i]==2)
                    s[k++]='b';
                else if(b[i]==3)
                    s[k++]='c';
            }
            else if(a[i]==3)
            {
                if(b[i]==1)
                    s[k++]='d';
                else if(b[i]==2)
                    s[k++]='e';
                else if(b[i]==3)
                    s[k++]='f';
            }
            else if(a[i]==4)
            {
                if(b[i]==1)
                    s[k++]='g';
                else if(b[i]==2)
                    s[k++]='h';
                else if(b[i]==3)
                    s[k++]='i';
            }
            else if(a[i]==5)
            {
                if(b[i]==1)
                    s[k++]='j';
                else if(b[i]==2)
                    s[k++]='k';
                else if(b[i]==3)
                    s[k++]='l';
            }
            else if(a[i]==6)
            {
                if(b[i]==1)
                    s[k++]='m';
                else if(b[i]==2)
                    s[k++]='n';
                else if(b[i]==3)
                    s[k++]='o';
            }
            else if(a[i]==7)
            {
                if(b[i]==1)
                    s[k++]='p';
                else if(b[i]==2)
                    s[k++]='q';
                else if(b[i]==3)
                    s[k++]='r';
                else if(b[i]==4)
                    s[k++]='s';

            }
            else if(a[i]==8)
            {
                if(b[i]==1)
                    s[k++]='t';
                else if(b[i]==2)
                    s[k++]='u';
                else if(b[i]==3)
                    s[k++]='v';
            }
            else if(a[i]==9)
            {
                if(b[i]==1)
                    s[k++]='w';
                else if(b[i]==2)
                    s[k++]='x';
                else if(b[i]==3)
                    s[k++]='y';
                else if(b[i]==4)
                    s[k++]='z';
            }
            else if(a[i]==0 && b[i]==1)
                s[k++]=' ';
        }
        s[k]='\0';
        cout << s << endl;
    }

    return 0;
}
