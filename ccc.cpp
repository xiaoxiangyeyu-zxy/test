#include "ccc.h"



void tabledata::def()
{
	p = new   int* [a];
	for (int i = 0; i < a; i++)
		p[i] = new int[a];
	for (int i = 0;i < a;i++)
	{
		for (int j = 0;j < a;j++)
		{
			p[i][j] = i + j;
			cout << p[i][j] << endl;
		}
	}
}

tabledata::~tabledata()
{
	for (int i = 0; i < a; i++)
		if (p[i] != NULL)
		{
			delete[] p[i];
			p[i] =  NULL;
		}
	cout << "Îö¹¹" << endl;
}