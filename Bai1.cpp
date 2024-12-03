#include <stdio.h>

int main(){
	int n, max;
	int arr[n];
	printf("Nhap so phan tu trong mang arr: ");
	scanf("%d", &n);
	if(n > 100 || n < 0){
		printf("\ngia tri cua n khong duoc nho hon 0 va khong vuot qua 100\n");
		return 0;
	}
	printf("\nmoi ban nhap gia tri cua cac phan tu trong mang:\n");
	for(int i=0; i<n; i++){
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	max = arr[0];
	for(int i=0; i<n; i++){
		if(max < arr[i]){
			max = arr[i];
		}
	}
	printf("%d", max);
	return 0;
}

