#include "../includes/extra.h"

Point mid_point(Point p1, Point p2){
    return Point(
        (p2.x_() + p1.x_()) / 2,
        (p2.y_() + p1.y_()) / 2
    );
}

double slope(Point p1, Point p2){
    double y = (p2.y_() - p1.y_());
    double x = (p2.x_() - p1.x_());

    if(x == 0){
        throw std::invalid_argument("Division ny zero");
    }

    return y / x;
}

Point line(Point p1, Point p2){
    double slope_ = slope(p1, p2);

    return Point(
        slope_,
        p1.y_() - slope_ * p1.x_()
    );
}

Point linep(Point p1, Point p2){
    double slope_ = slope(p1, p2);

    return Point(
        -slope_,
        p1.y_() + slope_ * p1.x_()
    );
}
