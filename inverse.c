/* inverse - modular multiplicative inverse
 * returns b^-1 mod m
 */

int inverse( int b, int m )
{
    int s0 = 1, s1 = 0, temp;
    while ( m )
    {
        temp = s0 - s1 * ( b / m );
        s0 = s1;
        s1 = temp;
        temp = b % m;
        b = m;
        m = temp;
    }
    return s0;
}
