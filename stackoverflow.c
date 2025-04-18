#include <stdio.h>

int main() {
    char devasa[10000000]; // 10 milyonda tanımladı
    devasa[0] = 'R';
    devasa[1] = 'A';
    devasa[2] = 'M';
    devasa[3] = '\0';

    printf("stack üzerinde dizi tanımlandı: %s\n", devasa);
    return 0;
}
