/* inverse - modular multiplicative inverse (recursive implementation)
 * returns b^-1 mod m, must be called with s0 = 1, s1 = 0
 */

int inverse( int b, int m, int s0, int s1 )
{
    return !m ? s0 : inverse( m, b % m, s1, s0 - s1 * ( b / m ) ); 
}
