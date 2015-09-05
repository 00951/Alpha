/*
* GM Arif
* CSE, Jhangirnagar University
* id: gmarif_online (uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <stdio.h>

int main()
{
    int emp,got,per,tot_emp,soda,T;
    scanf("%d", &T);

    while(T--){
        scanf("%d %d %d", &emp, &got, &per);
        tot_emp=emp+got;
        soda=0;

        while(tot_emp>=per){
            tot_emp-=per;
            tot_emp++;
            soda++;
        }
        printf("%d\n", soda);
    }
    return 0;
}
