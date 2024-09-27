#include "general.hpp"
#include "alphabet.hpp"

#include <algorithm>

std::string upper(std::string text) {
    std::transform(text.begin(), text.end(), text.begin(),
    [](unsigned char c) { return std::toupper(c); });

    return text;
}
