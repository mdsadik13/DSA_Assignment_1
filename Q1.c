#include <stdio.h>

int main()
{
    int flag = 1;
    char number[20];
    fgets(number, sizeof(number), stdin);
    for (int i = 0; i < sizeof(number); i++)
    {
        if (number[i] == '.')
        {
            printf("It's a float/double");
            flag = 0;
            break;
        }
    }
    if (flag)
    {
        printf("It's a not float/double");
    }
    return 0;
}