#include <stdio.h>

void ChuyenDia(int dia, char cotA, char cotC) {
    printf("Chuyen dia %d tu cot %c sang cot %c\n", dia, cotA, cotC);
}

void ThapHaNoi(int n, char cotA, char cotB, char cotC) {
    if (n == 1) {
        ChuyenDia(n, cotA, cotC);
    } else {
        ThapHaNoi(n - 1, cotA, cotC, cotB);
        ChuyenDia(n, cotA, cotC);
        ThapHaNoi(n - 1, cotB, cotA, cotC);
    }
}

int main() {
    int soDia;
    printf("Nhap so luong dia: ");
    scanf("%d", &soDia);

    ThapHaNoi(soDia, 'A', 'B', 'C');

    return 0;
}

