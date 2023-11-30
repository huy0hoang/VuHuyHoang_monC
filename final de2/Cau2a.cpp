#include <iostream>
using namespace std;

// Đa hinh động
class Animal {
    public:
     virtual void speak(){
        cout << "Animal is speaking..." << endl;
     }
};

class Dog : public Animal {
    public:
    void speak(){
        cout << "Dog is speaking..." << endl;
    }
};

class Cat : public Animal {
    public:
    void speak(){
        cout << "Cat is speaking..." << endl;
    }
};

int main (){
    Animal*dog = new Dog();
    Animal*cat = new Cat();

    dog->speak(); // Dog is speaking...
    cat ->speak(); //Cat is speaking...

    delete cat;
    delete dog;
    return 0;
}