#include <stdio.h>
#define MAX_SIZE 8 
int sorted[MAX_SIZE];

void merge(int *list, int left, int mid, int right){
    int i,j,k,l; 
    i = left;
    j = mid + 1;
    k = left;
    // 분할 정렬된 list의 합병 
    while (i <= mid && j <= right){
        if (list[i] <= list[j]){
            sorted[k++] = list[i++];
        }
        
        else{
            sorted[k++] = list[j++];
        }
    }
    // 남아있는 값들을 복사
    if (i > mid){
        for (l = j; l <= right; l++){
            sorted[k++] = list[l];
        }
    }
    
    else{
        for (l = i; l <= mid; l++){
            sorted[k++] = list[l];
        }
    }
    
    for (l = left; l <= right; l++){
        list[l] = sorted[l];
    }
}

void merge_sort(int *list, int left, int right){
    int mid;
    
    if (left < right){
        mid = (left + right) / 2; //분할
        merge_sort(list, left, mid);//왼쪽정렬 - 정복
        merge_sort(list, mid+1, right); //오른쪽 정렬 -정복
        merge(list, left, mid, right); // 병합
    }
}

int main(){
    int i;
    //int n = MAX_SIZE;
    int list[MAX_SIZE] = {21, 10, 12, 20, 25, 13, 15, 22};
    //merge sort 
    merge_sort(list, 0, MAX_SIZE-1);
    
    for (i = 0; i < MAX_SIZE; i++){
        printf("%d ", list[i]);
    }
    return 0;
}