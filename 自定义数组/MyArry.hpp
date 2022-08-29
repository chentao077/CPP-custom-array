#pragma once
#include<iostream>
#include<string>
using namespace std;

template<class T>
class Myarry
{
public:
	//构造函数
	Myarry(int capacity)
	{
		this->m_Capacity = capacity;
		this->m_size = 0;
		pAddress = new T[this->m_Capacity];
	}

	//拷贝构造
	Myarry(const Myarry& arr)
	{
		this->m_Capacity = arr.m_Capacity;
		this->m_size = arr.m_size;
		this->pAddress = new T[this->m_Capacity];
		for (int i = 0; i < this->m_size; i++)
		{
			//深拷贝
			this->pAddress[i] = arr.pAddress[i];
		}
	}

	//重载= 操作符 防止浅拷贝问题
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

	//析构函数
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
	T* pAddress;//指向一个堆空间，用来存放数据
	int m_Capacity;//容量
	int m_size;//大小
};
