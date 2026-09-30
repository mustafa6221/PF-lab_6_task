#include <stdio.h>

int main()
{
    int access, hour, mode;

    while(1)
    {
        printf("Enter access number (9999 to stop): ");
        scanf("%d", &access);

        if(access == 9999)
            break;

        printf("Enter current hour: ");
        scanf("%d", &hour);

        mode = (hour >= 22 || hour < 6) ? 1 : 0;

        if(mode)
        {
            printf("LATE NIGHT MODE\n");

            if(access & 8)
            {
                printf("Entry: ALLOWED\n");
            }
            else
            {
                printf("Entry: DENIED\n");
            }
        }
        else
        {
            printf("STANDARD MODE\n");

            if(access & 7)
            {
                printf("Entry: ALLOWED\n");
            }
            else
            {
                printf("Entry: DENIED\n");
            }
        }

        if(access & 4)
        {
            printf("Personal Trainer Access: YES\n");
        }
        else
        {
            printf("Personal Trainer Access: NO\n");
        }
    }

    return 0;
}