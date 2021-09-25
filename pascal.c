#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int no_of_lines = 0;
    printf("Enter no. of lines: ");
    scanf("%d", &no_of_lines);

    int *odd_array = NULL;
    int *even_array = NULL;

    for (int i = 0; i < no_of_lines; i++)
    {
        if (i % 2 == 0) // even i, but odd row
        {
            // realloc odd array
            odd_array = (int *)realloc(odd_array, sizeof(int) * (i + 1));

            // business logic
            // init array for demo
            for (int k = 0; k < (i + 1); k++)
            {
                odd_array[k] = 1;
            }

            // print array
            for (int j = 0; j < i + 1; j++)
            {
                printf("%d", odd_array[j]);
            }
        }
        else // odd i, but even row
        {
            // realloc even array
            even_array = (int *)realloc(even_array, sizeof(int) * (i + 1));

            // business logic
            // init array for demo
            for (int k = 0; k < (i + 1); k++)
            {
                even_array[k] = 1;
            }

            // print array
            for (int j = 0; j < i + 1; j++)
            {
                printf("%d", even_array[j]);
            }
        }
        printf("\n");
    }
}

/*
Program comments

malloc is same as realloc(null, ..)

*/