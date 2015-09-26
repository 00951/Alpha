/*
* GM Arif
* CSE, Jahangirnagar University
* id: gmarif_online(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/
 
 
#include <stdio.h>
#include <string.h>
#include <math.h>
 
int main()
{
    char ch;
    long long len,d,i,r,diff,flag;
     
    while(scanf("%lld", &len)==1 && len!=0){
         
        flag=0;
        r=-1,d=-1;
         
        diff=len;
          
        getchar();
     
        for(i=0; i<len; i++){
                 
            scanf("%c", &ch);
         
            if(ch=='Z'){
                diff=0;
                flag=1;
            }
            else if(ch=='R')
                r=i;
            else if(ch=='D')
                d=i;
                 
                 
            if(r>=0 && d>=0)
                    diff = ( abs(r-d) < diff )? abs(r-d) : diff;
                     
        }
 
        if(flag==1)
            printf("0\n");
        else
        printf("%lld\n", diff);
    }
    return 0;
}
