/**
  types.cpp
*/
//this is also a comment

#include <iostream>

int main()
{
	int a_int; //32bits
	unsigned int b_uint; //32bits
	char c_ch; //8bits
	unsigned char d_ch; //8bits
	float e_float; //32bits
	double f_double; //64bits
	long int g_lint; //64bits
	long unsigned int h_ulint; //64bits
	long long int i_llint; //128bits
	long long unsigned int j_lluint; //128bits
 
	a_int = -24; 
	std::cout << "a_int: " << a_int << std::endl; 	
	b_uint = 51; 
	std::cout << "b_uint: " << b_uint << std::endl; 	
	f_double = -8.21453; 
	std::cout << "f_double: " << f_double << std::endl; 	

	return 0;
}

