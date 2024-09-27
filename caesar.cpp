#include <iostream>
#include <string>

const std::string ALPHABET_L = "abcdefghijklmnopqrstuvwxyz";
const std::string ALPHABET_U = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

std::string encrypt(std::string plaintext, int key) {

    std::string ciphertext;

    for(char c: plaintext) {
        if(ALPHABET_L.find(c) != std::string::npos) {
            ciphertext += ALPHABET_L[ALPHABET_L.find(c) + key % 26];
        } else if(ALPHABET_U.find(c) != std::string::npos) {
            ciphertext += ALPHABET_U[ALPHABET_U.find(c) + key % 26];
        } else {
            ciphertext += c;
        }
    }

    return ciphertext;
}


std::string decrypt(std::string plaintext, int key) { return encrypt(plaintext, -key); }

int main() {
    std::cout << decrypt(encrypt("hi", 3), 3) << std::endl;
}