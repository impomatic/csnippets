/* sumdiv
 * returns the sum of the proper divisors of n ( n >= 2 )
 */

int sumdiv(int n)
{
    int i, sum = 1;
    for ( i = 2; i * i < n; i++ )
    {
        if (n % i == 0)
        {
            sum += i + n/i;
        }
    }
    if ( i * i == n )
        sum += i;
    return sum;
}
