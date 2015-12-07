***//Fibonacci using recursion

----------------------------------------------
LL fib(LL n){
    if(n==0||n==1)
        return n;
    else
        return fib(n-1)+fib(n-2);
}
----------------------------------------------
int main()
{
    LL n,i=0;
    scanf("%lld", &n);
    while(i<n){
        cout << fib(i) << endl;
        i++;
    }
   // cout << fib(n) << endl;
    main();
    return 0;
}
----------------------------------------------

***//Fibonacci using loop


#include <stdio.h>
typedef long long LL;

LL fibo(int n)
{
    LL a=1,b=a;
    LL temp;
    for(int i=0; i<n-2; i++)
    {
        temp=a+b;
        a=b;
        b=temp;
    }
    return b;
}

int main()
{
    printf("%lld\n",fibo(10));
}
