#include <stdio.h>

int main()
{
    int n,k,ans;

    while(scanf("%d %d", &n, &k)==2){

        int cig_butt=n, cig=0;

        while(cig_butt>=k){
                                
           cig_butt-=k;       //k kore kore cig_butt kombe.. ek cig barbe.. oi barti cig er arekta cig_butt barbe... until cig_butt>=k
           cig++;             // very slow solution.. takes 1.6 sec :3
           cig_butt++;
           
        }
        printf("%d\n", n+cig);
    }
    return 0;
}
