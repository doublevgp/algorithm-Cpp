#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;
void permute(char* a, int left, int right);
void swap(char *x, char *y);
bool isAppeared(char* str, char t, int begin, int end);
int cnt = 0;
int main()
{
    char str[1000];
    gets(str);
    int len = strlen(str);

    permute(str, 0, len-1);
    printf("%d\n", cnt);
    return 0;
}

void permute(char* a, int left, int right){
    if(left == right){
       printf("%s\n", a);
       cnt++;
    }else{
        for(int i=left; i<=right; i++){
            //�ж��Ƿ����ظ���
            /**
                ���ַ�������ȫ����,ע��ú����������ַ��ظ������,�ַ��ظ�����������֣�
                1. str[i]����ͺ����str[k]��ͬ
                2. str[k]��k+1��i-1���±�֮���Ѿ����ֹ�(��IsAppeared()����ȥ�ж�)
            */
            if(i!=left && (a[i]==a[left] || isAppeared(a, a[i], left+1, i-1))){
                continue;
            }
            swap((a+left), (a+i));
            permute(a, left+1, right);
            swap((a+left), (a+i));
        }
    }
}

void swap(char *x, char *y){
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

bool isAppeared(char* str, char t, int begin, int end){
    for(int i=begin; i<=end; i++){
        if(t==str[i]){
            return true;
        }
    }
    return false;
}
