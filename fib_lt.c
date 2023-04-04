/* fib_lt - returns the index of the largest Fibonacci number
 * number which is smaller than or equal to a.
 */

int fib_lt( int a )
{
    int fiba = 0, fibb = 1, temp, ind = 0;
    while ( fibb <= a )
    {
        temp = fibb;
        fibb += fiba;
        fiba = temp;
        ind++;
    }
    return ind;
}

