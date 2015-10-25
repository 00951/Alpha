/*
* GM Arif
* CSE, Jahangirnagar University
* id: gmarif_online(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/

#include <stdio.h>

int main()
{
    long long want,tota;
    double bal,bita;

    while(scanf("%lld %lf", &want, &bal)==2){
        bita = (double) want;

        if(bita+.50 > bal)
            printf("%.2lf\n", bal);
        else{

            if(want%5!=0)
                printf("%.2lf\n", bal);
            else
            {
                bal=bal-(.50+want);
                printf("%.2lf\n", bal);
            }

        }
    }
    return 0;
}

