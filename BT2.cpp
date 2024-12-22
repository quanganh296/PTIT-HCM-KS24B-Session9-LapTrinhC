#include<stdio.h>
int main(){
	int n,index,value;
	printf("moi nhap vao so luong phan tu : ");
	scanf("%d",&n);
	int array[n];
	for(int i=0;i<sizeof(array)/sizeof(int);i++){
		printf("array[%d] = ",i);
		scanf("%d",&array[i]);
	}
	printf("gia tri cua mang ban dau la: ");
	for(int i=0;i<sizeof(array)/sizeof(int);i++){
		printf("%d ",array[i]);
	}
	printf("\nmoi nhap vao vi tri can sua: ");
	scanf("%d",&index);
	printf("moi nhap vao gia tri: ");
	scanf("%d",&value);
	array[index]=value;
	printf("gia tri cua mang sau khi sua la: ");
	for(int i=0;i<sizeof(array)/sizeof(int);i++){
		printf("%d ",array[i]);
	}
	
	
}
