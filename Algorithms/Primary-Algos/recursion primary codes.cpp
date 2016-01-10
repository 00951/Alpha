// palindrome checking with recursion


****||
int isPali(char *s, int l, int r)
{
    return ((l >= r) || (s[l] == s[r] && isPali(s, l+1, r-1)));
}
****||

int main()
{
    char str[1234];
    scanf("%s", str);
    if(isPali(str, 0, strlen(str)-1))
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0 ;
}



// print 1 to n using recursion

void print(int i)
{
    if(i > n) return;
    printf("%d ", i); **      // aage print, pore call
    print(i+1); 
}
 
int main()
{
    print(1);
}


// print n to 1 using recursion


void print(int i)
{
    if(i > n) return;
    print(i+1); **    // aage call, pore print
    printf("%d ", i);
}

int main()
{
    print(1);
}
