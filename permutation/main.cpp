#include <iostream>
#include <cstdio>

/**
��1~n��ȫ����
�����㷨
*/
using namespace std;

void generateP(int index);
const int maxn = 11;
int n, p[maxn], hashTable[maxn]={false};    //p�ǵ�ǰ�����У� hashTable��¼����x�Ƿ��Ѿ���P��

int main()
{
    scanf("%d", &n); //���1~n��ȫ����
    generateP(1);   //��p[1]��ʼ��
    return 0;
}

void generateP(int index){
    if(index == n+1){
    //�ݹ�߽磬�Ѿ����������е�nλ
        for(int i=1; i<=n; i++){
            printf("%d", p[i]); //�����ǰ����
        }
        printf("\n");
        return ;
    }

    for(int x=1; x<=n; x++){
        //ö��1~n����ͼ��x����p[index]
        if(hashTable[x] == false){
            p[index] = x;
            hashTable[x] = true;    //��x�Ѿ���P��
            generateP(index+1);     //�������еĵ�index+1λ
            hashTable[x] = false;   //�Ѿ�������p[index]Ϊx������-��ԭ״̬
        }
    }
}
