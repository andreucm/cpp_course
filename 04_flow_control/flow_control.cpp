
#include <iostream>

int main()
{
	bool flag = false; 
	if ( flag )
	{
		std::cout << "flag is true" << std::endl; 
	}
	else
	{
		std::cout << "flag is false" << std::endl; 
	}

	int a = 4; 
	if ( a >= 2 ) 
	{
		std::cout << "a is greater than 2" << std::endl; 
	}
	else
	{
		std::cout << "a is smaller than 2" << std::endl; 
	}
	
	int b = 4; 
	switch(b)
	{
		case 0: 
			std::cout << "b is zero" << std::endl; 
			b=1; 
		case 1: 
			std::cout << "b is one" << std::endl; 
			break; 
		case 2: 
			std::cout << "b is two" << std::endl; 
			break; 
		case 3: 
			std::cout << "b is three" << std::endl; 
			break; 
		case 4:
		case 5: 
			std::cout << "b is four or five" << std::endl; 
			break; 

		default: 
			std::cout << "b is " << b << std::endl; 
			break; 
	}

	for (unsigned int i = 0; i < 10; i++)
	{
		std::cout << i << " "; 	
	}
	std::cout << std::endl; 
	for (int i = 9; i >= 0; i--)
	{
		std::cout << i << " "; 	
	}
	std::cout << std::endl; 
	for (unsigned int i = 0; i < 10; i=i+2)
	{
		std::cout << i << " "; 	
	}
	std::cout << std::endl; 
	
	int i=0; 
	while ( i<10 ) 
	{
		std::cout << i << " "; 	
		i++; 
	}
	std::cout << std::endl; 

	i=9; 
	do
	{
		std::cout << i << " "; 	
		i--; 
	}while ( i>=0 ); 
	std::cout << std::endl; 
	i=9; 
	do
	{
		std::cout << i << " "; 	
		i--; 
		if (i<5) break; 
	}while ( i>=0 ); 
	std::cout << std::endl; 


	return 0;
}

