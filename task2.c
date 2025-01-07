#include<stdio.h>
int main(){
    float radius,area;
    printf("enter the radius of circle:");
    scanf("%f",&radius);
    area=3.14*radius*radius;
    printf("area of the circle is : %f\n",area);

    float num1,num2,num3;
    printf("Enter number first\n");
    scanf("%f",&num1);
    printf("Enter number second\n");
    scanf("%f",&num2);
    printf("Enter number third\n");
    scanf("%f",&num3);
    printf("Average of three value is: %f \n",(num1+num2+num3)/3);
    

    int width,height,a;
    a=width*height;
    printf("Area of the rectangle=\n");
    scanf("%d",&a);

   
    

    return 0;
}