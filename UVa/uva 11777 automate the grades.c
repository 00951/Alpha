/*
* GM Arif
* CSE, Jhangirnagar University
* id: gmarif_online (uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <stdio.h>

int main()
{
    int a,b,c,d, x,y,z, T, part1,avg,total, cs=0;
    scanf("%d", &T);

    while(T--){
        cs++;
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &x, &y, &z);
        part1=a+b+c+d;

        if(x<=y && x<=z)
            avg=(y+z)/2;
        else if(y<=z && y<=x)
            avg=(z+x)/2;
        else
            avg=(x+y)/2;

         total=part1+avg;

        if(total>=90)
            printf("Case %d: A\n", cs);
        else if(total>=80 && total<90)
            printf("Case %d: B\n", cs);
        else if(total>=70 && total<80)
            printf("Case %d: C\n", cs);
        else if(total>=60 && total<70)
            printf("Case %d: D\n", cs);
        else
            printf("Case %d: F\n", cs);
    }
    return 0;
}
