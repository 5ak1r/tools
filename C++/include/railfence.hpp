#ifndef RAILFENCE_H
#define RAILFENCE_H

#include <string>

std::string rail_encrypt(std::string plaintext, int depth);
std::string rail_decrypt(std::string plaintext, int depth);

#endif