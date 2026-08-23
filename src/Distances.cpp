#include "../includes/Distances.h"

double P2PD(Point p1, Point p2){
    return std::sqrt(
            std::pow(p1.x_() - p2.x_(), 2) + 
            std::pow(p1.y_() - p2.y_(), 2)
        );
}

double P2OD(Point p){
    return std::sqrt(
            std::pow(p.x_(), 2) + 
            std::pow(p.y_(), 2)
        );
}

double P2PXD(Point p1, Point p2){
    return std::abs(p1.x_() - p2.x_());
}

double P2PYD(Point p1, Point p2){
    return std::abs(p1.y_() - p2.y_());
}

double P2OXD(Point p){
    return std::abs(p.x_());
}

double P2OYD(Point p){
    return std::abs(p.y_());
}
