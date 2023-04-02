/* gcd - greatest common divisor steps (recursive implementation)
 * returns the number of steps taken by Euclid's algorithm for gcd(a,b)
 */

int gcd_steps(int a, int b)
{
    return !a ? 0 : 1 + gcd_steps( b % a, a );
}

