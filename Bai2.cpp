#include <stdio.h>

int main(){
	int n, count, x;
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
	printf("x = ");
	scanf("%d", &x);
	for(int i=0; i<n; i++){
		if(arr[i] == x){
			count++;
		}
	}
	printf("%d", count);
	return 0;
}

