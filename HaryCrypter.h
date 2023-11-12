#pragma once

#include<iostream>

using std::string;
using std::cout;
using std::endl;

class WHaryCrypter
{
public:
	virtual int Encrypt(string text);
	void Decrypt(std::string text);
};