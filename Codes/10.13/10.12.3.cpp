#include <iostream>
using namespace std;

// 1.new�Ļ����﷨
int *func()
{
    //�ڶ���������������
    // new������ ���������͵�ָ��
    int *p = new int(10);
    return p;
}

void test01()
{
    int *p = func();
    cout << *p << endl;
    cout << *p << endl;
    cout << *p << endl;
    //�����������ɳ���Ա���٣�����Ա�����ͷ�
    //������ͷŶ���������,���ùؼ���delete
    delete p;
    cout << *p << endl;
}

// 2.�ڶ�������new����������
void test02()
{
    //����10�������ݵ�����,�ڶ���
    int *arr = new int[10]{0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; // 10����������10��Ԫ��
    //�������ô����Ž���������ʼ��
    for (int i = 0; i < 10; i++)
        cout << arr[i] << endl;
    //�ͷ������ʱ��,Ҫ��[]�ſ���!!!
    delete[] arr;
}

int main()
{
    test01();
    test02();

    return 0;
}