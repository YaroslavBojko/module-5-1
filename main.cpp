#include <iostream>

int main() {
    int speed;
    std::cout << "Enter aircraft speed: ";
    std::cin >> speed;

    int height;
    std::cout << "Enter flight altitude: ";
    std::cin >> height;

    if(speed < 750 || speed > 850 || height < 9000 || height > 9500)
        std::cout << "The echelon is not correct!!!";
    else
        std::cout << "Correct echelon!!!";
}
