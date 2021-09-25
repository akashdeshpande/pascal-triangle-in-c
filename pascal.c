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

void generate_array(int *array_to_gen, int n_gen_ele, int *prev_array)
{
    // init 1st and last element to 1
    array_to_gen[0] = 1;
    array_to_gen[n_gen_ele - 1] = 1;

    // generate from above
    for (int i = 1; i <= n_gen_ele - 2; i++)
    {
        array_to_gen[i] = prev_array[i - 1] + prev_array[i];
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
            if (odd_array == NULL)
                init_array(odd_array, (i + 1));
            // generate array from next runs
            else
                generate_array(odd_array, (i + 1), even_array);

            // print array
            print_array(odd_array, (i + 1));
        }
        else // odd i, but even row
        {
            // realloc even array
            even_array = (int *)realloc(even_array, sizeof(int) * (i + 1));

            // business logic
            // init array for 1st run
            if (even_array == NULL)
                init_array(even_array, (i + 1));
            // generate array from next runs
            else
                generate_array(even_array, (i + 1), odd_array);

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