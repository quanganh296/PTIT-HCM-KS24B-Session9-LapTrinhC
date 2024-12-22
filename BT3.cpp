#include<stdio.h>
int main(){
	int n, currentLength,index;
	const int maxSize=100;
	int array[maxSize];
	printf("moi nhap so phan tu muon su dung: ");
	scanf("%d",&n);
	printf("nhap vao gia tri phan tu: \n");
	for(int i=0;i<n;i++){
		printf("array[%d] = ",i);
		scanf("%d",&array[i]);
	}
	currentLength=n;
	printf("moi nhap vao vi tri muon xoa trong mang : ");
	scanf("%d",&index);
	if(index<0||index>maxSize){
		printf("không hop le");
		
	}
	else{
		for(int i=currentLength-1;i>=index;i--){
			array[i-1]=array[i];
		}
		currentLength--;
	}
	printf("mang sau khi xoa la: \n");
	for(int i=0;i<currentLength;i++){
		printf("%d ",array[i]);
		
	}
}
