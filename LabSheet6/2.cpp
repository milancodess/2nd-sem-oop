#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void makesound() = 0;

    virtual ~Animal()
    {
    }
};

class Dog : public Animal
{
public:
    void makesound() override
    {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal
{
public:
    void makesound() override
    {
        cout << "Cat meows" << endl;
    }
};

int main()
{
    Animal *ptr = new Dog();
    Animal *ptr2 = new Cat();

    ptr->makesound();
    ptr2->makesound();

    delete ptr;
    delete ptr2;

    return 0;
}