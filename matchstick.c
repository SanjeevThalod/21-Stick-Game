#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomnumber()
{
    srand(time(NULL));
    return rand() % 4;
}

int main()
{
    int user, computer, stick;
    stick = 21;

    while (stick >= 0)
    {

        if (stick == 0)
        {
            printf("You Win");
            break;
        }
        else if (stick > 0)
        {
            printf("User pick your sticks: ");
            scanf("%d", &user);
            if (user > 4)
            {
                printf("Please enter Sticks less than 4: ");
                scanf("%d", &user);
            }
            stick = stick - user;
        } else
        {
            printf("Not Possible to pick more than 21 stick\n");
            printf("You Win\n");
            break;
        }
        

        if (stick > 0)
        {
            int z = 1 + randomnumber();
            printf("The computer picks up %d sticks \n", z);

            stick = stick - z;
        }
        else if (stick == 0)
        {
            printf("You Loose");
            break;
        }
        else if (stick < 0)
        {
            printf("Not possible to pick more than 21 sticks\n");
            printf("You loose\n");
            break;
        }

        if (stick < 0)
        {
            printf("Not possible to pick more than 21 sticks\n");
            printf("You win");
        }
        

        printf("\n");
        if (stick > 0 || stick == 0)
        {
            printf("%d Sticks are left\n", stick);
        }
    }

    return 0;
}