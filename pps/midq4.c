/* Print pattern 
AAAA
BBB
CC
D
*/

#include<stdio.h>

int main()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4-i; j++)
        {
            printf("%c", 'A'+i);
        }
        printf("\n");
    }
    return 0;
}