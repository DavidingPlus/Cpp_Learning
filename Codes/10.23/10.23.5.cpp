#include <iostream>
using namespace std;

//������Ĭ�ϲ���

//��������Լ���������,�����Լ�������,���û��,����Ĭ��ֵ
//�﷨: ����ֵ���� ������(�β� = Ĭ��ֵ) {}
int func(int a, int b = 20, int c = 30)
{
    return a + b + c;
}

//ע������
// 1.���ĳ��λ���Ѿ�����Ĭ�ϲ���,��ô�����λ������,�����Ҷ�������Ĭ��ֵ
// int func2(int a = 10, int b, int c, int d = 10)
// {
//     return a + b + c + d;
// }

// 2.�����������������Ĭ�ϲ���,������ʵ�־Ͳ�����Ĭ�ϲ���
//������ʵ��ֻ����һ����Ĭ�ϲ���(��ָֻ����һ��������Ĭ�ϲ���,��������ĵ�һ��a�͵ڶ���b�ǲ����Ե�!!!)
// int func2(int a=10, int b);
// int func2(int a, int b = 10);   error!!!

int func2(int a, int b);

int func2(int a = 10, int b = 10)
{
    return a + b;
}

int main()
{
    // cout << func(10, 30) <<s endl;
    cout << func2() << endl;

    return 0;
}
