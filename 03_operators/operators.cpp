/**
  types.cpp
*/
//this is also a comment

#include <iostream>

int main()
{
	//math operators with int's
	int a, b, c;
	a = 11; 
	b = -1026;  
	c = a + b;
	std::cout << "c = a + b: " << c << std::endl; 	

	//math operators with doubles
	double x,y,z; 
	x = 9.999; 
	y = -1.03; 
	y = y + 2.1; 
	z = x / y; 
	c = (int)(x / y); 
	std::cout << "z = x / y: " << z << std::endl; 	
	std::cout << "c: " << c << std::endl; 	
	z = x * y; 
	std::cout << "z = x * y: " << z << std::endl; 	

	//bitwise operators with bytes
	unsigned char j, k, l;
	j = 0x0f; 
	k = 0xf0; 
	l = j&k; 
	std::cout << "l = j&k: " << std::hex << (unsigned short int)l << std::endl; 
	l = j|k; 
	std::cout << "l = j|k: " << std::hex << (unsigned short int)l << std::endl; 
	l = ~j; 
	std::cout << "l = ~j: " << std::hex << (unsigned short int)l << std::endl; 

		 

	return 0;
}

