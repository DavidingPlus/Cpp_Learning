#include <iostream>
using namespace std;

//��ͨ�����뺯��ģ�������

// 1.��ͨ�������ÿ��Է�����ʽ����ת��
// 2.����ģ�� ���Զ������Ƶ� �����Է�����ʽ����ת��
// 3.����ģ�� ����ʾ�����Ƶ� ���Է�����ʽ����ת��
//��ͨ����
int myAdd01(int a, int b)
{
    return a + b;
}

//����ģ��
template <class T>
T myAdd02(T a, decltype(a) b)
{
    return a + b;
}

//ʹ�ú���ģ��ʱ��������Զ������Ƶ������ᷢ���Զ�����ת��,����ʽ����ת��
void test01()
{
    int a = 10;
    int b = 20;
    char c = 'c';

    cout << myAdd01(a, c) << endl; //��ȷ����char���͵�'c'��ʽת��Ϊint����  'c' ��Ӧ ASCII�� 99

    // cout << myAdd02(a, c) << endl; // ����ʹ���Զ������Ƶ�ʱ�����ᷢ����ʽ����ת��

    cout << myAdd02<int>(a, c) << endl; //��ȷ���������ʾָ�����ͣ����Է�����ʽ����ת��
}

int main()
{
    test01();

    return 0;
}
