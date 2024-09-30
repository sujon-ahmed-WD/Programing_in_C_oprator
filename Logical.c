#include <stdio.h>
#include <stdbool.h>
int main()
{
    bool result = (2 < 5) && !(4 > 5) && (5 < 6);
    //              ture     false      true
    printf(" The Result is= %d", result);
    return 0;
}