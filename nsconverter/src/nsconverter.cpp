#include <iostream>

class nsconverter final
{
private:
	nsconverter();

public:

	template<class T>
	static char* decimal_to_bin(T value)
	{
		char* bits = new char[sizeof(T) * 8];

		for (int i = (sizeof(T) * 8); i > 0; i--)
			bits[i - 1] = ((value >> (i - 1)) & 1);

		return bits;
	}

	template<class T>
	static T bin_to_decimal(char* bits) 
	{
		T result = 0;

		for (int i = 0; i < (sizeof(T) * 8); i++)
			result += *(bits + i) * pow(2, i);

		delete[] bits;

		return result;
	}
};