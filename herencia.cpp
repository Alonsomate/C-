#include <iostream>
#include <iostream>

// Clase base (punto en 2D)
/*     La sobrecarga de operaadores no funciona en herencia
*/


class Point {
protected:   // accesible en la clase y en clases hijas
    int x, y;

public:
    Point(int x = 0, int y = 0) : x(x), y(y) {}

    void setPoint(int x, int y) {
        this->x = x;
        this->y = y;
    }

    void showPoint() const {
        std::cout << "(" << x << ", " << y << ")";
    }
};
