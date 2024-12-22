#include<stdio.h>
int main(){
	const int maxRow=10,maxCol=10;
	int array[maxRow][maxCol];
	int col=0,row=0,choose;
	while(1){
		printf("======================MENU====================\n");
		printf("1.Nhap kich co va gia tri cac phan tu mang\n");
		printf("2.In ra cac phan tu cua mang theo ma tran\n");
		printf("3.In ra gia tri cac phan tu la so le va tinh tong\n");
		printf("4.In ra cac phan tu nam tren duong bien va tinh tich\n");
		printf("5.In ra cac phan tu nam tren duong cheo chinh\n");
		printf("6.In ra cac phan tu nam tren duong cheo phu\n");
		printf("7.In ra dong co tong cac phan tu la lon nhat\n");
		printf("8.Thoat\n");
		printf("Moi nhap vao su lua chon cua ban (1-8): ");
		scanf("%d",&choose);
		switch(choose){
			case 1:{
				int a,b;
				printf("Moi nhap vao a : ");
				scanf("%d",&a);
				printf("Moi nhap vao b : ");
				scanf("%d",&b);
				if(a<0||b<0||a>maxRow||b>maxCol){
					printf("Gia tri khong hop le!!!!\n");
					break;
				}
				printf("Nhap gia tri vao cac phan tu : \n");
				for(int i=0;i<a;i++){
					for(int j=0;j<b;j++){
						printf("array[%d][%d] = ",i,j);
						scanf("%d",&array[i][j]);
					}
				}
				row=a;
				col=b;
				break;
			}
			case 2:{
				printf("Cac phan tu trong mang la: \n");
				for(int i=0;i<row;i++){
					for(int j=0;j<col;j++){
						printf("%d ",array[i][j]);
					}
					printf("\n");
				}
				break;
			}
			case 3:{
				int sum=0;
				for(int i=0;i<row;i++){
					for(int j=0;j<col;j++)	
						if(array[i][j]%2!=0){
							printf("array[%d][%d] = %d\n",i,j,array[i][j]);
							sum+=array[i][j];
						}
				}
				printf("Tong = %d\n",sum);
				break;
			}case 4:{
				long long tich=1;
				for(int i=0;i<row;i++){
					for(int j=0;j<col;j++){
						if(i==0||i==row-1||j==0||j==col-1){
							printf("%d ",array[i][j]);
						}
						else{
							printf("  ");
						}
						tich*=array[i][j];	
					}
					printf("\n");
					
				}
				printf("Tich cua cac phan tu tren duong bien la : %lld\n",tich);
				break;
			}
			case 5:{
				printf("Cac phan tu nam tren duong cheo chinh la: \n");
				if(row!=col){
					printf("Ma tran khong co duong cheo chinh!!!!\n");
					break;
				}
				else{
					for(int i=0;i<row;i++){
						for(int j=0;j<col;j++){	
							if(i==j){
								printf("%d ",array[i][j]);
							}
							else{
								printf("  ");
							}
						}
						printf("\n");
					}
				}
				break;
			}
			case 6:{
				printf("Cac phan tu nam tren duong cheo phu la: \n");
				if(row!=col){
					printf("Ma tran khong co duong cheo phu!!!!\n");
					break;
				}
				else{
					for(int j=0,i=row-1;j<=col-1;j++,i-- ){
						printf("array[%d][%d] = %d\n",i,j,array[i][j]);
					}
				}
				break;
			}
			case 7:{
				int max_sum=0;//luu tru tong lon nhat
				int max_row=0;//luu tru chi so cua dong co tong lon nhat
				for(int i=0;i<row;i++){
					int row_sum=0;//tong cua cac phan tu trong mot dong 
					for(int j=0;j<col;j++){
						row_sum+=array[i][j];
					}
					if(row_sum>max_sum){
						max_sum=row_sum;
						max_row=i;
					}
				}
				printf("Dong co tong cac phan tu lon nhat la : \n");
				int n=max_row;
				for(int j=0;j<col;j++){
					printf("%d ",array[n][j]);
				}
				printf("\n");
				break;
			}
			case 8:
				break;
			default:
				printf("nhap sai roi vui long nhap lai(1-9)!!!!!!!")
		}
		if(choose==8){
			printf("ket thuc chuong trinh!!!!!!");
			break;
		}
	}
	return 0;
}


