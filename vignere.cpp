#include <iostream>


#include "alphabet.hpp"
#include "general.hpp"
#include "caesar.hpp"

std::string v_fix_key(std::string text, std::string key) {
    key = upper(key);

    for (auto c : key) if (ALPHABET_U.find(c) == std::string::npos) return NULL; //key must only be A-Z

    int i = 0;
    std::string use_key = key;

    while (text.size() != use_key.size()) {
        if (text.size() > key.size()) use_key += key[i % key.size()];
        else use_key.pop_back();

        i++;
    }

    return use_key;
}

std::string v_encrypt(std::string plaintext, std::string key) {
    std::string ciphertext;

    key = v_fix_key(plaintext, key);

    for(int i = 0; i < plaintext.size(); i++) {
        ciphertext += c_encrypt(std::string(1, plaintext[i]), ALPHABET_U.find(key[i]));
    }

    return ciphertext;

}

std::string v_decrypt(std::string ciphertext, std::string key) {
    std::string plaintext;

    key = v_fix_key(ciphertext, key);

    for(int i = 0; i < ciphertext.size(); i++) {
        plaintext += c_decrypt(std::string(1, ciphertext[i]), ALPHABET_U.find(key[i]));
    }

    return plaintext;

}


int main() {
    std::cout << v_encrypt("HELLOWORLD", "PLATO") << std::endl;
    std::cout << v_decrypt("WPLECLZRER", "PLATO") << std::endl;
}