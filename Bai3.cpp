#include <stdio.h>

int main(){
	int n, data;
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
	for(int i=0; i<n/2; i++){
		data = arr[n-i-1];
		arr[n-i-1] = arr[i];
		arr[i] = data;
	}
	printf("Mang moi: ");
	for(int i=0; i<n; i++){
		printf("\narr[%d] = %d", i, arr[i]);
	}
	return 0;
}

