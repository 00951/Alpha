/* Function to convert decimal to binary.*/

int decimal_binary(int n)  
{
    int rem, i=1, bin=0;
    while (n!=0)
    {
        n/=2;
        bin += n%2 * (i*=10);
        //i*=10;
    }
    return bin;
}



/* Function to convert binary to decimal.*/

LL binary_decimal(LL n)
{
    LL dec=0, i=0;
    while (n!=0)
    {
        n/=10;
        dec += n%10 * pow(2,i++);
    }
    return dec;
}



//** Decimal to Binary using Recursion

void d2b(LL n)
{
    ca=0;
    if(n/2==1)
        d2b(n/2);
    printf("%d", n%2);  //****xplainnnnn
}
