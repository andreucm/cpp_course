
#include <iostream>
#include <cmath>

int main()
{
	//module
	int a1 = 125;
	int mm = 5;
	int a2 = a1%mm;
	std::cout << a1 << " module " << mm << " = " << a2 << std::endl;

	//int, ceil, floor and round
	std::cout << "3/2 = " << 3/2 << std::endl;
	std::cout << "3./2. = " << 3./2. << std::endl;
	std::cout << "ceil(3/2) = " << ceil(3/2) << std::endl;
	std::cout << "ceil(3./2.) = " << ceil(3./2.) << std::endl;
	std::cout << "floor(3/2) = " << floor(3/2) << std::endl;
	std::cout << "floor(3./2.) = " << floor(3./2.) << std::endl;

	//cos,sin, atan, atan2
	std::cout << "cos(0): " << cos(0.0) << std::endl;
	std::cout << "cos(M_PI/3.): " << cos(M_PI/3.) << std::endl;
	std::cout << "sin(M_PI/4.): " << sin(M_PI/4.) << std::endl;
	std::cout << "tan(M_PI/4.): " << tan(M_PI/4.) << std::endl;
	std::cout << "tan(M_PI/2.): " << tan(M_PI/2.) << std::endl;
	std::cout << "atan(1): " << atan(1) << std::endl;
	std::cout << "atan(1): " << atan(1)*180./M_PI << std::endl;
	std::cout << "atan2(-1,1): " << atan2(-1,1) << std::endl;

	//log, sqrt
	std::cout << "log(M_E) = " << log(M_E) << std::endl;
	std::cout << "log10(10) = " << log10(10) << std::endl;
	std::cout << "sqrt(2) = " << M_SQRT2 << " = " << sqrt(2.) << std::endl;
	std::cout << "fabs(-1.345) = " << fabs(-1.345) << std::endl;

	return 0;
}
