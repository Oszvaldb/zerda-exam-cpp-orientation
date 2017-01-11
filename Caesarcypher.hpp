#ifndef CAESARCYPHER_HPP_
#define CAESARCYPHER_HPP_
#include <string>

class Caesar_cypher {
private:
	std::string input;
	std::string output;
public:
	Caesar_cypher();
	void set_input(std::string input);
	std::string get_output();
	void encrypt(int key);

};

#endif /* CAESARCYPHER_HPP_ */
