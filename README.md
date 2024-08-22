# 42_CPP_04
* **Polymorphism**: Polymorphism is a core concept in object-oriented programming (OOP) that **allows objects to be treated as instances of their base class rather than their actual derived class**. This concept is key to achieving flexibility and reusability in code. In C++, polymorphism is primarily implemented through inheritance and virtual functions.

* Handle array in ex01
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
Keyword `override` is required when declared, not needed when defined.

### what's the point to user `virtual` and `override`?
It doesn't decrease the number of code I have to write, since I have to define the behavior to override. But **they enable behavior where a derived class can replace or "override" methods from a base class**.

### run-time, compile-time
two distinct phase of program execution.
* Compile-time execution:  It involves static checks, function/operator overloading, and template instantiation. Decisions are made based on the known code and types.
* Run-time execution : It involves dynamic dispatch (polymorphism), dynamic memory allocation, and runtime type information.

* **Compile-Time Polymorphism**: Achieved through **function and operator overloading**.
* **Run-Time Polymorphism**: Achieved through **virtual functions and inheritance**, allowing for dynamic method dispatch based on the actual object type.

### Dynamic method dispatch
Dynamic method dispatch, also known as dynamic dispatch or run-time method binding, is a mechanism in object-oriented programming that **allows a program to determine at runtime which method implementation to call, based on the actual type of the object, rather than the type of the pointer or reference used to access the object**. This feature is a key aspect of polymorphism in C++.

### `this` vs `*this`
`this` is pointer pointing the object itself. So you can access memebers like `this->member`. `*this.member` works as well, but unnecessary.

### Pointer to pointer assignment
```c++
int* ptr1 = new int(42);
int* ptr2 = ptr1;

delete ptr1;  // ptr2 is now dangling
std::cout << *ptr2;  // Accessing invalid memory
```
When you assign one pointer to another, only the pointer itself is copied, not the data it points to. This means that both pointers will point to the same memory location. If one pointer is deleted or goes out of scope, the other pointer will be left dangling (pointing to deallocated memory). Accessing or modifying the data through the dangling pointer results in undefined behavior.

* solution : **deep copy**. ensure that the data pointed to is copied, not just the pointer.
```c++
int* ptr1 = new int(42);
int* ptr2 = new int(*ptr1);  // Deep copy of the value, not the pointer
```

