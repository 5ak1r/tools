#include <iostream>

#include "../include/caesar.hpp"
#include "../include/alphabet.hpp"

std::string c_encrypt(std::string plaintext, int key) {

    std::string ciphertext;

    key = (key % 26 + 26) % 26; //account for negative values when decrypting

    for(char c: plaintext) {
        if(ALPHABET_L.find(c) != std::string::npos) {
            ciphertext += ALPHABET_L[(ALPHABET_L.find(c) + key) % 26];
        } else if(ALPHABET_U.find(c) != std::string::npos) {
            ciphertext += ALPHABET_U[(ALPHABET_U.find(c) + key) % 26];
        } else {
            ciphertext += c;
        }
    }

    return ciphertext;
}


std::string c_decrypt(std::string ciphertext, int key) { return c_encrypt(ciphertext, -key); }
