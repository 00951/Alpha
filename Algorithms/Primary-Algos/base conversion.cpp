/* Function to convert decimal to binary.*/

int decimal_binary(int n)  
{
    int rem, i=1, binary=0;
    while (n!=0)
    {
        rem=n%2;
        n/=2;
        binary+=rem*i;
        i*=10;
    }
    return binary;
}



/* Function to convert binary to decimal.*/

int binary_decimal(int n) 

{
    int decimal=0, i=0, rem;
    while (n!=0)
    {
        rem = n%10;
        n/=10;
        decimal += rem*pow(2,i);
        ++i;
    }
    return decimal;
}



//** Decimal to Binary using Recursion

void d2b(LL n)
{
    ca=0;
    if(n/2==1)
        d2b(n/2);
    printf("%d", n%2);  //****xplainnnnn
}
