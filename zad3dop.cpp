#include <iostream>

int main() {
    int hours, minutes, seconds;
    long long totalSeconds;

    std::cout << "Введите часы: ";
    std::cin >> hours;

    std::cout << "Введите минуты: ";
    std::cin >> minutes;

    std::cout << "Введите секунды: ";
    std::cin >> seconds;

    totalSeconds = (hours * 3600LL) + (minutes * 60LL) + seconds;

    std::cout << "Общее количество секунд: " << totalSeconds << "\n";

    return 0;
}