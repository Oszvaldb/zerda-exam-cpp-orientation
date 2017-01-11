#include "Filehandler.hpp"
#include <fstream>
#include <iostream>
#include <string>

File_handler::File_handler() {
	input = "";
	output = "";
}

void File_handler::read_file(std::string input_filename) {
	std::ifstream read("input_filename");
	if (!read.is_open()) {
		throw 3;
	}
	std::string line;
	while (std::getline(read, line)) {
		std::getline(read, line);
		}
	input = line;
		read.close();
}

void File_handler::write_file(std::string output_filename){
	std::ofstream to_file("output.txt");
	if (!to_file.is_open()) {
		throw 4;
	}
		to_file << output;
		to_file.close();
}
