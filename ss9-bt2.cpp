#include <stdio.h>

int main() {
    int arr[7];
    int i, position, newValue;
    printf("Nhap 7 phan tu cua mang:\n");
    for (i = 0; i < 7; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Nhap vi tri can sua (tu 0 den 6): ");
    scanf("%d", &position);
    if (position < 0 || position >= 7) {
        printf("Vi tri khong hop le\n");
    }
    printf("Nhap gia tri moi: ");
    scanf("%d", &newValue);
    arr[position] = newValue;
    printf("Mang sau khi sua la:\n");
    for (i = 0; i < 7; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

