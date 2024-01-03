#include <iostream>
using namespace std;
#include <vector>
#include <algorithm> //��׼�㷨ͷ�ļ�

// vector�������������������
// ������vector
// �㷨�� for_each
// ��������vector<int>::iterator

void myPrint(int val)
{
    cout << val << endl;
}

void test01()
{
    //������һ��vector����,����
    vector<int> v;

    //�������в�������
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    //��һ�ֱ�����ʽ
    //ͨ�����������������е�����
    // vector<int>::iterator itBegin = v.begin(); //��ʼ������ ָ�������е�һ��Ԫ��
    // vector<int>::iterator itEnd = v.end();     //���������� ָ�����������һ��Ԫ�ص���һ��λ��
    // while (itBegin != itEnd)
    // {
    //     cout << *itBegin << endl;
    //     ++itBegin;
    // }

    //�ڶ��ֱ�����ʽ
    // for (vector<int>::iterator iter = v.begin(); iter < v.end(); ++iter)
    //     cout << *iter << endl;

    //�����ֱ�����ʽ ����STL�ṩ�ı����㷨
    for_each(v.begin(), v.end(), myPrint);
}

int main()
{
    test01();

    return 0;
}
