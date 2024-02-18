#include<stdio.h>
void minmax(int arr[],int n,int *min,int *max){

    *min=arr[n-1];
    *max=arr[n-1];
    for(int i=0;i<n;i++){
        if(arr[i]>*max){
            *max=arr[i];
        }
        if(arr[i]<*min){
            *min=arr[i];
        }
}}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    int min,max;

    minmax(arr,n, & min, & max);

printf("The minimum and maximum value are %d %d",min,max);




return 0;
}
