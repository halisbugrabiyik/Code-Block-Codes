#include <stdio.h>
#include <stdlib.h>


int main() {
    int a, b, c, yedeksayi;

    printf("1. sayiyi giriniz: ");
    scanf("%d", &a);

    printf("2. sayiyi giriniz: ");
    scanf("%d", &b);

    printf("3. sayiyi giriniz: ");
    scanf("%d", &c);

    if (a > b) {
        yedeksayi = a;
        a = b;
        b = yedeksayi;
    }

    if (a > c) {
        yedeksayi = a;
        a = c;
        c = yedeksayi;
    }

    if (b > c) {
        yedeksayi = b;
        b = c;
        c = yedeksayi;
    }

    printf("Kucukten buyuge siralama: %d, %d, %d\n", a, b, c);

    return 0;
}
