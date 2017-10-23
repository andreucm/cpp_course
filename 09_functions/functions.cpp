
#include <iostream>
#include <math.h>
#include <string>

double f1(const double & _a, const double & _b)
{
	return (_a*3 + sqrt(_b));
}

bool f2(const std::string & _str)
{
	if (_str.at(0) == 'a') return true;
	else return false;
}

bool f3(const std::string & _in_str, std::string & _out_str)
{
	_out_str = _in_str;
	if (_in_str.at(0) == 'a')
	{
		_out_str.at(0) = 'b';
		return true;
	}
	else
	{
		_out_str.at(0) = 'a';
		return false;
	}
}

int main()
{
	double d1, d2, d3;
	d1 = 245.5;
	d2 = 16.0;
	d3 = f1(d1,d2);
	std::cout << "f1: " << d3 << std::endl;

	std::string str1("hola");
	std::string str2("adéu");
	std::string str3("");
	std::cout << "str1: " << str1 << "; f2(str1): " << f2(str1) << std::endl;
	std::cout << "str2: " << str2 << "; f2(str2): " << f2(str2) << std::endl;
	std::cout << "str1: " << str1 << "; f3(str1,str3): " << f3(str1,str3) << std::endl;
	std::cout << "str3: " << str3 << std::endl;
	return 0;

}
