#include <iostream>
/*
(����˵����) ���ʽ
����˵���� �����ʽ��
����ת��������<����˵����> �����ʽ��
*/
int main(){
    char c  = 'A';
    std::cout << static_cast<int> (c) << std::endl;
    std::cout << "the size of char is: " << sizeof(char) <<" bytes" <<std::endl;
    std::cout << "the size of short is: " << sizeof(short) <<" bytes" <<std::endl;
    std::cout << "the size of int is: " <<sizeof(int) <<" bytes" << std::endl;
    std::cout << "the size of long is: " <<sizeof(long) << " bytes" <<std::endl;
    std::cout << "the size of long long is: " <<sizeof(long long) << " bytes" <<std::endl;
    std::cout << "the size of float is: " <<sizeof(float) << " bytes" <<std::endl;
    std::cout << "the size of double if: " << sizeof(double) << " bytes" <<std::endl;
    return 0;
}
