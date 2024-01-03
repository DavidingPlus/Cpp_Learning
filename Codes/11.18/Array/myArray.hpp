//�Լ���ͨ�õ�������
#pragma once
#include <iostream>
using namespace std;

template <typename T>
class MyArray
{
public:
    MyArray() {}
    //�вι��� ���� ����
    MyArray(int capacity) : m_Capacity(capacity), m_Size(0), pAddress(new T(this->m_Capacity)) {}

    //β�巨
    void Push_Back(const T &val)
    {
        //�ж������Ƿ���ڴ�С
        if (this->m_Size == this->m_Capacity)
            return;
        this->pAddress[this->m_Size] = val;
        ++this->m_Size; //���������С
    }

    //βɾ��
    void Pop_Back()
    {
        //�ж������Ƿ�Ϊ��
        if (this->m_Size == 0)
            return;
        //���û����ʲ������һ��Ԫ��,��Ϊβɾ,�߼�ɾ��
        --this->m_Size;
    }

    //ͨ���±귽ʽ���������е�Ԫ��
    T &operator[](int index)
    {
        return this->pAddress[index];
    }

    //�������������
    int getCapacity() { return this->m_Capacity; }

    //��������Ĵ�С
    int getSize() { return this->m_Size; }

    //��������
    ~MyArray()
    {
        if (pAddress)
        {
            // cout << "MyArray������������" << endl;
            delete[] this->pAddress;
            this->pAddress = nullptr;
        }
    }

    //��������
    MyArray(const MyArray &arr)
    {
        // cout << "MyArray�����������" << endl;

        this->m_Capacity = arr.m_Capacity;
        this->m_Size = arr.m_Size;

        //���
        this->pAddress = new T[arr.m_Capacity];
        //��arr�е����ݿ�������
        for (int i = 0; i < arr.m_Size; ++i)
        {
            this->pAddress[i] = arr.pAddress[i];
        }
    }

    //����=����� ��ֹǳ����
    MyArray &operator=(const MyArray &arr)
    {
        // cout << "MyArray operator= ����" << endl;

        //���ж�ԭ�������Ƿ������� �������ʾ��
        if (this->pAddress)
        {
            delete[] this->pAddress;
            this->pAddress = nullptr;
            this->m_Capacity = 0;
            this->m_Size = 0;
        }

        //���
        this->m_Capacity = arr.m_Capacity;
        this->m_Size = arr.m_Size;
        this->pAddress = new T[arr.m_Capacity];
        //��arr�е����ݿ�������
        for (int i = 0; i < arr.m_Size; ++i)
        {
            this->pAddress[i] = arr.pAddress[i];
        }
        return *this;
    }

private:
    T *pAddress;    //ָ��ָ��������ٵ���ʵ����
    int m_Capacity; //��������
    int m_Size;     //�����С
};
