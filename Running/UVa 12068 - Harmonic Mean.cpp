
Clearance : In this problem you have t Find the Harmonic Mean of the given numbers according to the Equation given . But you can't take / make any Floating point numbers to solve this problem . One more point you have to Find the Result in a DIVISION format like A/B . To do that you have to divide the pre-resultant A & B with such a number that the result of Division for both A & B will 1 . Suppose ,   90/25 = 18/5 . Hope Got That .

Tip : To find such a number that is divisible by Both A & B you can use GCD becuse . GCD is the most efficient number that will Find you the Greatest Number that will be divisible by Both A & B .Careful about the output format .

#include<bits/stdc++.h>

template< class T > T gcd(T a, T b) { return (b != 0 ? gcd<T>(b, a%b) : a); }

using namespace std;

int main()
{
    int test, caseno=0;
    scanf("%d",&test);
    while(test--)
    {
        int n;
        scanf("%d",&n);
        int a[n+1];
        long long int dot = 1, sum = 0;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            dot = dot * a[i];
        }
        for(int i=0; i<n; i++)
            sum = sum + (dot/a[i]);
        dot = n * dot;
        long long int res1 = dot/(gcd<long long int>(dot,sum));
        long long int res2 = sum/(gcd<long long int>(dot,sum));
        printf("Case %d: %lld/%lld\n",++caseno, res1, res2);
    }
    return 0;


#include<bits/stdc++.h>
using namespace std;

#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
#define PI acos(-1.0)

#define MOD 1000000007
#define MX 100010

long long calcLcm(long long a, long long b)
{
    return a*b/__gcd(a, b);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tc, kk=1, n, m, x, y, a, b, c, arr[12];
    string s;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        cin>>arr[0];
        long long lcm = arr[0];
        for(int i=1; i<n; i++)
        {
            cin>>arr[i];
            lcm = calcLcm(lcm, arr[i]);
        }
        long long denominator = 0;
        for(int i=0; i<n; i++)
            denominator+=(lcm/arr[i]);
        long long numerator = lcm * n;
        long long gcd = __gcd(numerator, denominator);
        cout<< "Case "<<kk++<<": "<< numerator/gcd<<"/"<<denominator/gcd<<"\n";
    }
    return 0;
}







#include<stdio.h>
long long gcd(long long x, long long y)
{
    long long t;
    while(x%y)
    {
        t = x, x = y, y = t%y;
    }
    return y;
}
int main()
{
    int T, C = 0, i, N;
    scanf("%d", &T);

    while(T--)
    {
        scanf("%d", &N);
        long long A[10], m = 0, n = 0, tmp = 1;

        for(i = 0; i < N; i++)
            scanf("%lld", &A[i]), tmp *= A[i];

        m = tmp*N;

        for(i = 0; i < N; i++)
            n += tmp/A[i];

        tmp = gcd(m, n), m /= tmp, n /= tmp;

        printf("Case %d: %lld/%lld\n", ++C, m, n);
    }
    return 0;
}

我要檢舉
