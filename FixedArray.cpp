#pragma once

#include "FixedArray.h"

FixedArray::FixedArray(const int arraySize) : BrokenArray(arraySize)
{

}
FixedArray::~FixedArray()
{
	delete[] _array;
}

FixedArray::FixedArray(const FixedArray & other) : BrokenArray(other)
{
	int * newArray = new int[other.getSize()]{};

	for (unsigned idx = 0; idx < other.getSize(); idx++)
		newArray[idx] = other._array[idx];


	if (_array != nullptr)
	{
		delete[] _array;
	}
	_array = newArray;
	

}
FixedArray & FixedArray::operator=(const FixedArray & other)
{
	((BrokenArray *)this)->operator=(other);

	int * newArray = new int[other.getSize()]{};

	for (unsigned idx = 0; idx < other.getSize(); idx++)
		newArray[idx] = other._array[idx];


	if (_array != nullptr)
	{
		delete[] _array;
	}
	_array = newArray;

	return *this;
}

void FixedArray::addValueToMemory(const int value)
{
	BrokenArray::addValueToMemory(value);
}

int FixedArray::getMemorySumValue() const
{
	return BrokenArray::getMemorySumValue();
}
