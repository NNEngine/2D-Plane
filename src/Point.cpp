#include "../includes/Point.h"

Point::Point(double x, double y){
    this->x = x;
    this->y = y;
}

void Point::print_point(){
    std::cout<<"("<< x << ", " << y << ")" << "\n";
}

double Point::x_(){
    return x;
}

double Point::y_(){
    return y;
}
