#include<stdio.h>
int main(){
	const int maxSize=100;
	int array[maxSize];
	int n, currentLength,addIndex,value;
	printf("moi nhap vao so luong phan tu muon su dung : ");
	scanf("%d",&n);
	printf("nhap gia tri vao phan tu : \n");
	for(int i=0;i<n;i++){
		printf("array[%d] = ",i);
		scanf("%d",&array[i]);
	}
	currentLength=n;
	printf("moi nhap vao gia tri : ");
	scanf("%d",&value);
	printf("moi nhap vao vi tri muon them vao mang : ");
	scanf("%d",&addIndex);
	if(addIndex<0||addIndex>maxSize){
		printf("khong hop le!!!!");
	}
	else if(addIndex>=currentLength){
		array[addIndex]=value;
		currentLength=addIndex+1;
	}else {
		for(int i=currentLength-1;i>=addIndex;i--){
			array[i+1]=array[i];//cong vao du ra vi tri 
		}
		array[addIndex]=value;
		currentLength++;
	}
	printf("mang sau khi them la: \n");
	for(int i=0;i<currentLength;i++){
		printf("%d ",array[i]);
		
	}
}
