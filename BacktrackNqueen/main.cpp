#include <iostream>
#include <cstdio>
#include <cmath>
/**
ʹ�û��ݷ����n�ʺ�����
*/
using namespace std;
void generateP(int index, int n);
int cnt = 0;
bool hashTable[100]={false};
int p[100] = {0};
int main()
{
    int n;
    scanf("%d", &n);
    generateP(1, n);
    printf("%d\n", cnt);
    return 0;
}

void generateP(int index, int n){
    if(index == n+1){
        cnt++;
        return ;
    }
    for(int x=1; x<=n; x++){
        if(hashTable[x] == false){
            bool flag = true;
            for(int pre=1; pre<index; pre++){
                //����֮ǰ�Ļʺ�
                if(abs(index-pre) == abs(x-p[pre])){
                    flag = false;
                    break;
                }
            }
            if(flag){
                p[index] = x;
                hashTable[x] = true;
                generateP(index+1, n);
                hashTable[x] = false;
            }
        }
    }
}
