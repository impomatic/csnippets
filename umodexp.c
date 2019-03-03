/* modexp - unsigned modular exponentiation
 * returns b^e mod m
 */

unsigned modexp(unsigned b,unsigned e,unsigned m)
{
    unsigned c = 1;
    while (e)
    {
        if (e & 1)
            c = c * b % m;
        e >>= 1;
        b = b * b % m;
    }
    return c;
}
