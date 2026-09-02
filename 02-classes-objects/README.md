
# 02 — Classes & Objects

C++ is an object-oriented language, and almost everything in it revolves around classes and objects.

## What is a class?
A **class** is a user-defined blueprint for creating objects. It doesn't hold real data on its own — it just describes what attributes (variables) and methods (functions) any object built from it will have.

## What is an object?
An **object** is an actual instance created from a class. You can create as many objects as you want from the same class, and each one keeps its own independent set of attribute values — changing one object never affects another.

```cpp
class MyClass {
    public:
        int myNum;
        string myString;
};
```

- `class` defines a new class called `MyClass`
- `public` is an access specifier — it makes the members accessible from outside the class (covered in more detail in a later post)
- `myNum` and `myString` are attributes — variables that belong to the class
- The class definition always ends with a semicolon `;`

## Creating and using an object
Once a class exists, you create an object by writing the class name followed by an object name, then access its members with the dot (`.`) operator:

```cpp
MyClass myObj;
myObj.myNum = 15;
myObj.myString = "Some text";
```

## Multiple objects, one class
The real power shows up when you create several objects from the same class — same structure, independent data. See `main.cpp` for a `Car` example with two separate objects.

## Practice challenge
As practice, I built a `Book` class with `title`, `author`, and `year` attributes, then created two `Book` objects with different values and printed them out. Solution is in `main.cpp`.

---
⬅ [Back to main README](../README.md) | Previous: **OOP Basics** | Next: **Constructors** →
