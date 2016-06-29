#include <stdio.h>
#include <sstream>
#define SSTR( x ) dynamic_cast< std::ostringstream & >( \
( std::ostringstream() << std::dec << x ) ).str()

int main(int argc, char *argv[])
{
        long double n;

        scanf("%LE", &n);

        std::string s = SSTR(n);

         if(s[0] != '-')
             printf("+");
         printf("%.4LE\n", n);

return 0;
}
