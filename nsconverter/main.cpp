#include <iostream>
#include "src/nsconverter.cpp"

int main()
{
	auto bits = nsconverter::decimal_to_bin<int>(999);
	auto result = nsconverter::bin_to_decimal<int>(bits);

	std::cout << result;
}