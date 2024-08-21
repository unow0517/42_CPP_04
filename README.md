# 42_CPP_04
Virtual, Override

## New to Learn
### Virtual, Override
```c++
#include <iostream>

class Animal {
public:
    virtual ~Animal() {}  // Ensure destructor is virtual
    virtual std::string getType() const { return "Animal"; }
    virtual void makeSound() const { std::cout << "Generic Animal Sound" << std::endl; }
};

class Dog : public Animal {
public:
    std::string getType() const override { return "Dog"; }
    void makeSound() const override { std::cout << "Woof Woof" << std::endl; }
};

class Cat : public Animal {
public:
    std::string getType() const override { return "Cat"; }
    void makeSound() const override { std::cout << "Meow" << std::endl; }
};
```

if a member is declared as `virtual`, it means it can be `override`n.

### Why Destructor `virtual`?
To ensure that the correct destructors are called when deleting objects of derived classes (Dog and Cat) through pointers to the base class (Animal), the Animal class destructor should be declared as `virtual`.

### `override`
override is not required as long as the function to be overriden was defined `virtual`, but it is highly recommended because it improves code safety and clarity by ensuring that the method is properly overriding a base class virtual method.
