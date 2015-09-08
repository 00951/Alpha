/*
* GM Arif
* CSE, Jhangirnagar University
* id: gmarif_online (uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <stdio.h>

int main()
{
    long long T,sizeFirm, friendliness,n,sum, numAnimals;
    scanf("%lld",&T);

    while(T--){
        scanf("%lld",&n);
        sum=0;
        while(n--){
            scanf("%lld %lld %lld", &sizeFirm, &numAnimals, &friendliness);
            sum+=((sizeFirm*numAnimals*friendliness)/numAnimals);
        }
        printf("%lld\n", sum);
    }
    return 0;
}
