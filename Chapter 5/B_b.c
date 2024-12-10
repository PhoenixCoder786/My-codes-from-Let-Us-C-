#include <stdio.h>
#include <math.h>

int main()
{
    int iterative_count = 1, inner_loop_iterative;
    printf("Armstrong numbers between 1 to 500 are -- ");
    while (iterative_count <= 500)
    {
        int sum = 0;
        inner_loop_iterative = iterative_count;
        if (iterative_count < 10)
        {
            printf("%d ", iterative_count);
        }
        else
        {
            while (inner_loop_iterative > 0)
            {
                int digit = inner_loop_iterative % 10;
                sum += (pow(digit, 3));
                inner_loop_iterative /= 10;
            }
        }

        if (sum == iterative_count)
        {
            printf("%d ", iterative_count);
        }
        iterative_count++;
    }

    return 0;
}