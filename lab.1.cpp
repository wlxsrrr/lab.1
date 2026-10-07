// lab.1.cpp :Вариант 7.Задание 2. СЧитать радиус. Используя const double PI, вывести длину окружности и площадь круга.
//
#include <iostream>
#include<clocale>
//int main() {
//    setlocale(LC_ALL, "Russian");
//    const double PI = 3.14159;
//    double radius;
//
//    std::cout << "Введите радиус: ";
//    std::cin >> radius;
//
//    double circumference = 2 * PI * radius;
//    double area = PI * radius * radius;
//
//    std::cout << "Длина: " << circumference << std::endl;
//    std::cout << "Площадь: " << area << std::endl;
//
//    return 0;
//}


//вариант 7 задание 3
// Считать блл от 0-100. Вывести категорию:90-100-отлично, 70-89-хорошо,50-69-зачет,ниже 50-незачет,знания вне 0-100 считать ошибкой.
int main() {
    setlocale(LC_ALL, "Russian");
    int score;
    std::cout << "Введите балл: ";
    std::cin >> score;

    if (score < 0 || score > 100) {
        std::cout << "ошибка" << std::endl;
    }
    else if (score >= 90) {
        std::cout << "отлично" << std::endl;
    }
    else if (score >= 70) {
        std::cout << "хорошо" << std::endl;
    }
    else if (score >= 50) {
        std::cout << "зачёт" << std::endl;
    }
    else {
        std::cout << "незачёт" << std::endl;
    }

    return 0;
}
