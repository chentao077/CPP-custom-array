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

	//重载[] 操作符  arr[0]
	T& operator[](int index)
	{
		return this->pAddress[index];
	}

	//尾插法
	void Push_back(const T& tmp)
	{
		if (this->m_size == this->m_Capacity)
		{
			return;
		}
		this->pAddress[this->m_size] = tmp;
		this->m_size++;
	}

	//尾删法
	void Pop_back()
	{
		if (this->m_size == 0)
		{
			return;
		}
		this->m_size--;
	}

	//获取容量
	int getCapacity()
	{
		return this->m_Capacity;
	}

	//获取数组大小
	int getSize()
	{
		return this->m_size;
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
