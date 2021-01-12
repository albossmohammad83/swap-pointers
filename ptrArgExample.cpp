/* CIS 279 
 * Example:  Pointers as Function Arguments
 * Date: 09/12/16
 */

#include <iostream>


 void print( char* message )
    {
       std::cout << message << "\n";
    }

    int main()
    {
       print( "Hello" );
       return 0;
 
    }

 /*---------OUTPUT ---------------
Hello
Press any key to continue . . .
--------------------------------*/