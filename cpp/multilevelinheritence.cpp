#include <iostream.h>
class Animal
{
public:
void eat()
{
cout << "Animal is eating.\n";
}
};
class Mammal : public Animal
{
public:
void move()
{
cout << "Mammal is moving.\n";
}
};
class Dog : public Mammal
{
public:
void bark()
{
cout << "Dog is barking.\n";
}
};
int main()
{
Dog myDog;
myDog.eat();
myDog.move();
myDog.bark();
return 0;
}
