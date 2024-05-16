#include <iostream>
#include <string>

class Animal {
protected:
    std::string name;
public:
    Animal(std::string n) : name(n) {}
    virtual void Voice() {
        std::cout << "Животные говорят" << std::endl;
    }
};

class Dog : public Animal {
public:
    Dog(std::string n) : Animal(n) {}
    void Voice() override {
        std::cout << name << " говорит Гав!" << std::endl;
    }
};

class Cat : public Animal {
public:
    Cat(std::string n) : Animal(n) {}
    void Voice() override {
        std::cout << name << " говорит Мяу!" << std::endl;
    }
};

int main() {
    setlocale(LC_ALL, "Rus");
    Animal* animal1 = new Dog("Рекс");
    Animal* animal2 = new Cat("Джессика");

    animal1->Voice();
    animal2->Voice();

    delete animal1;
    delete animal2;

    return 0;
}
