#include <iostream>

int main() {
    setlocale(LC_ALL, "RU");
    double distance;
    double time;

    std::cout << "Введите расстояние до аэропорта (в км): ";
    std::cin >> distance;

    std::cout << "Введите время, за которое нужно доехать (в часах): ";
    std::cin >> time;

    if (time <= 0) {
        std::cout << "Ошибка: время должно быть больше нуля." << std::endl;
        return 1;
    }

    double speed = distance / time;

    std::cout << "Необходимая скорость: " << speed << " км/ч." << std::endl;

    return 0;
}
//--------------------------------------------------------------------------------------------------------------


#include <iostream>

int main() {
    setlocale(LC_ALL, "RU");
    int Hour, Minute, Second;
    int Hourend, Minuteend, Secondend;

    std::cout << "Введите время начала поездки (часы, минуты, секунды):\n";
    std::cout << "Часы: ";
    std::cin >> Hour;
    std::cout << "Минуты: ";
    std::cin >> Minute;
    std::cout << "Секунды: ";
    std::cin >> Second;

    std::cout << "Введите время завершения поездки (часы, минуты, секунды):\n";
    std::cout << "Часы: ";
    std::cin >> Hourend;
    std::cout << "Минуты: ";
    std::cin >> Minuteend;
    std::cout << "Секунды: ";
    std::cin >> Secondend;

    long startTimeInSeconds = Hour * 3600 + Minute * 60 + Second;
    long endTimeInSeconds = Hourend * 3600 + Minuteend * 60 + Secondend;

    long durationInSeconds = endTimeInSeconds - startTimeInSeconds;

    if (durationInSeconds < 0) {
        std::cout << "Ошибка: Время завершения должно быть позже времени начала." << std::endl;
        return 1;
    }

    long durationInMinutes = durationInSeconds / 60;

    const double costPerMinute = 2.0;
    double totalCost = durationInMinutes * costPerMinute;

    std::cout << "Стоимость поездки: " << totalCost << " гривен." << std::endl;

    return 0;
}

//-----------------------------------------------------------------------------------------------------------------------------


#include <iostream>
#include <iomanip>

int main() {
    setlocale(LC_ALL, "RU");
    double distance;
    double fuelrashod;
    double Price1, Price2, Price3;

    std::cout << "Введите расстояние(км): ";
    std::cin >> distance;

    std::cout << "Введите расход бензина на 100 км (в литрах): ";
    std::cin >> fuelrashod;

    std::cout << "Введите стоимость первого вида бензина (в рублях/1л): ";
    std::cin >> Price1;

    std::cout << "Введите стоимость второго вида бензина (в рублях/1л): ";
    std::cin >> Price2;

    std::cout << "Введите стоимость третьего вида бензина (в рублях/1л): ";
    std::cin >> Price3;

    double totalFuelUsed = (fuelrashod / 100) * distance;

    double cost1 = totalFuelUsed * Price1;
    double cost2 = totalFuelUsed * Price2;
    double cost3 = totalFuelUsed * Price3;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nТаблица стоимости поездки:\n";
    std::cout << "-------------------------------------------------\n";
    std::cout << "|    Бензин   |        Поездка (руб)            |\n";
    std::cout << "-------------------------------------------------\n";
    std::cout << "| 1           | " << cost1 << "                 |\n";
    std::cout << "| 2           | " << cost2 << "                 |\n";
    std::cout << "| 3           | " << cost3 << "                 |\n";
    std::cout << "-------------------------------------------------\n";

    return 0;
}