#include <stdio.h>

int main()
{
    int class, failed_subjects;
    printf("Enter the class you got - \n");
    scanf("%d", &class);
    printf("Enter the number of subjects you falied in - \n");
    scanf("%d", &failed_subjects);
    switch (class)
    {
    case 1:
        switch (failed_subjects)
        {
        case 1:
            printf("You will get %d grace marks.\n", failed_subjects * 5);
            break;
        case 2:
            printf("You will get %d grace marks.\n", failed_subjects * 5);
        case 3:
            printf("You will get %d grace marks.\n", failed_subjects * 5);
        default:
            printf("You will not get any grace marks.\n");
            break;
        }
        break;
    case 2:
        switch (failed_subjects)
        {
        case 1:
            printf("You will get %d grace marks.\n", failed_subjects * 4);
            break;
        case 2:
            printf("You will get %d grace marks.\n", failed_subjects * 4);
        default:
            printf("You will not get any grace marks.\n");
            break;
        }
        break;
    case 3:
        switch (failed_subjects)
        {
        case 1:
            printf("You will get %d grace marks.\n", failed_subjects * 5);
            break;
        default:
            printf("You will not get any grace marks.\n");
            break;
        }
        break;
    }
    return 0;
}