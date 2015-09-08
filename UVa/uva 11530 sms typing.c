/*
* GM Arif
* CSE, Jhangirnagar University
* id: gmarif_online (uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <stdio.h>
#include <string.h>

int main()
{
    char str[100000];
    long long len,T,cs=0,count;

    scanf("%lld", &T);
    getchar();

    while(T--){
        gets(str);
        cs++;
        len=strlen(str);
        count=0;
        long long i;

        for(i=0; i<len; i++){
            if(str[i]=='a' || str[i]=='d' || str[i]=='g' || str[i]=='j' ||  str[i]=='m' || str[i]=='p' || str[i]=='t' || str[i]=='w' || str[i]==' ')
                count+=1;
            else if(str[i]=='b' || str[i]=='e' || str[i]=='h' || str[i]=='k' ||  str[i]=='n' || str[i]=='q' || str[i]=='u' || str[i]=='x')

                count+=2;
            else if(str[i]=='c' || str[i]=='f' || str[i]=='i' || str[i]=='l' || str[i]=='o' || str[i]=='r' || str[i]=='v' || str[i]=='y')
                count+=3;
            else if(str[i]=='s' || str[i]=='z')
                count+=4;
        }
        printf("Case #%lld: %lld\n", cs, count);
    }
    return 0;
}
