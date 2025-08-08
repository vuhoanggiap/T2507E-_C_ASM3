#include <stdio.h>

int main(){
	int ngay, thang , nam;
	printf("hay nhap ngay thang nam(cach nhau boi dau cach): ");
	scanf("%d %d %d",&ngay,&thang,&nam);
	
	int songaymotthang[] = {31,28,31,30,31,30,31,31,30,31,30,31};
	
	if((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 ==0)){
		songaymotthang[1] = 29;
	};
	
	if(ngay < 1 || thang < 1 || thang > 12 || nam < 1 || ngay > songaymotthang[thang - 1]){
		printf("thoi gian khong hop le!");
		return 0;
	};
	
	int ngaytrongnam = ngay;
	for(int i = 0; i < thang - 1; i++){
		ngaytrongnam += songaymotthang[i];
	}
	printf("day la ngay thu %d trong nam %d",ngaytrongnam,nam);
	return 0;
}
