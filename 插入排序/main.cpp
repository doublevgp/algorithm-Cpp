#include <stdio.h>

void insertSort(int num[], int n);

int main()
{
    int n;
    scanf("%d", &n);
    int num[1000];
    for(int i=0; i<n; i++){
        scanf("%d", &num[i]);
    }
    insertSort(num, n);

    for(int i=0; i<n; i++){
        printf("%d ", num[i]);
    }
    return 0;
}
/**
��������(����)��
    �Լ�������
*/
void insertSort(int num[], int n){
    for(int j=1; j<n; j++){
        int temp = num[j];
        for(int i=0; i<j; i++){
            if(num[j] < num[i]){
                //���Ʋ���
                for(int k=j; k>i; k--){
                    num[k] = num[k-1];
                }
                num[i] = temp;
                break;
            }
        }
    }

}
