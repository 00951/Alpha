/*
* GM Arif
* CSE, Jahangirnagar University
* id: gmarif_online(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/
 
 
#include <stdio.h>
 
long long reverse(long long num)
{
        long long rev=0,rem;
 
        while (num!=0){
                rem = num % 10;
                rev = rev*10 + rem;
                num /= 10;
            }
        return rev;
}
 
int main()
{
    long long a,b,T,sum;
    scanf("%lld", &T);
 
    while(T--){
        scanf("%lld %lld", &a, &b);
        a=reverse(a),b=reverse(b);
        sum=a+b;
        sum=reverse(sum);
        printf("%lld\n", sum);
    }
 
    return 0;
}
