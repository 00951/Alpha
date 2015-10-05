
/*
* GM Arif
* CSE, Jahangirnagar University
* id: gmarif_online(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <stdio.h>
#include <string.h>

int main()
{
    int i,count;
    char str[100000];

    while(gets(str)){

        count=0;

        for(i=0; str[i]!='\0'; i++){

            if( ( (str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') )
               
                && ( (str[i+1]<'a' || str[i+1]>'z') && (str[i+1]<'A' || str[i+1]>'Z') ) )
                
                count++;

        }
        printf("%d\n", count);
    }
    return 0;
}
