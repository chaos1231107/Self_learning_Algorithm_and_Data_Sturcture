#include <stdio.h>
#define LEN 7

void quick_sort(int arr[], int L, int R)
{
    int left = L;
    int right = R;
    int pivot = arr[(L+R)/2];
    int temp;
    
    do
    {
        while(arr[left] < pivot)
            left++;
        while(arr[right] > pivot)
            right--;
        if(left <= right)
        {
            temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }while (left <= right);
    
    if (L < right)
        quick_sort(arr,L,right);
    
    if (left < R)
        quick_sort(arr,left,R);
}

int main()
{
    int i;
    int arr[LEN] = {5,1,6,3,4,2,7};
    printf("정렬전 :");
    for(i=0;i<LEN;i++){
        printf("%d ",arr[i]);
    }   
    printf("\n");

    quick_sort(arr,0,LEN-1);

    printf("정렬후 : ");
    for(i=0;i<LEN;i++){
        printf("%d ",arr[i]);
    }

return 0;

}
    