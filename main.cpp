#include <iostream>
#include <string>

int main() {
    std::string s;
    while (std::cin >> s) {
        std::cerr << s << std::endl;
    }
    return 1; // Cause Runtime Error to see stderr
}
