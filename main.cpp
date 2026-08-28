#include "./includes/Arithmetic.h"
#include "./includes/Scalar.h"
#include "./includes/Distances.h"
#include "./includes/extra.h"

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

    std::cout << "\nAddition: ";
    add.print_point();

    std::cout << "Subtraction: ";
    sub.print_point();

    std::cout << "Multiplication: ";
    mul.print_point();

    std::cout << "Division: ";
    try{
        Point div = Div(p1, p2);
        div.print_point();
    }catch(const std::invalid_argument &e){
        std::cout << "Error: " << e.what();
    }
    
    
    std::cout << "Modulo: ";
    try{
        Point mod = Mod(p1, p2);
        mod.print_point();
    }catch(const std::invalid_argument &e){
        std::cout << "Error: " << e.what();
    }

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
    try{
        Point divs = Divs(p1, scalar);
        divs.print_point();
    }catch(const std::invalid_argument &e){
        std::cout << "Error: " << e.what();
    }

    std::cout << "Mods: ";
    try{
        Point mod = Mods(p1, scalar);
        mod.print_point();
    }catch(const std::invalid_argument &e){
        std::cout << "Error: " << e.what();
    }

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

    std::cout << "===== Extra =====\n";

    std::cout << "Mid Point: ";
    Point mid = mid_point(p1, p2);
    mid.print_point();

    std::cout << "Slope: ";
    double slope_ = slope(p1, p2);
    std::cout << slope_ ;

    std::cout << "\nline: ";
    Point m_c = line(p1, p2);
    m_c.print_point();

    std::cout << "linep: ";
    Point nm_c = linep(p1, p2);
    nm_c.print_point();

    std::cout << "\n";
    
    return 0;
}
