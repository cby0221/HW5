#include <stdio.h>

int binarySearch(int array[], int low, int high, int key) {
    if (low > high) {
        return -1; // �S���A��^ -1
    }

    int mid = low + (high - low) / 2; // �p�⤤������

    if (array[mid] == key) {
        return mid; // ���ؼЭȡA��^����
    }
    else if (array[mid] > key) {
        // �b���b�����j�M
        return binarySearch(array, low, mid - 1, key);
    }
    else {
        // �b�k�b�����j�M
        return binarySearch(array, mid + 1, high, key);
    }
}

int main() {
    int array[] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29 };
    int size = sizeof(array) / sizeof(array[0]);
    int key;

    printf("�п�J�n�j�M����: ");
    scanf_s("%d", &key);

    int result = binarySearch(array, 0, size - 1, key);

    if (result != -1) {
        printf("���� %d�A������ %d\n", key, result);
    }
    else {
        printf("������ %d\n", key);
    }

    return 0;
}
