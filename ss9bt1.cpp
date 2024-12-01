#include <stdio.h>

int main() {
    int max = 100;
    int arr[max];
    int currentLength = 0;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &currentLength);
    for (int i = 0; i < currentLength; i++){
    	printf("Nhap cac phan tu: ");
        scanf("%d", &arr[i]);
    }
    int value, addIndex;
    printf("Nhap gia tri muon them: ");
    scanf("%d", &value);
    printf("Nhap vi tri muon them: ");
    scanf("%d", &addIndex);
    if(addIndex < 0){
        printf("Vi tri them khong hop le!\n");
    } else{
        if (addIndex >= currentLength){
            arr[addIndex] = value;
            currentLength = addIndex + 1;
        } else{
            for (int i = currentLength - 1; i >= addIndex; i--){
                arr[i + 1] = arr[i];
            }
            arr[addIndex] = value;
            currentLength++;
        }
        printf("Mang sau khi them: ");
        for (int i = 0; i < currentLength; i++){
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
