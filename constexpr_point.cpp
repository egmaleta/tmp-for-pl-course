#include <iostream>

using namespace std;


class Point{
    float _x;
    float _y;

public:
    constexpr Point(float x = 0, float y = 0): _x(x), _y(y) {}
    constexpr float x() const {
        return _x;
    }
    constexpr float y() const {
        return _y;
    }
};

constexpr Point mid_point(const Point& p1, const Point& p2){
    return Point((p1.x() + p2.x()) / 2, (p1.y() + p2.y()) / 2);
}


int main(){
    constexpr Point p1(0, 5.46);
    constexpr Point p2(4.3, 15);
    constexpr Point mp = mid_point(p1, p2);

    cout << "mp = P(" << mp.x() << ", " << mp.y() << ")\n";

    return 0;
}
