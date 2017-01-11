
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Caesarcypher.hpp"
#include "Filehandler.hpp"


TEST_CASE ("cypher") {
	Caesar_cypher cypher;
	cypher.set_input("ab C2?");
	cypher.encrypt(2);
	REQUIRE(cypher.get_output() == "cd E2?");
}

TEST_CASE ("file read") {
	File_handler filehandler;
	filehandler.read_file("input.txt");
	REQUIRE(filehandler.input == "alma");
}

TEST_CASE ("write to file") {
	File_handler filehandler;
	filehandler.output = "cica";
	filehandler.write_file("output.txt");
	filehandler.read_file("output.txt");
	REQUIRE(filehandler.input == "cica");
}


