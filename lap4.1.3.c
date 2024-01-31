#include<stdio.h>
int main (){
	double x=3.2, y=5.1;// khai bao bien 
	double *p1=&x;// tro den bien x
	double *p2=&y;// tro den bien y 
	*p1 += 3 - 2*(*p2);//thay doi gia tri bang tro p1
	*p2 -= 3 *(*p1);//thay doi gia tri bang tro p2
	printf("%lf", x+y);// tra ve la gia tri 
	getchar();
	return 0;
	}
