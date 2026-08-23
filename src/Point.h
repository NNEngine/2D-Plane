#ifndef POINT_H
#define POINT_H
#include "libs.h"

class Point{
    private:
        double x;
        double y;

    public:
        Point(double x, double y);

        void print_point();

        double x_();
        double y_();
};
#endif
