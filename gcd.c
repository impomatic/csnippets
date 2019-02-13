/* gcd - greatest common divisor
 * returns the gcd of a and b. 1 if a and b are relatively prime
 */

unsigned gcd(unsigned a, unsigned b)
{
    unsigned temp;
    while ( b != 0 )
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}
