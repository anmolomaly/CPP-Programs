#include <iostream>
#include <string>

class AIModel {
public:
    std::string operator()(std::string input) {
        std::cout << "Model output: " << input;
        return input;
    }
};

int main() {
    AIModel A;
    A("INPUT"); 
    return 0;
}
