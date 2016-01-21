#include <stdio.h>

int main()
{

    long long  T,n;
    long long arr[10000];
    long long zero=0, one=0, two=0, three=0, four=0, five=0, six=0, seven=0, eight=0, nine=0;

    scanf("%lld", &T);

   while(T--){
        scanf("%lld", &n);

        zero=0, one=0, two=0, three=0, four=0, five=0, six=0, seven=0, eight=0, nine=0;

        long long j,x=1;

        for(j=0; j<n; j++){
            arr[j]=x;
            x++;
        }

        long long i,z,p;

        for(i=0; i<n; i++){

            z=11;

            for(;;){

                p=arr[i]%10;
                z=arr[i]/10;

                if(p==0) zero++;
                else if(p==1) one++;
                else if(p==2) two++;
                else if(p==3) three++;
                else if(p==4) four++;
                else if(p==5) five++;
                else if(p==6) six++;
                else if(p==7) seven++;
                else if(p==8) eight++;
                else if (p==9) nine++;

                arr[i]=z;

                if(z=0)
                    break;
            }
        }
        printf("%lld %lld %lld %lld %lld %lld %lld %lld %lld %lld\n", zero, one, two, three, four, five, six, seven, eight, nine);
    }
    return 0;
}









//Alternate Efficient Solution






#include <stdio.h>

int main()
{
    int n,a0,a1,a2,a3,a4,a5,a6,a7,a8,a9;
    int a,b,c,d,i,j,k,l,p,o,u,v;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a0=0;a1=0;a2=0;a3=0;a4=0;a5=0;a6=0;a7=0;a8=0;a9=0;
        scanf("%d",&a);
        for(j=1;j<=a;j++)
        {
            p=j;
            while(p!=0)
            {
                if(p%10==0)
                a0++;
                if(p%10==1)
                a1++;
                if(p%10==2)
                a2++;
                if(p%10==3)
                a3++;
                if(p%10==4)
                a4++;
                if(p%10==5)
                a5++;
                if(p%10==6)
                a6++;
                if(p%10==7)
                a7++;
                if(p%10==8)
                a8++;
                if(p%10==9)
                a9++;
                p=p/10;
            }
        }
        printf("%d %d %d %d %d %d %d %d %d %d\n",a0,a1,a2,a3,a4,a5,a6,a7,a8,a9);
    }
    return 0;
}
