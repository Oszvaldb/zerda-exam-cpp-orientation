
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "Caesarcypher.hpp"
#include "Filehandler.hpp"

using namespace std;

int main(int argc, char* argv[]) {
	Caesar_cypher cypher;
	File_handler filehandler;
	try  {
		if (argc != 5) {throw 1;}
		if (string (argv[2]) == "-s" && string (argv[2]) == "-o" ) {
			filehandler.read_file(argv[1]);
			cypher.set_input(filehandler.input);
			int key;
			key = atoi(argv[3]);
			cypher.encrypt(key);
			filehandler.output = cypher.get_output();
			filehandler.write_file(argv[5]);
		}
		else throw 2;
	}

	catch (int excp) {
		if (excp == 1) {
			cout << "invalid number of arguments; try: filename in_-s_key_-o_filename out" << endl;
		}
		else if (excp == 2) {
			cout << "invalid arguments; try: filename in_-s_key_-o_filename out" << endl;
		}
		else if (excp == 3) {
			cout << "could not find source file" << endl;
		}
		else if (excp == 4) {
			cout << "could not find target file" << endl;
		}
	}
	return 0;
}


