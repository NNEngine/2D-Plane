#include "./includes/Arithmetic.h"

int main()
{
    Point p1(12, 23);
    Point p2(4, 5);

    std::cout << "P1 = ";
    p1.print_point();

    std::cout << "P2 = ";
    p2.print_point();

    Point add = Add(p1, p2);
    Point sub = Sub(p1, p2);
    Point mul = Mul(p1, p2);
    Point div = Div(p1, p2);
    Point mod = Mod(p1, p2);

    std::cout << "\nAddition: ";
    add.print_point();

    std::cout << "Subtraction: ";
    sub.print_point();

    std::cout << "Multiplication: ";
    mul.print_point();

    std::cout << "Division: ";
    div.print_point();

    std::cout << "Modulo: ";
    mod.print_point();

    return 0;
}
