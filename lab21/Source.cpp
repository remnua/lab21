#include <iostream>
#include <string>
using namespace std;
#include <cmath>

//class Person
//{
//public:
//    string name;
//    int age;
//    string occupation;
//    int height;
//
//    Person(string n, int a, string o = "Unemployed", int h = 0)
//    {
//        name = n;
//        age = a;
//        occupation = o;
//        height = h;
//    }
//};
//
//void print(Person* person)
//{
//    cout << person->name << " is " << person->age << " years old and works as a(n) "
//        << person->occupation << ". Height: " << person->height << " cm." << endl;
//}
//
//int main()
//{
//    Person person("Harry", 23, "Software Developer", 180);
//
//    cout << "Meet " << person.name << endl;
//    print(&person);
//
//    return 0;
//}



//class Square {
//private:
//    double side;
//    double area;
//public:
//    Square(double side);
//    void set_side(double new_side);
//    void print();
//};
//
//Square::Square(double side) {
//    this->side = side;
//    this->area = side * side;
//}
//
//void Square::set_side(double new_side) {
//    if (new_side >= 0) {
//        this->side = new_side;
//        this->area = new_side * new_side;
//    }
//}
//
//void Square::print() {
//    cout << "Square: side=" << side << " area=" << area << endl;
//}
//
//int main() {
//    Square s(4);
//    s.print();
//    s.set_side(2.0);
//    s.print();
//    s.set_side(-33.0);
//    s.print();
//    return 0;
//}




//class AdHocSquare {
//public:
//    AdHocSquare(double side);
//    void set_side(double side);
//    double get_area();
//private:
//    double side;
//};
//
//class LazySquare {
//public:
//    LazySquare(double side);
//    void set_side(double side);
//    double get_area();
//private:
//    double side;
//    double area;
//    bool side_changed;
//};
//
//AdHocSquare::AdHocSquare(double side) {
//    this->side = side;
//}
//
//void AdHocSquare::set_side(double side) {
//    this->side = side;
//}
//
//double AdHocSquare::get_area() {
//    return pow(side, 2);
//}
//
//LazySquare::LazySquare(double side) {
//    this->side = side;
//    this->area = pow(side, 2);
//    this->side_changed = false;
//}
//
//void LazySquare::set_side(double side) {
//    if (side >= 0) {
//        this->side = side;
//        this->side_changed = true;
//    }
//}
//
//double LazySquare::get_area() {
//    if (this->side_changed) {
//        this->area = pow(this->side, 2);
//        this->side_changed = false;
//    }
//    return this->area;
//}
//
//int main() {
//    AdHocSquare square1(4);
//    square1.set_side(2.0);
//    std::cout << "AdHocSquare area: " << square1.get_area() << std::endl;
//
//    LazySquare square2(4);
//    square2.set_side(2.0);
//    std::cout << "LazySquare area: " << square2.get_area() << std::endl;
//    square2.set_side(-33.0);
//    std::cout << "LazySquare area: " << square2.get_area() << std::endl;
//
//    return 0;
//}





class ShopItemOrder {
private:
    string item_name;
    double unit_price;
    int num_items_ordered;
public:
    ShopItemOrder(string name = "", double price = 0.0, int num = 0)
        : item_name(name), unit_price(price), num_items_ordered(num)
    {}

    string get_item_name() const { return item_name; }
    double get_unit_price() const { return unit_price; }
    int get_num_items_ordered() const { return num_items_ordered; }

    void set_item_name(const string& name) { item_name = name; }
    void set_unit_price(double price) { unit_price = price; }
    void set_num_items_ordered(int num) { num_items_ordered = num; }

    double get_total_price() const { return unit_price * num_items_ordered; }

    void print_order() const {
        cout << "Item Name: " << item_name << endl;
        cout << "Unit Price: $" << unit_price << endl;
        cout << "Number of Items Ordered: " << num_items_ordered << endl;
        cout << "Total Price: $" << get_total_price() << endl;
    }
};

int main() {
    ShopItemOrder item("Sneakers", 75.99, 2);

    item.print_order();

    item.set_num_items_ordered(3);
    item.print_order();

    return 0;
}
