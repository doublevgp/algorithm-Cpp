#include <iostream>
#include <algorithm>
#include <cstring>
/**
    ֱ��ʹ��C++ stdģ����е�std::next_permutation();(�ֵ���ȫ����)
        ��������Ȼ�����std::next_permutation(start, end)
        ����:std::prev_permutation()(����ȫ����)
*/
using namespace std;

int main()
{
    string s = "132";
    sort(s.begin(), s.end());
    do{
        cout << s <<endl;
    }while(next_permutation(s.begin(), s.end()));

    return 0;
}
