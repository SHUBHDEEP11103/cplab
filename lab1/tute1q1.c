#include<stdio.h>

int fact(int);

int main()
{
    int n;
    printf("Value you want factorial of ");
    scanf("%d",&n);
    int f = fact(n);
    printf("The factorial is : %d ",f);

}
int fact(int a){
    if (a==0){
    return 1;
    }
    else
    return (a*fact(a-1));
}


