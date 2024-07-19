#include <iostream>
#include <ctime>
#include <fstream>

int main() {
    std::ofstream file("../binaryPic.txt");
    if (!file) {
        return 0;
    }
    std::srand(std::time(nullptr));
    int height;
    int width;
    std::cout << "Enter height and width: ";
    std::cin >> height >> width;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
           file << std::rand() % 2;
        }
        file << std::endl;
    }

    file.close();

    return 0;
}
