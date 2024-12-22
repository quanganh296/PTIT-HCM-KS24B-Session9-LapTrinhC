#include<stdio.h>
int main(){
	const int maxSize=100;
	int array[maxSize];
	int size=0,choose;
	while(1){
		printf("======================MENU====================\n");
		printf("1.nhap so phan tu can nhap va gia tri cac phan tu\n");
		printf("2.in ra gia tri cac phan tu dang quan ly\n");
		printf("3.in ra gia tri cac phan tu la so chan va tinh tong\n");
		printf("4.in ra gia tri nho nhat và gia tri lon nhat trong mang\n");
		printf("5.in ra phan tu la so nguyen to trong mang va tinh tong\n");
		printf("6.nhap vao mot so và thong ke trong mang co bao nhieu phan tu do\n");
		printf("7.them mot phan tu vao vi tri chi dinh\n");
		printf("8.thoat\n");
		printf("moi nhap vao su lua chon cua ban (1-8): ");
		scanf("%d",&choose);
		switch(choose){
			case 1:{
				int n;
				printf("moi nhap vao so luong phan tu : ");
				scanf("%d",&n);
				if(n<0||n>maxSize){
					printf("gia tri khong hop le!!!!\n");
					break;
				}
				printf("nhap gia tri vao cac phan tu : \n");
				for(int i=0;i<n;++i){
					printf("array[%d] = ",i);
					scanf("%d",&array[i]);
				}
				size=n;
				break;
			}
			case 2:{
				if(size==0){
					printf("mang rong!!!!\n");
				}
				printf("cac phan tu trong mang la: \n");
				for(int i=0;i<size;++i){
					printf("array[%d] = %d\n",i,array[i]);
				}
				break;
			}
			case 3:{
				int sum=0;
				for(int i=0;i<size;++i){
					if(array[i]%2==0){
						printf("array[%d] = %d\n",i,array[i]);
						sum+=array[i];
					}
				}
				printf("tong = %d\n",sum);
				break;
			}
			case 4:{
				int maxValue=0, minValue=0;
				for(int i=0;i<size;++i){
					if(array[i]>maxValue){
						maxValue=array[i];
					}
				}
				for(int i=0;i<size;++i){
					minValue=array[0];
					if(array[i]<minValue){
						minValue=array[i];
					}
				}
				printf("gia tri lon nhat: %d\n",maxValue);
				printf("gia tri nho nhat: %d\n",minValue);
				break;
			}
			case 5:{
				int sum1=0;
				for(int i=0;i<size;++i){
					int index=1;
					if(array[i]<2){
						index=0;
					}
					for(int j=2;j*j<=array[i];++j){
						if(array[i]%2==0){
							index=0;
							break;
						}
					}
					if(index==1){
						printf("array[%d] = %d\n",i,array[i]);
						sum1+=array[i];
					}
				}
				printf("tong nguyen to = %d\n",sum1);
				break;
			}
			case 6:{
				int a,count=0;
				printf("moi nhap vao mot gia tri bat ki de thong ke: ");
				scanf("%d",&a);
				for(int i=0;i<size;++i){
					if(a==array[i]){
						count++;
					}
				}
				printf("gia tri %d xuat hien trong mang %d lan\n",a,count);
				break;
			}
			case 7:{
				int addIndex,value;
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
				for(int i=size-1;i>=addIndex;--i){
					array[i+1]=array[i];//cong vao du ra vi tri 
				}
				array[addIndex]=value;
				size++;
				break;
			case 8:
				break;
			}
			default:
				printf("nhap sai roi ,vui long nhap lai (1-8)!!!\n");
				break;
		}
		if(choose==8){
			printf("chuong trinh ket thuccccc!!!!");
			break;
		}
	}
	
	return 0;
		
}

