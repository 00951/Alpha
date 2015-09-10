/*
* GM Arif
* CSE, Jhangirnagar University
* id: gmarif_online (uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <stdio.h>

int main()
{
    int n,p,k,i,v,x,l,c;

    while(scanf("%d", &n)==1 && n!=0){

        i=0,v=0,x=0,l=0,c=0;


           int q,w;

        for(q=1; q<=n; q++){


            if(q==10){x++; continue;}
            else if(q==20){x+=2; continue;}
            else if(q==30){x+=3; continue;}
            else if(q==40){ x++; l+=1; continue;}
            else if(q==60){x++; l++; continue;}
            else if(q==70){x+=2; l++; continue;}
            else if(q==80){x+=3; l++; continue;}
            else if(q==90){x++; c++; continue;}
            else if(q==50){ l+=1; continue;}
            else if(q==100){ c+=1; continue;}

                p=q%10;

            if(p==0)
                x+=1;
            if(p==1)
                i+=1;
            else if(p==2)
                i+=2;
            else if(p==3)
                i+=3;
            else if(p==4)
                i+=1,v+=1;
            else if(p==5)
                v+=1;
            else if(p==6)
                i+=1,v+=1;
            else if(p==7)
                i+=2,v+=1;
            else if(p==8)
                i+=3,v+=1;
            else if(p==9){
                i+=1,x+=1;
            }


            w=q/10;

        
            if(w==1)
                x+=1;
            else if(w==2)
                x+=2;
            else if(w==3)
                x+=3;
            else if(w==4)
                x+=1,l+=1;
            else if(w==5)
                l+=1;
            else if(w==6)
                l+=1,x+=1;
            else if(w==7)
                l+=1,x+=2;
            else if(w==8)
                l+=1,x+=3;
            else if(w==9)
                c+=1,x+=1;
            else if(w==10)
                c+=1;

            }
        printf("%d: %d i, %d v, %d x, %d l, %d c\n", n, i, v, x, l, c);
    }
    return 0;
}






// Alternate Efficient Solution






#include<stdio.h>

int main()
{
    int I,V,X,L,C,a[110],i,num;
    while(scanf("%d",&num)==1)
    {
        if(num==0)
            break;
        I=1;
        V=0;
        X=0;
        C=0;
        L=0;

    for(i=2;i<=num;i++)
        {
            if(i%10==1 || i%10==4 || i%10==6 || i%10==9)
                I=I+1;
            if(i%10==2 || i%10==7)
                I=I+2;
            if(i%10==3 || i%10==8)
                I=I+3;
            if(i%10==4 || i%10==5 || i%10==6 || i%10==7 || i%10==8)
                V=V+1;
            if((i>=9 && i<19) || (i>=40 && i<49) || (i>=59 && i<69) || (i>=90 && i<99))
                X=X+1;
            if((i>=19 && i<29) || i==49 || (i>=69 && i<79) || i==99)
                X=X+2;
            if((i>=29 && i<39) || (i>=79 && i<89))
                X=X+3;
            if(i==39 || i==89)
                X=X+4;
            if(i>=40 && i<90)
                L=L+1;
            if(i>=90)
                C=C+1;
    
        }
    
    printf("%d: %d i, %d v, %d x, %d l, %d c\n",num,I,V,X,L,C);
    
    }
    return 0;
}
