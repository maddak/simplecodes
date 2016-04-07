#include "stdio.h"
#define MAXLENGTH 60000

int main ()
{
        int cell = 0;
        int words = 0;
        char str[MAXLENGTH];

        printf("Please enter a String [Max Length %d]: ", MAXLENGTH);
        gets(str);

        while ( str[cell] )
        {
                while (str[cell] == ' ' || (str[cell]>='0' && str[cell]<='9')) cell++;
                if (str[cell] != 0)
                {
                        words++; 
                        while (str[cell] && (str[cell]!=' ')) cell++; 
                }
        }
        printf("the Words count: %d\n", words);
        return 0;
}
