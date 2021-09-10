/* gcd - greatest common divisor (recursive implementation)
 * returns the gcd of a and b. 1 if a and b are relatively prime
 */

int gcd(int a, int b)
{
    return !b ? a : gcd (b, a % b);
}
