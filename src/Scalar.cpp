#include "../includes/Scalar.h"

Point Adds(Point p, double scalar_){
    return Point(
        p.x_() + scalar_, p.y_() + scalar_
    );
}

Point Subs(Point p, double scalar_){
    return Point(
        p.x_() - scalar_, p.y_() - scalar_
    );
}

Point Muls(Point p, double scalar_){
    return Point(
        p.x_() * scalar_, p.y_() * scalar_
    );
}

Point Divs(Point p, double scalar_){
    if(scalar_ == 0){
        throw std::invalid_argument("Division by zero");
    }
    return Point(
        p.x_() / scalar_, p.y_() / scalar_
    );
}

Point Mods(Point p, double scalar_){
    if(scalar_ == 0){
        throw std::invalid_argument("Division by zero");
    }
    return Point(
        fmod(p.x_(), scalar_), fmod(p.y_(), scalar_)
    );
}
