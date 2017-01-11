/*
 * Caesarcypher.cpp
 *
 *  Created on: Jan 11, 2017
 *      Author: zoltanszabo
 */

#include "Caesarcypher.hpp"
#include <string>

Caesar_cypher::Caesar_cypher() {
	input = "";
	output = "";
}

void Caesar_cypher::set_input(std::string input) {
	this->input = input;
}

std::string Caesar_cypher::get_output() {
	return output;
}

void Caesar_cypher::encrypt(int key) {

	std::string temp = input;
	int length;
	length = (int)temp.length();
	for (int i = 0; i < length; i++) {
			if (isalpha(temp[i])) {
				for (int j = 0; j < key; j++) {
						if (temp[i] == 'z') {
								temp[i] = 'a';
						} else if (temp[i] == 'Z') {
								temp[i] = 'A';
						} else {
								temp[i]++;
						}
				}
			}
	}
	output = temp;
	}
