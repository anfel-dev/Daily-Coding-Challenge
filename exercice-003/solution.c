
#include <stdio.h>

void moveZeros(int array[], int n)
{
    int position = 0;

    for (int i = 0; i < n; i++)
    {
        if (array[i] != 0)
        {
            if (i != position)
            {
                int temp = array[position];
                array[position] = array[i];
                array[i] = temp;
            }

            position++;
        }
    }
}

int main()
{
    int array[] = {0, 1, 0, 3, 12};
    int n = sizeof(array) / sizeof(array[0]);

    moveZeros(array, n);

    printf("Result: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n");

    return 0;
}
