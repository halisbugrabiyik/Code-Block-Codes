#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

int main() {
    int not, toplam;
    float ortalama;

    for (int i = 1; i <= 5; i++) {
        toplam = 0;
        printf("%d. ogrencinin notlarini giriniz:\n", i);

        for (int b = 1; b <= 4; b++) {
            printf("%d. not: ", b);
            scanf("%d", &not);
            toplam += not;
        }

        ortalama = toplam / 4.0;
        printf("%d. ogrencinin ortalamasi: %.2f -> ", i, ortalama);

        if (ortalama < 50)
            printf("Kaldi\n");
        else
            printf("Gecti\n");
    }

    return 0;
}
