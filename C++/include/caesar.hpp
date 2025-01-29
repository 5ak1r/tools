#ifndef CAESAR_H
#define CAESAR_H

#include <string>

std::string c_encrypt(std::string plaintext, int key);
std::string c_decrypt(std::string ciphertext, int key);

#endif