#include <stdio.h>
#include <stdlib.h>

void deleteElementArr(int **pArr, int *n, int position);

int main(){
	int n, position;
	int *pArr = NULL;
	printf("nhap so phan tu trong mang: ");
	scanf("%d", &n);
	if(n > 100 || n < 0){
		printf("\ngia tri cua n khong duoc nho hon 0 va khong vuot qua 100\n");
		return 0;
	}
	pArr = (int*) malloc(n * sizeof(int));
	printf("nhap gia tri cac phan tu trong mang:\n");
	for(int i=0; i<n; i++){
		printf("arr[%d] = ", i);
		scanf("%d", &pArr[i]);
	}
	printf("nhap vao vi tri can xoa: ");
	scanf("%d", &position);
	deleteElementArr(&pArr, &n, position);
	printf("mang moi sau khi xoa gia tri:\n");
	for(int i=0; i<n; i++){
		printf("arr[%d] = %d\n", i, pArr[i]);
	}
	free(pArr);
	return 0;
}

void deleteElementArr(int **pArr, int *n, int position){
	if(position < 0 || position > *n){
		printf("Vi tri can xoa khong hop le");
		return;
	}
	*pArr = (int*) realloc(*pArr, (*n+1) * sizeof(int));
	for(int i=position; i<*n - 1; i++){
		(*pArr)[i] = (*pArr)[i+1];
	}
	(*n)--;
}

