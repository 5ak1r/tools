#include <iostream>
#include <cmath>
#include <vector>

#include "../include/railfence.hpp"

std::vector<int> generate_positions(int depth) {
    std::vector<int> positions;

    for(int i = 0; i < depth; i++) positions.push_back(i);
    for(int j = depth - 1; j > 0; j--) positions.push_back(j);

    return positions;
}

std::string rail_encrypt(std::string plaintext, int depth) {
    std::string railfence[depth];
    
    std::vector<int> positions = generate_positions(depth);
    
    for (int i = 0; i < plaintext.size(); i++) {
        railfence[positions[i % positions.size()]] += plaintext[i];
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

    /*
    0 = 0, 2 * depth - 1
    1 = 1, 2 * depth - 2
    2 = 2, 2 * depth - 3*/
    
    std::vector<int> positions = generate_positions(depth);


    return plaintext;
}

int main() {
    std::cout << rail_encrypt("hellothere", 2) << std::endl;
    //std::cout << rail_decrypt("hlohreltee", 2) << std::endl;
}
