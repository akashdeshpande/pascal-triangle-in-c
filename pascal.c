#include <stdio.h>

int main(void)
{
    int no_of_lines = 0;
    printf("Enter no. of lines: ");
    scanf("%d", &no_of_lines);

    int even_array[1] = {1};
    int odd_array[1] = {1};

    for (int i = 0; i < no_of_lines; i++)
    {
        if (i % 2 == 0) // even i, but odd row
        {
            printf("\nodd row\n");
        }
        else // odd i, but even row
        {
            printf("\neven row\n");
        }
        for (int j = 0; j < i + 1; j++)
        {
            printf("%d", 1);
        }
        printf("\n");
    }
}