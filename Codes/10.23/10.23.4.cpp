#include <iostream>
using namespace std;

//��ӡ����
void showValue(const int &val)
// constΪ�˷�ֹ�����,��ֹ���ò���ʱ�޸����βζ�����ʵ�θ��ű��ı�
{
    // val = 1000;
    cout << "val= " << val << endl;
}

int main()
{
    //��������
    //ʹ�ó���:���������β�,��ֹ�����

    // int a = 10;

    //����const֮��,�������������޸�Ϊ int temp=10;int &ref=temp;
    const int &ref = 10; //���ñ�������һ��Ϸ����ڴ�ռ�
    // ref = 20;            //����const֮���Ϊֻ��,�����޸�
    cout << "ref= " << ref << endl;

    int a = 100;
    showValue(a);

    cout << "a= " << a << endl;

    return 0;
}