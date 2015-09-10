/*
* GM Arif
* CSE, Jhangirnagar University
* id: gmarif_online (uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    char str[100000], str1[10000];
    while(scanf("%d", &T)==1 & T!=0){
        getchar();
        scanf("%s", str);
        int i,k,z,j=0,
            len = strlen(str);

        for(z=1; z<=T; z++){
            for(i=z*(len/T)-1; i>=((z-1)*(len/T)); i--){
                str1[j]=str[i];
                printf("%c", str1[j]);
            }
        }
        printf("\n");
    }
    return 0;
}
