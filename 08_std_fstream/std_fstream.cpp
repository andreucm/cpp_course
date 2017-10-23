
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

int main()
{
	std::string line;
	std::ifstream in_file ("../data_file.txt"); //creates and opens file stream
	std::ofstream out_file;  //creates file stream
	std::vector<std::string> str_vector;

	//gets file data
	if (in_file.is_open())
	{
		  while ( in_file.good() )
		  {
				std::getline (in_file,line);
				std::cout << line << std::endl;
				str_vector.push_back(line);
		  }
		  in_file.close();
	}
	else
	{
		std::cout << "Unable to open input file. Please check file name. " << std::endl;
	}

	//opens output file to write
	out_file.open("/home/andreu/Desktop/outfile.txt", std::ofstream::out);
	for (unsigned int ii=0; ii<str_vector.size(); ii++)
	{
		  out_file << str_vector.at(ii) << std::endl;
	}
	out_file.close();

	return 0;

}
