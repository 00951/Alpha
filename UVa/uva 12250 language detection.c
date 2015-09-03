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
    int cs=0;

    while(gets(str)){
        cs++;
        
        if(strcmp(str,"#")==0)
            break;
        else if(strcmp(str,"HELLO")==0)
            printf("Case %d: ENGLISH\n", cs);
        else if(strcmp(str,"HOLA")==0)
            printf("Case %d: SPANISH\n", cs);
        else if(strcmp(str,"HALLO")==0)
            printf("Case %d: GERMAN\n", cs);
        else if(strcmp(str,"BONJOUR")==0)
            printf("Case %d: FRENCH\n", cs);
        else if(strcmp(str,"CIAO")==0)
            printf("Case %d: ITALIAN\n", cs);
        else if(strcmp(str,"ZDRAVSTVUJTE")==0)
            printf("Case %d: RUSSIAN\n", cs);
        else
            printf("Case %d: UNKNOWN\n", cs);
    }
    return 0;
}
