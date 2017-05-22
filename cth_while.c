#include <stdio.h>
#include <conio.h>

 main ()
{
    int total=0;
    int input=0;

    while(input != 999)
    {
        total=total+input;
        scanf("%d", &input);

    }

    printf("total=%d",total);

}
