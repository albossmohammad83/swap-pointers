 /* CIS 279 
 * Example:  Swap Implementation Using Pointers
 * Date: 09/12/16
 */

#include <assert.h>

void swap( int* px, int* py )
{
   int temp = *px;
   *px = *py;
   *py = temp;
}

int main()
{
   int a = 5;
   int b = 10;
   //swap( a, b ); // wrong! address of the variable must be taken
   swap( &a, &b ); // correct
   assert( a == 10 && b == 5 );
   return 0;
}
