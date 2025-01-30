#ifndef RAILFENCE_H
#define RAILFENCE_H

#include <string>
#include <vector>

std::vector<int> generate_positions(int depth);
std::string rail_encrypt(std::string plaintext, int depth);
std::string rail_decrypt(std::string plaintext, int depth);

#endif