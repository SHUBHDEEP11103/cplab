#include<stdio.h>
#include<memory.h>
void rev(int arr[],int size);
int main()
{
    int n;
    printf("Enter the no of element:");
    scanf("%d",&n);
    double *p = (double*) malloc(n*sizeof(double));
    for(int i=0;i<n;i++){
    scanf("%lf",&p[i]);
    }
    rev(p,n);

return 0;
}
void rev(int arr[],int n){

for(int i=0,k=n;i<n/2;i++,k--){
        int x=0;
        x=arr[i];
        arr[i]=arr[k-1];
        arr[k-1]=x;
}



}
