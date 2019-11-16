/**
    n�ʺ����⣺
    �����n�лʺ����ڵ��к�����д����,��ô����1~n��һ������
*/

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

void perm(int num[], int p, int q, int n);
void swap(int num[], int x, int y);
bool isNQueen(int num[], int n);
void printQueen(int num[], int n);

int main()
{
    int num[100];
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        num[i] = i;
    }
    perm(num, 0, n-1, n);
    return 0;
}

void perm(int num[], int p, int q, int n){
    if(p == q){
         //�ж��Ƿ�����ʺ�����
        if(isNQueen(num, n)){
            printQueen(num, n);
        }
    }else{
        for(int i=p; i<=q; i++){
            swap(num, p, i);
            perm(num, p+1, q, n);
            swap(num, p, i);
        }
    }
}

void swap(int num[], int x, int y){
    int temp = num[x];
    num[x] = num[y];
    num[y] = temp;
}

bool isNQueen(int num[], int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(abs(j-i) == abs(num[j]-num[i])){
                //����n�ʺ�
                return false;
            }
        }
    }
    return true;
}

void printQueen(int num[], int n){
    printf("=========================================\n");
    int Queen[100][100] = {0};
    for(int i=0; i<n; i++){
        Queen[i][num[i]] = 1;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ", Queen[i][j]);
        }
        printf("\n");
    }
}
