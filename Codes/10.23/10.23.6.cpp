#include <iostream>
using namespace std;

//ռλ����
//����ֵ���� ������(��������) {}

//Ŀǰ�׶ε�ռλ�������ò���,����γ̻��õ�
//ռλ������������Ĭ�ϲ���
void func(int a, int = 10)
{
    cout << "this is func " << endl;
}

int main()
{
    func(10);

    return 0;
}