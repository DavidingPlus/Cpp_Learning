#include <iostream>
#include <string.h>
using namespace std;

//�����������������

//��ӡ�����
class MyPrint
{
public:
    //���غ������������()
    void operator()(string text)
    {
        cout << text << endl;
    }
};

void MyPrint02(string text)
{
    cout << text << endl;
}

void test01()
{
    MyPrint myPrint;

    myPrint("helloworld! "); //����ʹ�������ǳ������ں�������,��˳�Ϊ�º���!!!
    MyPrint02("helloworld! ");
}

//�º����ǳ����.û��һ���̶�д��
//�ӷ���
class MyAdd
{
public:
    int operator()(int num1, int num2)
    {
        return num1 + num2;
    }
};

void test02()
{
    MyAdd myadd;
    int ret = myadd(100, 100);
    cout << ret << endl;

    //������������
    cout << MyAdd()(100, 100) << endl;
}

int main()
{
    test01();
    test02();

    return 0;
}
