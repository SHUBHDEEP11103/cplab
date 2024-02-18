#include<stdio.h>
struct cmp{

    int a;
    int b;




}c1,c2;
int main()
{
    printf("Enter the real and imaginary part of first:");
    scanf("%d %d",&c1.a,&c1.b);
    printf("Enter the real and imaginary part of second:");
    scanf("%d %d",&c2.a,&c2.b);

    printf("The output complex no is : %d + %d i",c1.a+c2.a,c1.b+c2.b);



return 0;
}
