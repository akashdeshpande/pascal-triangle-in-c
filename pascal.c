#include <stdio.h>
#include <stdlib.h>

void init_array(int *array, int no_of_elements)
{
    for (int i = 0; i < no_of_elements; i++)
    {
        array[i] = 1;
    }
}

void print_array(int *array, int no_of_elements)
{
    for (int i = 0; i < no_of_elements; i++)
    {
        printf("%d", array[i]);
    }
}

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
            init_array(odd_array, (i + 1));

            // print array
            print_array(odd_array, (i + 1));
        }
        else // odd i, but even row
        {
            // realloc even array
            even_array = (int *)realloc(even_array, sizeof(int) * (i + 1));

            // business logic
            // init array for demo
            init_array(even_array, (i + 1));

            // print array
            print_array(even_array, (i + 1));
        }
        printf("\n");
    }
}

/*
Program comments

malloc is same as realloc(null, ..)

*/