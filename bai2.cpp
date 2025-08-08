#include <stdio.h>
#include <stdlib.h>
int main(){
	int a , b;
	printf("nhap 2 so nguyen (cach nhau boi dau cach): ");
	scanf("%d %d",&a,&b);
	
	int tritd1 = abs(10 - a);
	int tritd2 = abs(10 - b);
	
	if(tritd1 < tritd2){
		printf("so thu nhat gan 10 hon so thu hai\n");
	}else if (tritd1 > tritd2){
		printf("so thu hai gan 10 hon so thu nhat\n");
	}else{
		printf("hai so co khoang cach bang nhau\n");
	}
	return 0;
}
