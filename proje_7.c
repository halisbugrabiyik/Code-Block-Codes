#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
  char c;
    int a = 0;
    int b  = 1;
    int i;

    printf("Bir harf veya sayý gir: ");
    scanf("%c", &c);

    while (1) {

        for (i = 0; i < a ; i++) {
            printf(" ");
        }


        printf("%c\n", c);


        usleep(50000);


        a += b ;


        if (a >= 31)
            b = -1;
        else if (a <= 0)
            b = 1;
    }

    return 0;

}
