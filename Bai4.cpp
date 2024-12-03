#include <stdio.h>

int main(){
	int n, max;
	int arr[n];
	printf("nhap so phan tu trong mang: ");
	scanf("%d", &n);
	if(n > 100 || n < 0){
		printf("\ngia tri cua n khong duoc nho hon 0 va khong vuot qua 100\n");
		return 0;
	}
	printf("nhap gia tri cac phan tu trong mang:\n");
	for(int i=0; i<n; i++){
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<i; j++){
			if(arr[i]<arr[j]){
				max = arr[j];
				arr[j] = arr[i];
				arr[i] = max;
			}
		}
	}
	printf("mang moi sau khi sap xep: ");
	for(int i=0; i<n; i++){
		printf("\narr[%d] = %d", i, arr[i]);
	}
	return 0;
}
