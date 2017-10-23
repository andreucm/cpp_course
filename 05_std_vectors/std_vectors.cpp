
#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v1; 
	std::cout << "Size of v1 is " << v1.size() << std::endl; 
	v1.resize(20); 
	std::cout << "Size of v1 is " << v1.size() << std::endl; 	
	v1.resize(30); 
	std::cout << "Size of v1 is " << v1.size() << std::endl;
	std::cout << "Max size of v1 is " << v1.max_size() << std::endl; 	 	
	v1[21] = -11;
	v1.at(22) = 19;  
	for (int i=0; i<v1.size(); i++)
	{
		std::cout << v1[i] << " "; 	
	}
	std::cout << std::endl; 	

	v1.resize(0);
	v1.reserve(41);  
	std::cout << "Size of v1 is " << v1.size() << std::endl; 	
	std::cout << "Capacity of v1 is " << v1.capacity() << std::endl; 	
	v1.push_back(16); 
	v1.push_back(17); 
	v1.push_back(18); 
	v1.push_back(19); 
	v1.push_back(20); 
	v1.push_back(21); 
	std::cout << "Size of v1 is " << v1.size() << std::endl;
	std::cout << "Capacity of v1 is " << v1.capacity() << std::endl; 	 	
	for (int i=0; i<v1.size(); i++)
	{
		std::cout << v1[i] << " "; 	
	}
	std::cout << std::endl; 	
	v1.pop_back(); 
	for (int i=0; i<v1.size(); i++)
	{
		std::cout << v1[i] << " "; 	
	}
	std::cout << std::endl; 	

	return 0;


}

