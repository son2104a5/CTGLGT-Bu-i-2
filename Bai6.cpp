#include <stdio.h>
#include <stdlib.h>

void mergeArrays(int *arr1, int n, int *arr2, int m, int *result) {
    for (int i=0; i<n; i++) {
        *(result + i) = *(arr1 + i);
    }
    for (int i=0; i<m; i++) {
        *(result + n + i) = *(arr2 + i);
    }
}

int main() {
    int n, m;
    printf("Nhap so phan tu cua mang thu nhat: ");
    scanf("%d", &n);
    int *arr1 = (int *)malloc(n * sizeof(int));
    printf("Nhap cac phan tu cua mang thu nhat: ");
    for (int i=0; i<n; i++) {
        scanf("%d", (arr1 + i));
    }
    printf("Nhap so phan tu cua mang thu hai: ");
    scanf("%d", &m);
    int *arr2 = (int *)malloc(m * sizeof(int));
    printf("Nhap cac phan tu cua mang thu hai: ");
    for (int i=0; i<m; i++) {
        scanf("%d", (arr2 + i));
    }
    int *result = (int *)malloc((n + m) * sizeof(int));
    mergeArrays(arr1, n, arr2, m, result);
    printf("Mang moi khi duoc merge:\n");
    for (int i=0; i<n + m; i++) {
        printf("newArr[%d] = %d\n", i, *(result + i));
    }
    free(arr1);
    free(arr2);
    free(result);

    return 0;
}

