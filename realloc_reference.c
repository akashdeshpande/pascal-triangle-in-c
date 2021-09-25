/*
This program reallocs ptr to ptr_new
ptr_new has the previous elements of ptr
newly added elements have garbage value
malloc is same as realloc(null, ..)
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr = (int *)malloc(sizeof(int) * 2);
    int i;
    int *ptr_new;

    ptr[0] = 10;
    ptr[1] = 20;

    ptr_new = (int *)realloc(ptr, sizeof(int) * 3);
    ptr_new[2] = 30;
    for (i = 0; i < 3; i++)
        printf("%d ", ptr_new[i]);

    return 0;
}

/*
This program increases space for ptr
The number in line `ptr = (int *)realloc(ptr, sizeof(int)*3);`
is the number of total elements needed for ptr
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr = (int *)malloc(sizeof(int) * 2);

    ptr[0] = 10;
    ptr[1] = 20;

    ptr = (int *)realloc(ptr, sizeof(int) * 3);
    ptr[2] = 30;
    for (int i = 0; i < 3; i++)
        printf("%d ", ptr[i]);

    return 0;
}
