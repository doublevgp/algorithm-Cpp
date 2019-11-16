#include <stdio.h>

void quickSort(int A[], int left, int right);
int partion(int A[], int left, int right);

int main()
{
    int n;
    int A[1000];
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &A[i]);
    }

    quickSort(A, 0, n-1);
    for(int i=0; i<n; i++){
        printf("%d ", A[i]);
    }
    printf("\n");
    return 0;
}

/**
��������
    �Լ�������
*/
void quickSort(int A[], int left, int right){
    if(left<right){//��ǰ���䳤��С��1
        int pos = partion(A, left, right);
        quickSort(A, left, pos);
        quickSort(A, pos+1, right);
    }
}

int partion(int A[], int left, int right){
    int temp = A[left];
    while(left < right){
        while(left<right && A[right] > temp) right--;
        A[left] = A[right];
        while(left<right && A[left] <= temp) left++;
        A[right] = A[left];
    }
    A[left] = temp; //��temp ����left ��right�����ĵط�
    return left;
}
