# 2D Cartesian Plane

A small C++ mathematical library for performing arithmetic and geometric operations on points in a 2D Cartesian plane.

The project is built from scratch using C++ classes, separate header/source files, and basic object-oriented programming concepts.

## Features

### Point

The core of the library is the `Point` class.

```cpp
Point p1(12, 23);
Point p2(4, 5);
````

Each point stores its `x` and `y` coordinates and provides methods to access and print them.

## Point Arithmetic

Arithmetic operations can be performed between two points.

```cpp
Add(p1, p2);
Sub(p1, p2);
Mul(p1, p2);
Div(p1, p2);
Mod(p1, p2);
```

For example:

```text
P1 = (12, 23)
P2 = (4, 5)

Addition:       (16, 28)
Subtraction:    (8, 18)
Multiplication: (48, 115)
Division:       (3, 4.6)
```

Division and modulo operations include error handling for division by zero.

---

## Scalar Arithmetic

Points can also be operated on using scalar values.

```cpp
double scalar = 3.14;

Adds(p1, scalar);
Subs(p1, scalar);
Muls(p1, scalar);
Divs(p1, scalar);
Mods(p1, scalar);
```

This performs the operation independently on the `x` and `y` coordinates.

For example:

```text
(12, 23) + 3.14
= (15.14, 26.14)
```

---

## Distance Calculations

The project provides several distance-related operations.

### Point to Point

```cpp
P2PD(p1, p2);
```

Calculates the Euclidean distance between two points.

$$
d = \sqrt{(x_2-x_1)^2 + (y_2-y_1)^2}
$$

### Point to Origin

```cpp
P2OD(p1);
```

Calculates the distance between a point and the origin `(0, 0)`.

### Coordinate Distances

The library also provides:

```cpp
P2PXD(p1, p2);
P2PYD(p1, p2);
P2OXD(p1);
P2OYD(p1);
```

for calculating X/Y coordinate distances between points and the origin.

---

## Additional Geometry Operations

The `extra` module contains additional Cartesian geometry operations.

### Midpoint

```cpp
Point mid = mid_point(p1, p2);
```

Calculates the midpoint between two points.

$$
M =
\left(
\frac{x_1+x_2}{2},
\frac{y_1+y_2}{2}
\right)
$$

### Slope

```cpp
double m = slope(p1, p2);
```

Calculates the slope of the line passing through two points.

$$
m = \frac{y_2-y_1}{x_2-x_1}
$$

### Line Calculations

The project also contains functions for calculating line-related values:

```cpp
line(p1, p2);
linep(p1, p2);
```

---

## Project Structure

```text
2d_plane/
│
├── includes/
│   ├── Arithmetic.h
│   ├── Distances.h
│   ├── extra.h
│   ├── libs.h
│   ├── Point.h
│   └── Scalar.h
│
├── src/
│   ├── Arithmetic.cpp
│   ├── Distances.cpp
│   ├── extra.cpp
│   ├── Point.cpp
│   └── Scalar.cpp
│
├── main.cpp
├── .gitignore
└── README.md
```

## Building

The project can be compiled using `g++`.

```bash
g++ main.cpp src/Point.cpp src/Arithmetic.cpp src/Scalar.cpp src/Distances.cpp src/extra.cpp -o cartesian
```

Run it with:

```bash
./cartesian
```

---

## Example

```cpp
#include "./includes/Arithmetic.h"
#include "./includes/Scalar.h"
#include "./includes/Distances.h"
#include "./includes/extra.h"

int main()
{
    Point p1(12, 23);
    Point p2(4, 5);

    Point add = Add(p1, p2);

    std::cout << "Addition: ";
    add.print_point();

    double distance = P2PD(p1, p2);

    std::cout << "Distance: "
              << distance << '\n';

    Point mid = mid_point(p1, p2);

    std::cout << "Midpoint: ";
    mid.print_point();

    return 0;
}
```

## Purpose

This project was created as a practical exercise in:

* C++ classes and objects
* Encapsulation
* Header/source separation
* Function declarations and definitions
* Object composition
* Exception handling
* Mathematical programming
* 2D Cartesian geometry

## Future Improvements

Planned extensions include:

* [ ] Operator overloading (`+`, `-`, `*`, `/`)
* [ ] Vector class
* [ ] Angle calculations
* [ ] Line class
* [ ] Circle class
* [ ] Triangle and polygon operations
* [ ] Intersection calculations
* [ ] Rotation and translation
* [ ] Coordinate transformations
* [ ] Cartesian plane visualization

## License

This project is open source and available under the MIT License.


One thing I'd **definitely keep in the README** is the future roadmap. Your current project is small, but it has a very natural progression from:

**Point → Vector → Line → Circle → Triangle → Computational Geometry**

So when you eventually add those, the repository will show an actual evolution rather than looking like a one-night OOP exercise.
