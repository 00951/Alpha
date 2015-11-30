/*
* GM Arif Shuvo
* CSE, Jahangirnagar University
* id: aarif_shuvo(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,T;

    scanf("%d", &T);

    while(T--){

        scanf("%d %d %d %d", &a, &b, &c, &d);

        if(a==b && b==c && c==d ){
            printf("square\n");

        }else if( (a==c && b==d) || (a==b && c==d) || (a==d && b==c) ){
            printf("rectangle\n");

        }else if( (a+b+c>d) && (b+c+d>a) && (c+d+a>b) && (d+a+b>c)){
            printf("quadrangle\n");

        }else
            printf("banana\n");
    }
    return 0;
}
