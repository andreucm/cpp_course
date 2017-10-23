
#include <iostream>
#include <list>

int main()
{
	std::list<char> list1;

	list1.push_back('s');
	list1.push_back('i');
	list1.push_back('g');
	list1.push_back('u');
	list1.push_back('i');
	list1.push_back('s');
	list1.push_back('f');
	list1.push_back('r');
	list1.push_back('e');
	list1.push_back('d');
	list1.push_back('o');

	for (std::list<char>::iterator it=list1.begin(); it != list1.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	std::cout << "size of list is: " << list1.size() << std::endl;
	std::cout << "First element is: " << list1.front() << std::endl;
	std::cout << "Last element is: " << list1.back() << std::endl;

	list1.sort(); 
	for (std::list<char>::iterator it=list1.begin(); it != list1.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;

/*
	for (std::list<char>::iterator it=list1.begin(); it != list1.end(); it++)
	{
		if( *it == 's' )
		{
			list1.erase(it);
		}
	}
*/

	return 0;


}
