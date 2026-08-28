#include "./includes/Arithmetic.h"
#include "./includes/Scalar.h"
#include "./includes/Distances.h"

int main()
{
    Point p1(12, 23);
    Point p2(4, 5);

    std::cout << "P1 = ";
    p1.print_point();

    std::cout << "P2 = ";
    p2.print_point();


    std::cout <<"===== Arithmetic Operations =====";
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

    std::cout << "===== Scalar Operations =====";

    double scalar = 3.14;
    std::cout << "\nscalar is: " << scalar;
    std::cout << "\nAddition: ";
    Point adds = Adds(p1, scalar);
    adds.print_point();

    std::cout << "Substraction: ";
    Point subs = Subs(p1, scalar);
    subs.print_point();

    std::cout << "Multiplication: ";
    Point muls = Muls(p1, scalar);
    muls.print_point();

    std::cout << "Division: ";
    Point divs = Divs(p1, scalar);
    divs.print_point();

    std::cout << "===== Distance between Points =====";

    std::cout << "\nPoint to Point Distance\n";
    double p2pd = P2PD(p1, p2);
    std::cout << "P2PD: " << p2pd;

    std::cout << "\nPoint to Origin Distance\n";
    double p2od = P2OD(p1);
    std::cout << "P2OD: " << p2od;

    std::cout << "\nPoint to Point X Distance\n";
    double p2pxd = P2PXD(p1, p2);
    std::cout << "P2POD: " << p2pxd;

    std::cout << "\nPoint to Point Y Distance\n";
    double p2pyd = P2PYD(p1,p2);
    std::cout << "P2PYD: " << p2pyd;

    std::cout << "\nPoint to Origin X Distance\n";
    double p2oxd = P2OXD(p1);
    std::cout << "p2oxd: " << p2oxd;

    std::cout << "\nPoint to Origin Y Distance\n";
    double p2oyd = P2OYD(p1);
    std::cout << "p2oyd: " << p2oyd;

    std::cout << "\n";

    return 0;
}
