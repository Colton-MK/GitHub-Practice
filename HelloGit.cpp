#include <iostream>
#include <string>

int main(){
    introduction();
    return 0;
}

void introduction(){
    string username;
    std::cout << "Hello Git World" << std::endl;
    std::cout << "What's your name?" << std::endl;
    std::cout << "Please enter your name: " << std::endl;
    std::cin >> username;
    std::cout << "Hi " << username << "! It's VERY nice to me you :)" << std::endl;
    return 0;
}
