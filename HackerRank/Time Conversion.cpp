/*
* GM Arif Shuvo
* CSE, Jahangirnagar University
* id: aarif_shuvo(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int hh,mm,ss;
    string s;
    
    cin>>s;
    int l=s.size();
    
    hh=10*(s[0]-'0')+(s[1]-'0');
    mm=10*(s[3]-'0')+(s[4]-'0');
    ss=10*(s[6]-'0')+(s[7]-'0');
    
    if(s[8]=='P' && hh!=12)
        hh+=12;
    else if(s[8]=='A' && hh==12)
        hh=0;
    
    printf("%.02d:%.02d:%.02d\n", hh, mm, ss);
    
    return 0;
}



//OR...........




#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int hh,mm,ss;
    char s[12];

    scanf("%d:%d:%d%s", &hh, &mm, &ss, s);

    if(strcmp(s, "AM")==0 && hh==12)
            hh = 0;
    else if(strcmp(s, "PM")==0 && hh<12)
            hh = hh+12;


    printf("%.02d:%.02d:%.02d\n", hh, mm, ss);

    return 0;
}
