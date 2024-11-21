#include <stdio.h>

int binarySearch(int array[], int low, int high, int key) {
    if (low > high) {
        return -1; // 沒找到，返回 -1
    }

    int mid = low + (high - low) / 2; // 計算中間索引

    if (array[mid] == key) {
        return mid; // 找到目標值，返回索引
    }
    else if (array[mid] > key) {
        // 在左半部分搜尋
        return binarySearch(array, low, mid - 1, key);
    }
    else {
        // 在右半部分搜尋
        return binarySearch(array, mid + 1, high, key);
    }
}

int main() {
    int array[] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29 };
    int size = sizeof(array) / sizeof(array[0]);
    int key;

    printf("請輸入要搜尋的值: ");
    scanf_s("%d", &key);

    int result = binarySearch(array, 0, size - 1, key);

    if (result != -1) {
        printf("找到值 %d，位於索引 %d\n", key, result);
    }
    else {
        printf("未找到值 %d\n", key);
    }

    return 0;
}
