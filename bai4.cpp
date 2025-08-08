#include <stdio.h>

int main(){
    float tien, tientra;

    printf("Nhap gia tri mua hang (VND): ");
    scanf("%f", &tien);

    if(tien >= 500000){
        tientra = tien * 0.9;
    }
    if(tien >= 200000 && tien < 500000){
        tientra = tien * 0.95;
    }
    if(tien < 200000){
        tientra = tien; 
    }

    printf("So tien phai tra la: %.0f VND\n", tientra);
    return 0;
}
