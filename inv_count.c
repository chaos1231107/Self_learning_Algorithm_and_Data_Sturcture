#include <stdio.h>
#include <stdlib.h>

long long inv_count = 0;  // 인버전의 개수를 셀 변수

// 병합 정렬에서 두 배열을 병합하면서 인버전 카운팅
void merge(int arr[], int temp[], int left, int right) {
    if (left == right) return;

    int mid = (left + right) / 2;

    // 왼쪽 절반과 오른쪽 절반을 각각 병합 정렬
    merge(arr, temp, left, mid);
    merge(arr, temp, mid + 1, right);

    // 병합 단계에서 인버전 카운팅
    int i = left, j = mid + 1, k = left;
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            inv_count += (mid - i + 1);  // i 이후의 모든 원소들은 arr[j]보다 크므로 인버전 발생
        }
    }

    // 남은 왼쪽 배열 원소들 처리
    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    // 남은 오른쪽 배열 원소들 처리
    while (j <= right) {
        temp[k++] = arr[j++];
    }

    // 임시 배열을 원래 배열에 복사
    for (i = left; i <= right; i++) {
        arr[i] = temp[i];
    }
}

// 병합 정렬을 호출하는 함수
void merge_sort(int arr[], int n) {
    int *temp = (int *)malloc(n * sizeof(int));
    if (temp == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    merge(arr, temp, 0, n - 1);
    free(temp);
}

int main() {
    int n;
    scanf("%d", &n);
    
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    merge_sort(arr, n);  // 병합 정렬을 수행하면서 인버전 카운트

    printf("%lld\n", inv_count);  // 결과 출력

    free(arr);
    return 0;
}
