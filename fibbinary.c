/* fibbinary - Zeckendorf representation of a
 * (the sum of distinct, non-consecutive Fibonacci numbers)
 * returns the Zeckendorf representation as a Fibbinary number
 */

int fibbinary( int a )
{
    int zeck = 0, fiba, fibb, temp, ind;
    while ( a > 0 )
    {
        ind = 0;
        fiba = fibb = 1;
        while ( fibb <= a )
        {
            temp = fibb;
            fibb += fiba;
            fiba = temp;
            ind++;
        }
    a -= fiba;
    zeck |= 1 << --ind;	
    }
    return zeck;
}

