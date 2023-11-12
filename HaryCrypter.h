#pragma once

#include<iostream>

class WHaryCrypter
{
public:
	virtual int Encrypt(std::string text);
	void Decrypt(std::string text);
};