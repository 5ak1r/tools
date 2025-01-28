#include "railfence.hpp"

#include <iostream>
#include <cmath>

std::string rail_encrypt(std::string plaintext, int depth) {
    std::string railfence[depth];

    for (int i = 0; i < plaintext.size(); i++) {
        railfence[i % depth] += plaintext[i];
    }

    std::string res;

    for (int j = 0; j < depth; j++) {
        res += railfence[j];
    }

    return res;
}

std::string rail_decrypt(std::string ciphertext, int depth) {
    std::string plaintext;
    int cipher_size = ciphertext.size();

    if ((double)cipher_size / depth != (double)std::floor(cipher_size / depth)) {
        return NULL;
    }

    int chunk_size = cipher_size / depth;

    for(int i = 0; i < chunk_size; i++) {
        for(int j = 0; j < cipher_size; j += chunk_size) {
            plaintext += ciphertext[i + j];
        }
    }

    return plaintext;
}

int main() {
    std::cout << rail_encrypt("hellothere", 2) << std::endl;
    std::cout << rail_decrypt("hlohreltee", 2) << std::endl;
}
