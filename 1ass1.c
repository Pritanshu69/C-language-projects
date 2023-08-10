#include<stdio.h>
#include<conio.h>
int main(){
    float l,b,r,ra,rp,ca,cc;

    printf("Enter the lenght of the rectangle:");
    scanf("%f",&l);

    printf("Enter the breadth of the rectangle:");
    scanf("%f",&b);

    printf("Enter the radius of the circle");
    scanf("%f",&r);

    ra= l*b; //area of the rectangle
    rp= 2*(l+b); //perimeter of the rectangle

    ca= 3.14*r*r;
    cc= 2*3.14*r;

    printf("\nArea of the rectangle is:%0.2f",ra);
    printf("\nPeremeter of the rectangle is:%0.2f",rp);

    printf("\nArea of the circle is:%0.2f",ca);
    printf("Circumference of the circle is:%0.2f",cc);
    return 0;
}