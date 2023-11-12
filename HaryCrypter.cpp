#include <iostream>
#include <sstream>
#include "HaryCrypter.h"

using std::stringstream;
using std::string;
using std::cout;
using std::endl;

class Crypter : WHaryCrypter
{
public: 
	int Encrypt(string text) override
	{
		int sum_µ = 0;
		double sum_v = 0;
		int sum_cmplx = 0;

		for (int i = 0; i < text.size(); i++)
		{
			int code_char = text[i];
			sum_µ += code_char % 10;

			if (code_char % 100 == code_char)
				sum_v += code_char / 10;
			
			else
				sum_v += code_char / 100;
			
		}		

		sum_v *= sqrt(2);
		sum_v = (int)sum_v;

		sum_cmplx = ((double)sum_v / (double)sum_µ) * 100;
		string str_cmplx = std::to_string(sum_cmplx);
		
		int __wsum = 1;
		for (int i = 0; i < str_cmplx.size(); i++) {
			__wsum *= str_cmplx[i];

		}
		__wsum /= 30;

		return __wsum;
	}
};

Crypter solveri;

int main()
{
	int xcode = solveri.Encrypt("");

	cout << xcode << endl;
}