/*---------------------------------------------------------------------------
Задача 7 . 4. Относительно класса coord (См. Unit7 "Overloading The 
Relational And Logical
Operators") перегрузите операторы отношения < и >.
*/
#include <iostream>
using namespace std;
//comint 1
//comint 2
class coord {
    int x, y;
public:
    coord() { x=0; y=0; }
    coord(int i, int j) { x=i; y=j; }
    void get_xy(int &i, int &j) { i=x; j=y; }
    bool operator >(const coord &obj);
    bool operator <(const coord &obj);
    bool operator ==(const coord &obj);
    bool operator &&(const coord obj);

};
bool coord::operator <(const coord &obj) {
    return (x < obj.x) && (y < obj.y);
}
bool coord::operator >(const coord &obj) {
    return (x > obj.x) && (y > obj.y);
}
bool coord::operator ==(const coord &obj) {
    return (x == obj.x) && (y == obj.y);
}
bool coord::operator &&(const coord obj) {
    return (x && obj.x) && (y && obj.y);
}
int main() {
    coord obj1(10, 10), obj2(5, 3), obj3(10, 10), obj4(0, 0);
    if (obj1 > obj2) {
        cout << "obj1 > obj2\n";
    } else if(obj1 < obj2) {
        cout << "obj1 < obj2\n";
    } else {
        cout << "obj1 и obj2 несравнимы\n";
    }
    if (obj1 == obj3) {
        cout << "obj1 и obj2 одинаковые\n";
    } else {
        cout << "obj1 и obj2 разные\n";
    }
    if (obj3 && obj4) {
        cout << "obj3 && obj4 - правда\n";
    } else {
        cout << "obj3 && obj4 - ложь\n";
    }
    return  0;
}
