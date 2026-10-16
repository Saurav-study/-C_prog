#include <stdio.h>

int main()
{
label:
// goto is also called a jump statement;;
    printf("We are inside label\n");

    goto end;

    printf("Hello World\n");

    goto label;

end:

    printf("We are at end now\n");

    return 0;
}