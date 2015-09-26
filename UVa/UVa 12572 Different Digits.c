/*
* GM Arif
* CSE, Jahangirnagar University
* id: gmarif_online(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/

#include <stdio.h>

int main()
{
    long long i,fst,lst,count,z,d;
    long long one,two,three,four,five,six,seven,eight,nine,zero;

    while(scanf("%lld %lld", &fst, &lst)==2){

        count=(lst-fst)+1;

        for(i=fst; i<=lst; i++){

            one=0,two=0,three=0,four=0,five=0,
            six=0,seven=0,eight=0,nine=0,zero=0;

            z=i;

            for(;;){

                d=z%10;
                z=z/10;

                if(d==1)
                    one++;
                else if(d==2)
                    two++;
                else if(d==3)
                    three++;
                else if(d==4)
                    four++;
                else if(d==5)
                    five++;
                else if(d==6)
                    six++;
                else if(d==7)
                    seven++;
                else if(d==8)
                    eight++;
                else if(d==9)
                    nine++;
                else if(d==0)
                    zero++;

                if(z<=0)
                    break;

            }

            if(one>1 || two>1 || three>1 || four>1 || five>1 ||
                    six>1 || seven>1 || eight>1 || nine>1 || zero>1)

                count--;
        }
        printf("%lld\n", count);

    }

    return 0;
}
