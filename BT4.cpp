#include<stdio.h>
int main(){
	const int maxSize=10;
	int array[maxSize];
	int size=0,choose;
	do{
		printf("=============MENU=============\n");
		printf("1.Nhap vao mang\n");
		printf("2.hien thi mang\n");
		printf("3.them phan tu\n");
		printf("4.sua phan tu\n");
		printf("5.xoa phan tu\n");
		printf("6.thoat\n");
		printf("moi nhap vao su lua chon cua ban (1-6): ");
		scanf("%d",&choose);
		switch(choose){
			case 1:{
				int n;
				printf("moi nhap vao so luong phan tu : ");
				scanf("%d",&n);
				if(n<0||n>maxSize){
					printf("gia tri khong hop le:");
					break;
				}
				printf("nhap gia tri vao phan tu : \n");
				for(int i=0;i<n;++i){
					printf("array[%d] = ",i);
					scanf("%d",&array[i]);
				}
				size = n;
				break;
			}
			case 2:{
				if(size==0){
					printf("mang rong\n");
					break;
				}
				printf("cac phan tu trong mang la: \n");
				for(int i=0;i<size;++i){
					printf("array[%d] = %d\n",i,array[i]);
				}
				break;
			}
			case 3:{
				int addIndex, value;
				if(size==maxSize){
					printf("mang da day, khong them nua!!!!\n");
					break;
				}
				printf("moi nhap vao gia tri : ");
				scanf("%d",&value);
				printf("moi nhap vao vi tri muon them vao mang : ");
				scanf("%d",&addIndex);
				if(addIndex<0){
					addIndex=0;
				}
				else if(addIndex>=size){
					addIndex=size;
				}
				for(int i=size-1 ; i>=addIndex ; --i){
					array[i+1]=array[i];//cong vao du ra vi tri 
				}
				array[addIndex]=value;
				size++;
				
				break;
			}
			case 4:{
				int editIndex,newValue;
				printf("moi nhap vao vi tri can sua: ");
				scanf("%d",&editIndex);
				if(editIndex<0||editIndex>size-1){
					printf("vi tri sua khong hop le!!!!\n");
				}
				else{
					printf("moi nhap vao gia tri moi[gia tri cu %d]: ",array[editIndex]);
					scanf("%d",&newValue);
					array[editIndex]=newValue;
				}
				break;
			}
			case 5:{
				int deleteIndex;
				printf("moi nhap vao vi tri muon xoa trong mang : ");
				scanf("%d",&deleteIndex);
				if(deleteIndex>0&&deleteIndex<size){
					for(int i=size-1;i>=deleteIndex;--i){
						array[i-1]=array[i];
					}
					size--;
				}else{
					printf("vi tri can xoa khong hop le!!!!\n");
				}
				break;
			}
			case 6:
				break;
		}
		if(choose==6){
			printf("chuong trinh ket thucccccc!!!!!");
			break;
		}
	}while(1<=choose&&choose<=6);
	return 0;
}
