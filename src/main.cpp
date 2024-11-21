#include <iostream>
#include <iomanip>
#include "../include/figureArray.h"
#include "../include/square.h"
#include "../include/rectangle.h"
#include "../include/trapezoid.h"

void printDivider() {
    std::cout << "\n----------------------------------------\n";
}

int main() {
    std::cout << std::fixed << std::setprecision(2);

    FigureArray array;

    std::cout << "\n1. Добавление фигур:";
    printDivider();

    array.add(new Square(60, 60, 3600));
    array.add(new Rectangle(2, 2, 3, 5));
    array.add(new Trapezoid(0, 0, 5, 2, 6));

    std::cout << "\n2. Вывод всех фигур:";
    printDivider();
    array.printAll();

    std::cout << "\n3. Общая площадь:";
    printDivider();
    std::cout << "Общая площадь: " << array.getTotalArea() << "\n";

    std::cout << "\n4. Удаление фигуры:";
    printDivider();
    std::cout << "Удаление фигуры с индексом 1\n";
    array.remove(1);

    std::cout << "\n5. Обновленный массив:";
    printDivider();
    array.printAll();

    std::cout << "\n6. Доступ к по индексу 0:";
    printDivider();
    Figure *fig = array.at(0);
    std::cout << "Первая фигура:\n" << *fig << "\n";

    return 0;
}