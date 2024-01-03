#include <iostream>
using namespace std;

//��ͨ�����ͺ���ģ����ù���
// 1.�������ģ�����ͨ���������Ե���,���ȵ�����ͨ����
// 2.����ͨ����ģ������б� ǿ�Ƶ��� ����ģ��
// 3.����ģ����Է�����������
// 4.�������ģ����Բ������õ�ƥ��,�е���ú���ģ��

void myPrint(int a, int b)
{
    cout << "���õ���ͨ����" << endl;
}

template <typename T>
void myPrint(T a, decltype(a) b)
{
    cout << "���õ�ģ��" << endl;
}

template <typename T>
void myPrint(T a, decltype(a) b, decltype(a) c)
{
    cout << "���õ�����ģ��" << endl;
}

void test01()
{
    int a = 10, b = 20;
    // myPrint(a, b);

    //ͨ����ģ������б�,ǿ�Ƶ��ú���ģ��
    myPrint<>(a, b);
    myPrint(a, b, 100);

    //�������ģ��������õ�ƥ��,���ȵ��ú���ģ��
    char c1 = 'a';
    char c2 = 'b';
    myPrint(c1, c2);
}

int main()
{
    test01();

    return 0;
}
