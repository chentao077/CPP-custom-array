#pragma once
#include<iostream>
#include<string>
using namespace std;

template<class T>
class Myarry
{
public:
	//���캯��
	Myarry(int capacity)
	{
		this->m_Capacity = capacity;
		this->m_size = 0;
		pAddress = new T[this->m_Capacity];
	}

	//��������
	Myarry(const Myarry& arr)
	{
		this->m_Capacity = arr.m_Capacity;
		this->m_size = arr.m_size;
		this->pAddress = new T[this->m_Capacity];
		for (int i = 0; i < this->m_size; i++)
		{
			//���
			this->pAddress[i] = arr.pAddress[i];
		}
	}

	//����= ������ ��ֹǳ��������
	Myarry& operator=(const Myarry& arr)
	{
		if (this->pAddress != NULL)
		{
			delete[]this->pAddress;
			this->m_size = 0;
			this->m_Capacity = 0;
			this->pAddress = NULL;
		}
		this->m_Capacity = arr.m_Capacity;
		this->m_size = arr.m_size;
		this->pAddress = new T[this->m_Capacity];
		for (int i = 0; i < this->m_size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
		return *this;
	}

	//��������
	~Myarry()
	{
		if (this->pAddress != NULL)
		{
			delete[]this->pAddress;
			this->m_size = 0;
			this->m_Capacity = 0;
			this->pAddress = NULL;
		}
	}
private:
	T* pAddress;//ָ��һ���ѿռ䣬�����������
	int m_Capacity;//����
	int m_size;//��С
};
