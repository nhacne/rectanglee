# include <stdio.h>

float chu_vi(float d, float r);
float dien_tich(float d, float r);

int main(){
	float num1, num2;
	printf("\n Nhap chieu dai : ");
	scanf("%f",&num1);
	printf("\n Nhap chieu rong : ");
	scanf("%f",&num2);
	
	float result1 = chu_vi(num1, num2);
	printf("%.2f",result1);
	float result2 = dien_tich(num1, num2);
	printf("%.2sf",result2);
}
float chu_vi(float d, float r){
	printf("\n Chu vi hinh chu nhat la : ");
	return (d + r) * 2;
}
float dien_tich(float d, float r){
	printf("\n Dien tich hinh chu nhat la : ");
	return (d * r);
}
