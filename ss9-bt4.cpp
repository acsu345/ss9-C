#include <stdio.h>

int main() {
	int MAX=100; 
    int arr[MAX];
    int currentLength = 0, answer;

    while (1) {
        printf("\n   MENU   \n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Exit\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &answer);

        switch (answer) {
        case 1: {
            int n;
            printf("Nhap so phan tu muon nhap (toi da 100): ");
            scanf("%d", &n);
            if (n < 1 || n > MAX) {
                printf("So phan tu khong hop le.\n");
                break;
            }
            currentLength = n;
            for (int i = 0; i < n; i++) {
                printf("Phan tu thu %d: ", i + 1);
                scanf("%d", &arr[i]);
            }
            continue;
        }
        case 2: {
            if (currentLength == 0) {
                printf("Mang hien tai rong.\n");
            } else {
                printf("Cac phan tu trong mang:\n");
                for (int i = 0; i < currentLength; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
            }
            continue;
        }
        case 3: {
            if (currentLength >= MAX) {
                printf("Khong the them phan tu moi\n");
                break;
            }
            int value, position;
            printf("Nhap vi tri can them (tu 0 den %d): ", currentLength);
            scanf("%d", &position);
            if (position < 0 || position > currentLength) {
                printf("Vi tri khong hop le\n");
                break;
            }
            printf("Nhap gia tri can them: ");
            scanf("%d", &value);
            for (int i = currentLength; i > position; i--) {
                arr[i] = arr[i - 1];
            }
            arr[position] = value;
            currentLength++;
            printf("Mang sau khi them: ");
            for (int i = 0; i < currentLength; i++){
            printf("%d \n", arr[i]);
            continue;
        }
        case 4: {
            if (currentLength == 0) {
                printf("Mang rong\n");
                break;
            }
            int position, newValue;
            printf("Nhap vi tri can sua (tu 0 den %d): ", currentLength - 1);
            scanf("%d", &position);
            if (position < 0 || position >= currentLength) {
                printf("Vi tri khong hop le\n");
                break;
            }
            printf("Nhap gia tri moi: ");
            scanf("%d", &newValue);
            arr[position] = newValue;
            printf("Mang sau khi sua la:\n");
    		for (int i = 0; i < currentLength; i++) {
        		printf("%d ", arr[i]);
            continue;
        }
        case 5: {
            if (currentLength == 0) {
                printf("Mang rong");
                break;
            }
            int position;
            printf("Nhap vi tri can xoa (tu 0 den %d): ", currentLength - 1);
            scanf("%d", &position);
            if (position < 0 || position >= currentLength) {
                printf("Vi tri khong hop le\n");
                break;
            }
            for (int i = position; i < currentLength - 1; i++) {
                arr[i] = arr[i + 1];
            }
            currentLength--;
            for(int i =0;i<currentLength;i++){
 	       		printf("%d \n ",arr[i]);
            continue;
        }
        case 6:
            printf("Thoat chuong trinh.\n");
            return 0;
        default:
            printf("Lua chon khong hop le\n");
            break;
        }
    }

    return 0;
}
}
}
}

