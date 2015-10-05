
/*
* GM Arif
* CSE, Jahangirnagar University
* id: gmarif_online(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/



#include <stdio.h>
#include <string.h>

int main()
{
    long long x,i,j,m,n,flag,len;
    char str[10000],arr[100000];

    while(gets(str)){

            x=0,flag=1;

            if(strcmp("DONE", str)==0)
                break;

            len=strlen(str);

                for(i=0; i<len; i++){

                    str[i]=toupper(str[i]);

                    if((str[i]>='A' && str[i]<='Z')){
                        arr[x++]=str[i];
                    }
                }

                for(m=0,n=x-1; m<x/2,n>=x/2; m++,n--){

                    if(arr[m]!=arr[n]){
                        flag=0;
                        break;
                    }

                }

                if(flag==0)
                    printf("Uh oh..\n");
                else
                    printf("You won't be eaten!\n");
    }
    return 0;
}
