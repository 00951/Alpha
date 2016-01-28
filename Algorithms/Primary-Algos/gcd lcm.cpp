**Use this -- >

// a,b ->  a)b(*  ebhabe ... porer dhap e amra remainder k a er jaygay nibo & b er jaygay ager a anbo. try to visualize -_-
// ar choto boro matter na.. coz 6)4( korle thik 2nd stp ei remainder jehetu 4 i thake tkhn 4)6( hoye jay automatic...


LL gcd(int a, int b)       //*** gcd....
{
    return a==0 ? b : gcd(b%a,a);
}


int lcm(int a, int b)
{
    return a/gcd(a,b) * b;      // avoid *overflow
}

------------------------------------------------

many ways ->>>>

int gcd(int m, int n){

    int r=m%n;
    return r==0 ? n : gcd(n,r);

}
------------------------------------------

int gcd(int a, int b)
{
    if (b==0)
        return a;

    return gcd(b,a%b);
}

-------------------------------------------------

The GCD of more than two numbers: -> gcd(a,b,c) = gcd(gcd(a,b),c)

--------------------------------------------------

int gcd_slow(int num1, int num2){

  int mn=min(num1,num2);

  for(i=mn;i>=1;--i)
  {
      if(num1%i==0 && num2%i==0)
      {
          printf("HCF of %d and %d is %d", num1, num2,i);
           break;
      }
  }
}
