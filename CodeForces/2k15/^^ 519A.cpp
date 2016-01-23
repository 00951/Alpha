Problem: http://codeforces.com/problemset/problem/519/A


#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#include <cstring>
#define rep(i,a,b) for(int i=a;i<=b;i++)

int main()
{
    char s[50];
    //string s;
    
    int b=0, w=0;

    rep(j,1,8){           

        scanf("%s",s+1);       //store char from index 1
        // cin >> s;

        rep(i,1,8){          // rep(i,1,8) => s+1

            if(s[i]=='Q') w += 9;
            if(s[i]=='R') w += 5;
            if(s[i]=='B') w += 3;
            if(s[i]=='N') w += 3;
            if(s[i]=='P') w += 1;

            if(s[i]=='q') b += 9;
            if(s[i]=='r') b += 5;
            if(s[i]=='b') b += 3;
            if(s[i]=='n') b += 3;
            if(s[i]=='p') b += 1;
        }
        
    }

    if(w==b)
        cout<<"Draw"<<endl;
    else if(w > b)
        cout<<"White"<<endl;
    else
        cout<<"Black"<<endl;
   
   // main();

    return 0;
}




//OR...........




#include <stdio.h>
#include <string.h>

int main()
{
    int i, wh, bl;
    char s1[10],s2[10],s3[10],s4[10],s5[10],s6[10],s7[10],s8[10];

    while(scanf("%s %s %s %s %s %s %s %s",s1,s2,s3,s4,s5,s6,s7,s8)==8){

        wh=0; bl=0;

        for(i=0; i<8; i++){
            if(s1[i]=='Q')
                wh+=9;
            else if(s1[i]=='q')
                bl+=9;
            else if(s1[i]=='R')
                wh+=5;
            else if(s1[i]=='r')
                bl+=5;
            else if(s1[i]=='B')
                wh+=3;
            else if(s1[i]=='b')
                bl+=3;
            else if(s1[i]=='N')
                wh+=3;
            else if(s1[i]=='n')
                bl+=3;
            else if(s1[i]=='P')
                wh+=1;
            else if(s1[i]=='p')
                bl+=1;
        }


        for(i=0; i<8; i++){
            if(s2[i]=='Q')
                wh+=9;
            else if(s2[i]=='q')
                bl+=9;
            else if(s2[i]=='R')
                wh+=5;
            else if(s2[i]=='r')
                bl+=5;
            else if(s2[i]=='B')
                wh+=3;
            else if(s2[i]=='b')
                bl+=3;
            else if(s2[i]=='N')
                wh+=3;
            else if(s2[i]=='n')
                bl+=3;
            else if(s2[i]=='P')
                wh+=1;
            else if(s2[i]=='p')
                bl+=1;
        }


        for(i=0; i<8; i++){
            if(s3[i]=='Q')
                wh+=9;
            else if(s3[i]=='q')
                bl+=9;
            else if(s3[i]=='R')
                wh+=5;
            else if(s3[i]=='r')
                bl+=5;
            else if(s3[i]=='B')
                wh+=3;
            else if(s3[i]=='b')
                bl+=3;
            else if(s3[i]=='N')
                wh+=3;
            else if(s3[i]=='n')
                bl+=3;
            else if(s3[i]=='P')
                wh+=1;
            else if(s3[i]=='p')
                bl+=1;
        }


        for(i=0; i<8; i++){
            if(s4[i]=='Q')
                wh+=9;
            else if(s4[i]=='q')
                bl+=9;
            else if(s4[i]=='R')
                wh+=5;
            else if(s4[i]=='r')
                bl+=5;
            else if(s4[i]=='B')
                wh+=3;
            else if(s4[i]=='b')
                bl+=3;
            else if(s4[i]=='N')
                wh+=3;
            else if(s4[i]=='n')
                bl+=3;
            else if(s4[i]=='P')
                wh+=1;
            else if(s4[i]=='p')
                bl+=1;
        }

        for(i=0; i<8; i++){
            if(s5[i]=='Q')
                wh+=9;
            else if(s5[i]=='q')
                bl+=9;
            else if(s5[i]=='R')
                wh+=5;
            else if(s5[i]=='r')
                bl+=5;
            else if(s5[i]=='B')
                wh+=3;
            else if(s5[i]=='b')
                bl+=3;
            else if(s5[i]=='N')
                wh+=3;
            else if(s5[i]=='n')
                bl+=3;
            else if(s5[i]=='P')
                wh+=1;
            else if(s5[i]=='p')
                bl+=1;
        }

        for(i=0; i<8; i++){
            if(s6[i]=='Q')
                wh+=9;
            else if(s6[i]=='q')
                bl+=9;
            else if(s6[i]=='R')
                wh+=5;
            else if(s6[i]=='r')
                bl+=5;
            else if(s6[i]=='B')
                wh+=3;
            else if(s6[i]=='b')
                bl+=3;
            else if(s6[i]=='N')
                wh+=3;
            else if(s6[i]=='n')
                bl+=3;
            else if(s6[i]=='P')
                wh+=1;
            else if(s6[i]=='p')
                bl+=1;
        }

        for(i=0; i<8; i++){
            if(s7[i]=='Q')
                wh+=9;
            else if(s7[i]=='q')
                bl+=9;
            else if(s7[i]=='R')
                wh+=5;
            else if(s7[i]=='r')
                bl+=5;
            else if(s7[i]=='B')
                wh+=3;
            else if(s7[i]=='b')
                bl+=3;
            else if(s7[i]=='N')
                wh+=3;
            else if(s7[i]=='n')
                bl+=3;
            else if(s7[i]=='P')
                wh+=1;
            else if(s7[i]=='p')
                bl+=1;
        }

        for(i=0; i<8; i++){
            if(s8[i]=='Q')
                wh+=9;
            else if(s8[i]=='q')
                bl+=9;
            else if(s8[i]=='R')
                wh+=5;
            else if(s8[i]=='r')
                bl+=5;
            else if(s8[i]=='B')
                wh+=3;
            else if(s8[i]=='b')
                bl+=3;
            else if(s8[i]=='N')
                wh+=3;
            else if(s8[i]=='n')
                bl+=3;
            else if(s8[i]=='P')
                wh+=1;
            else if(s8[i]=='p')
                bl+=1;
        }

        if(bl>wh)
            printf("Black\n");
        else if(wh>bl)
            printf("White\n");
        else
            printf("Draw\n");
    }

    return 0;
}
