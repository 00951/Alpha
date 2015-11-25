//** Decimal to Binary using Recursion

void d2b(LL n)
{
    ca=0;
    if(n/2==1)
        d2b(n/2);
    printf("%d", n%2);  //****xplainnnnn
}

