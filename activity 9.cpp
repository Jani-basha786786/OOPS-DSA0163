#include <iostream>
using namespace std;
class ClassA 
{
 private:
    int value;
 public:
    ClassA() : value(0) {}
    ClassA(int val) : value(val) {}
    friend ClassA operator+(const ClassA& objA, const ClassB& objB);
    friend ClassA operator-(const ClassA& objA, const ClassB& objB);
    friend ClassA operator*(const ClassA& objA, const ClassB& objB);
    friend ClassA operator/(const ClassA& objA, const ClassB& objB);
    void display() 
	{
        cout << "Result: " << value << endl;
    }
};
class ClassB 
{
 private:
    int value;

 public:
    ClassB() : value(0) {}
    ClassB(int val) : value(val) {}
    friend ClassA operator+(const ClassA& objA, const ClassB& objB);
    friend ClassA operator-(const ClassA& objA, const ClassB& objB);
    friend ClassA operator*(const ClassA& objA, const ClassB& objB);
    friend ClassA operator/(const ClassA& objA, const ClassB& objB);
};
ClassA operator+(const ClassA& objA, const ClassB& objB) 
{
    return ClassA(objA.value + objB.value);
}
ClassA operator-(const ClassA& objA, const ClassB& objB) 
{
    return ClassA(objA.value - objB.value);
}
ClassA operator*(const ClassA& objA, const ClassB& objB) 
{
    return ClassA(objA.value * objB.value);
}
ClassA operator/(const ClassA& objA, const ClassB& objB) 
{
    if (objB.value != 0) 
	{
        return ClassA(objA.value / objB.value);
    } 
	else
    {
        cout << "Error: Division by zero is not allowed." << endl;
        return ClassA(0);
    }
}
int main() 
{
    ClassA objA(10);
    ClassB objB(5);
    ClassA sum = objA + objB;
    cout << "Addition: ";
    sum.display();
    ClassA difference = objA - objB;
    cout << "Subtraction: ";
    difference.display();
    ClassA product = objA * objB;
    cout << "Multiplication: ";
    product.display();
    ClassA quotient = objA / objB;
    cout << "Division: ";
    quotient.display();
    return 0;
}

