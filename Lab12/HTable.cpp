#include <iostream>
#include "HTable.h"
using namespace std;

HTable::HTable()
{
	max_size=23;
	dt=new data[max_size];
	for(int i = 0; i < max_size;i++)
	{
		dt[i].key=-1;
		dt[i].value="N/A";
	}
	numel=0;
}
HTable::HTable(int size)
{
	max_size=size;
	dt=new data[max_size];
	for(int i = 0; i < max_size; i++)
	{
		dt[i].key=-1;
		dt[i].value="N/A";
	}
	numel=0;
}
int HTable::hash(int &k)
{
	int index = k%max_size;
	return index;
}
int HTable::rehash(int &k)
{
	int index = (k+1)%max_size;
	return index;
}
int HTable::add(data &d)
{
	if(numel== max_size)
		return -1;
	else
	{
		int index = hash(d.key);
		int count = 0;
		while(dt[index].key!=-1)
		{
			index=rehash(index);
			count++;
			if(count > max_size)
				return -1;
		}
		if(dt[index].key==-1)
		{
			dt[index] = d;
			numel++;
			return 0;
		}
	}
}
int HTable::remove(data &d)
{
	if(numel == 0)
	{
		return -1;
	}
	else
	{
		int index = hash(d.key);
		int count = 0;
		while(dt[index].key!=d.key)
		{
			index = rehash(index);
			count++;
			if(count > max_size)
			{
				return -1;
			}
		}
		if(dt[index].key==d.key)
		{
			dt[index].key=-1;
			dt[index].value="N/A";
			numel--;
			return 0;
		}
	}
}
void HTable::output()
{
	for(int i = 0; i <= numel; i++)
	{
		cout << i << " -> "<<dt[i].key<<" "<<dt[i].value<<endl;
	}
	cout << "There are "<<numel << " data in the table."<<endl;
}

