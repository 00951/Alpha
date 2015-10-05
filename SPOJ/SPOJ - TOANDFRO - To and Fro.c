/*
* GM Arif
* CSE, Jahangirnagar University
* id: gmarif_online(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <stdio.h>
#include <string.h>

int main()
{
    int n,len,x,k,i,j,p,y,t;
    char str[1000000];

    while(scanf("%d", &n)==1 && n!=0){
        getchar();
        gets(str);
        len=strlen(str);
        y=len/n;

        if(y%2==0){
            x=0;
            p=2*n-1;

            for(k=0; k<n; k++){
                for(i=x,j=p; i<len,j<len; i+=(2*n),j+=(2*n)){
                    printf("%c", str[i]);
                    printf("%c", str[j]);
                }
                x++;
                p--;
            }
            printf("\n");

        }else
        {
            x=0;
            p=2*n-1;
            t=len-n;

            for(k=0; k<n; k++){
                for(i=x,j=p; i<len,j<len; i+=(2*n),j+=(2*n)){
                    printf("%c", str[i]);
                    printf("%c", str[j]);
                }
                printf("%c", str[t]);
                t++;
                x++;
                p--;
            }
            printf("\n");
        }

    }


    return 0;
}
