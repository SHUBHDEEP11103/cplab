#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    double b;
    for (int i=1000;i<9999;i++)
    {

        a = sqrt(i);
        b = sqrt(i);

        if(a==b){
           printf("perfect %d",i);
           printf("\n");
        }


    }




    return 0;

}
