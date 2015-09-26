/*
* GM Arif
* CSE, Jahangirnagar University
* id: gmarif_online(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <stdio.h>

int main()
{
    long long A,L,c,i,cs=0;

    while(scanf("%lld %lld", &A, &L)==2){

        if(A<0 && L<0)
            break;

        c=0;
        i=A;

        for(;;){

            if(i==1){
                c++;
                break;
            }
            else if(i>L)
                    break;
            else
                c++;

            if(i%2==0)
                i=i/2;
            else
                i=3*i+1;

        }
    printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n", ++cs, A, L, c);
    }
    return 0;
}



// Another Approach.....



#include <stdio.h>

long long collatz(long long n, long long limit){

        if(n > limit)
            return 0;

        if(n == 1)
            return 1;

        if(n % 2 == 0)
            return 1 + collatz(n / 2, limit);
        else
            return 1 + collatz(3 * n + 1, limit);
    }

int main()
{
    long long n, L, i, cs=0;

    while(scanf("%lld %lld", &n, &L)==2 && n>=0 && L>=0){

        i = collatz(n, L);

        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n", ++cs, n, L, i);
    }
    return 0;
}
