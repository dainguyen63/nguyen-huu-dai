#include <stdio.h>
#include <math.h>

int chuvi(int a,int b,int c){
	int Cv;
	Cv=a+b+c;
	return Cv;
}
double dientich(int a,int b,int c){
	double dt,p;
	p=(float)(a+b+c)/2;
	dt=sqrt(p*(p-a)*(p-b)*(p-c));
	
	return dt;
}

int main(){
	int x,y,z;
	
    printf("Nhap x=");
    scanf("%d",&x);
    
    printf("Nhap y=");
    scanf("%d",&y);
    
    printf("Nhap z=");
    scanf("%d",&z);
    
    int CV=chuvi(x,y,z);
    double DT=dientich(x,y,z);
    printf("chu vi tam giac la: %d\n",CV);
    printf("dien tich tam giac la: %lf",DT);
    
    
    
}
