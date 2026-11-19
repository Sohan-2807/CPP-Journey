# ⚡ C++ Journey

Welcome to my **C++ Journey** — a collection of my C++ programs, practice problems, and concepts as I strengthen my programming fundamentals based on the CSE202: Object Oriented Programming curriculum.

This repository contains my progression from basic syntax and programming concepts to Object-Oriented Programming and modern C++ features. Every concept file includes working implementations along with in-depth notes on common confusions and compiler pitfalls.

## 🛠️ Technology

* **C++**

## 📂 Repository Structure

```text
CPP-Journey/
├── 1. Concepts and Basics of C++ Programming and Functions/
│   ├── CallBy/                               (Call by value, address, reference, reference variables & pitfalls)
│   ├── Class/                                (Classes, objects, access specifiers, static members, struct vs union vs class)
│   ├── Friend/                               (Friend functions, friend classes, member friend functions)
│   ├── Functions/                            (Overloading, recursion, inline, scope rules & resolution)
│   └── SpecialType/                          (Enums, stream manipulators)
│
├── 2. Pointers, Reference Variables, Arrays and String Concepts/
│   ├── Array/                                (Multidimensional arrays, array of objects, array processing)
│   ├── Pointers/                             (Pointer arithmetic, this pointer, double pointers, void/null/wild/dangling)
│   └── Strings/                              (Standard C++ string class, builtin methods, string modifiers)
│
├── 3. Constructors, Destructors and File Handling/
│   ├── Constructor/
│   │   ├── TypesOfConstructors/              (Default, parameterized, default arguments, overloading, dynamic)
│   │   ├── Copy/                             (Copy constructor, shallow copy, deep copy)
│   │   ├── InitializerList/                  (Member initialization lists, const and reference members)
│   │   ├── ConstAndStatic/                   (Const objects/functions, static counters, static object lifetime)
│   │   ├── AdvancedConstructors/             (Explicit constructors, delegating constructors)
│   │   └── Containment/                      (Aggregation and composition associations)
│   ├── Destructor/                           (Destructor mechanics, destruction order, heap cleanup, private destructor)
│   └── FileHandling/
│       ├── BasicOperations/                  (File open modes, sequential write/read, formatted output, EOF)
│       ├── RandomAccess/                     (seekp, seekg, tellp, tellg, random record access)
│       ├── BinaryAndObjectIO/                (Binary records with struct, class, and object arrays)
│       └── FileProcessing/                   (Word counting, file copying, and stream state checks)
│
├── 4. Operator Overloading, Type Conversion and Inheritance/
│   ├── OperatorOverloading/                  (Unary/binary operator overloading, friend function overloading)
│   ├── TypeConversion/                       (Basic-to-class, class-to-basic, and class-to-class conversions)
│   └── Inheritance/
│       ├── TypesOfInheritance/               (Single, multilevel, multiple, and hierarchical inheritance)
│       ├── VisibilityModes/                  (Public, protected, and private derivation)
│       ├── AmbiguityAndVirtualBase/          (Ambiguity resolution, multipath, and virtual base classes)
│       ├── ExecutionOrderAndOverriding/      (Constructor/destructor order and function overriding)
│       └── Containment/                      (Aggregation and composition "Has-A" associations)
│
└── 5. Dynamic Memory Management and Polymorphism/
    ├── DynamicMemory/                        (Scalar/array allocation, 2D arrays, dynamic objects, bad_alloc)
    ├── VirtualFunctions/                     (Early vs late binding, virtual functions, dynamic dispatch)
    ├── AbstractClasses/                      (Pure virtual functions, abstract classes, polymorphic arrays)
    └── VirtualDestructors/                   (Virtual destructors and pure virtual destructors)
```

## 🎯 Syllabus Concepts Covered

### Unit I: Concepts and Basics of C++ Programming & Functions
* OOP vs Procedural paradigms, Data hiding, Encapsulation
* `cin` and `cout` stream operations
* Differences between Structures, Unions, Enumerations, and Classes
* Inline vs Non-inline member functions
* Static data members and static member functions
* Function overloading, default parameters, and scope rules
* Friend functions and friend classes
* Reference variables vs pointers
* Call by value, call by address, call by reference
* Recursion in standalone functions and class member functions

### Unit II: Pointers, Reference Variables, Arrays and Strings
* Void pointers, pointer arithmetic, pointer to pointer (double pointer)
* Pointer safety: Dangling pointer, Wild pointer, Null pointer assignment
* Classes containing pointers, pointers to objects, `this` pointer
* Array of objects and heap allocation
* Multidimensional arrays in `main` and inside classes
* Pointer to data members and pointer to member functions
* Standard C++ `std::string` class, builtin functions, and modifiers

### Unit III: Constructors, Destructors and File Handling
* Manager functions: Constructors and Destructors
* Default constructors, parameterized constructors, copy constructors (deep vs shallow)
* Constructors with default arguments and ambiguity pitfalls
* Constructor overloading and dynamic constructors
* Initializer lists (mandatory initialization for `const` and reference members)
* `const` objects and `const` member functions
* `static` data members, static object counters, and static object lifetimes
* Advanced constructor mechanics: `explicit` keyword and delegating constructors
* Destructors: syntax, LIFO destruction order, and RAII dynamic cleanup
* Opening/closing files, file modes (`ios::in`, `ios::out`, `ios::binary`, `ios::app`)
* Sequential and random access file processing (`seekg`, `seekp`, `tellg`, `tellp`)
* Binary file operations with `class` and `struct` records (`write` and `read`)
* Stream state flags (`good()`, `fail()`, `bad()`, `eof()`, `clear()`)

### Unit IV: Operator Overloading, Type Conversion and Inheritance
* Unary operator overloading (prefix vs postfix `++` / `--`, negation `-`)
* Binary operator overloading (`+`, `-`, `==`, stream `<<` and `>>` via friend functions)
* Type conversions: Basic to Class, Class to Basic, Class to Class
* Inheritance types: Single, Multilevel, Multiple, Hierarchical
* Visibility modes: `public`, `protected`, `private`
* Overriding member functions
* Resolving ambiguities in inheritance and Virtual Base Class (Diamond problem)
* Order of execution of constructors and destructors
* Containment: Aggregation vs Composition ("Has-A" vs "Is-A")

### Unit V: Dynamic Memory Management and Polymorphism
* Dynamic memory allocation and deallocation using `new`, `delete`, `new[]`, and `delete[]`
* Dynamic 1D and 2D arrays (pointer-to-pointer `int**` allocation and cleanup)
* Dynamic objects and dynamic arrays of objects
* Dynamic constructors and resource cleanup
* Handling memory allocation failures via `std::bad_alloc` and `std::nothrow`
* Memory leaks, dangling pointers, and heap management
* Self-referential classes and linked structures
* Early (static/compile-time) binding vs Late (dynamic/run-time) binding
* Base class pointer to derived class object
* Virtual functions and dynamic dispatch mechanism (VTABLE & VPTR)
* Pure virtual functions and Abstract classes / interfaces
* Runtime polymorphism using an array of base class pointers
* Virtual destructors for safe polymorphic deletion
* Pure virtual destructors and out-of-class definitions

## 🚀 Goal

To build strong programming fundamentals using C++ and develop the problem-solving skills required for **Data Structures, Algorithms, competitive programming, and software development**.

## 📈 Progress

This repository is a record of my continuous practice. New concepts, programs, and challenges will be added as I progress.

> **Understand → Code → Debug → Improve**

---

**Made with ❤️ while learning C++.**
