#include<stdio.h>
int prray(int [], int);
int main()
{   int n;
    printf("Enter size");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        printf("\n");

    }
    int k =prray(arr,n);
    printf("%d",k);

}
int prray(int arr[],int y)
{
   for(int i=0;i<y;i++){
        if(arr[i]==i){
           {
            printf("%d",i);
            printf("\n");
            return 1;
            break;
           }
        }
    }
     for(int i=0;i<y;i++){
        if(arr[i]!=i){
           {

            return 0;
            break;
           }
        }
    }


}

