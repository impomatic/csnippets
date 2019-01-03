/* phi - Euler's totient function
 * returns the number of integers less than n which are coprime to n
 */

unsigned phi(unsigned n)
{
    unsigned i, totient = n;
    for ( i = 2; i * i <= n; i++ )
    {
        if (n % i == 0)
        {
            do n /= i;
            while ( n % i == 0 );
            totient -= totient / i;
        }
    }
    if ( n > 1 )
        totient -= totient / n;
    return totient;
}
