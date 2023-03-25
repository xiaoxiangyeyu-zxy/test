#pragma once
#include<iostream>
#include "aaa.h"
#define nameof(arg) #arg
using namespace std;

class tabledata 
{
public:
	int** p;
public:
	void def();
	~tabledata();
};