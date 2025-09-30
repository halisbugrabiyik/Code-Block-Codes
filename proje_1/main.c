#include <stdio.h>
#include <stdlib.h>
int main() {
    int a , b;


    printf("Birinci sayiyi giriniz: ");
    scanf("%d", &a);
    printf("Ikinci sayiyi giriniz: ");
    scanf("%d", & b);


    printf("Toplam: %d\n", a + b);
    printf("Fark: %d\n", a - b);
    printf("Carpim: %d\n", a * b);
    printf("Bolum: %.2f\n", (float)a / b);


    return 0;
}
