#include <iostream>
#include <cstdio>

using namespace std;

int main()
{/**
    ����N����������M���������� ��M��ÿһ������N�г����˼���
    */
    int N, M;
    int numN[10000] = {0};
    scanf("%d", &N);
    int temp = 0;
    for(int i=0; i<N; i++){
        scanf("%d", &temp);
        numN[temp]++;
    }
    scanf("%d", &M);
    int numM[10000];
    for(int i=0; i<M; i++){
        scanf("%d", &numM[i]);
    }
    for(int i=0; i<M; i++){
        printf("%d in M apeared %d times in N\n", numM[i], numN[numM[i]]);
    }
    return 0;
}
