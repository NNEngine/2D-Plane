#include "../includes/Arithmetic.h"

Point Add(Point p1, Point p2){
    return Point(
        p1.x_() + p2.x_(),
        p1.y_() + p2.y_()
    );
}

Point Sub(Point p1, Point p2){
    return Point(
      p1.x_() - p2.x_(),
      p1.y_() - p2.y_()  
    );
}

Point Mul(Point p1, Point p2){
    return Point(
        p1.x_() * p2.x_(),
        p1.y_() * p2.y_() 
    );
}

Point Div(Point p1, Point p2){
    if(p2.x_() == 0|| p2.y_() == 0){
        throw std::invalid_argument("Division by zero");
    }
    return Point(
        p1.x_() / p2.x_(),
        p1.y_() / p2.y_()
    );
}

Point Mod(Point p1, Point p2){
    if(p2.x_() == 0|| p2.y_() == 0){
        throw std::invalid_argument("Division by zero");
    }
    return Point(
        fmod(p1.x_(),  p2.x_()),
        fmod(p1.y_(),  p2.y_())
    );
}
