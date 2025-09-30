#include <stdio.h>
#include <stdlib.h>

int main() {
    int sayi;


    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);


    for (int i = 1; i <= sayi; i++) {


        if (i > 50) {
            break;
        }

        if (i % 3 == 0) {
            continue;
        }

        printf("%d\n", i);
    }

    return 0;
}
