#ifndef FILEHANDLER_HPP_
#define FILEHANDLER_HPP_
#include "Caesarcypher.hpp"
#include <string>


class File_handler {
public:
	File_handler();
	std::string input;
	std::string output;
	void read_file(std::string input_filename);
	void write_file(std::string output_filename);
};

#endif /* FILEHANDLER_HPP_ */
