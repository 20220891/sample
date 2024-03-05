#include <iostream>
using namespace std;

class Rectangle {
  private: 
    double width;
    double length;
  public: 
    void setWidth(double);
    void setLength(double);
    double getWidth() const;
    double getLength() const;
    double getArea() const;
};

void Rectangle::setWidth(double w)  {
  width = w;
}

void Rectangle::setLength(double len) {
  length = len;
}

double Rectangle::getWidth() const {
  return width;
}

double Rectangle::getLength() const {
  return length;
}

double Rectangle::getArea() const {
  return width * length;
}

int main() {
  Rectangle box;
  Rectangle *box2Ptr = 0;
  double rectWidth, rectLength;
  cout << "This program calculates the area of a Rectangle \n";

  cout << "Enter width: \n";
  cin >> rectWidth;
  cout << "Enter length: \n";
  cin >> rectLength;

  box2Ptr = &otherRectangle;

  box2Ptr->setWidth(rectWidth);
  // box.setLength(rectLength);
  box2Ptr->setLength(rectLength);


  cout << "This are the outputs of the program: \n";
  cout << "Width: " << box2Ptr->getWidth() << endl;
  cout << "Length: " << box2Ptr->getLength() << endl;
  cout << "Area: " << box2Ptr->getArea() << endl;
}