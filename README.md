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
│   ├── Constructor/                          (Default, parameterized, copy, deep/shallow, default args, destructors)
│   └── FileHandling/                         (Modes, sequential/random access, binary class & structure I/O, seek/tell)
│
├── 4. Operator Overloading, Type Conversion and Inheritance/
│   ├── OperatorOverloading_TypeConversion/   (Unary/binary overloading, basic-to-class, class-to-basic, class-to-class)
│   └── Inheritance/                          (Single, multilevel, multiple, hierarchical, virtual base class, execution order, composition)
│
└── 5. Dynamic Memory Management and Polymorphism/
    ├── DynamicMemoryBasic.cpp                (Scalar & 1D dynamic allocation, new, delete, delete[])
    ├── Dynamic2DArray.cpp                    (Dynamic 2D array allocation via double pointers & deallocation)
    ├── DynamicObject.cpp                     (Dynamic memory allocation for objects and arrays of objects)
    ├── DynamicConstructor.cpp                (Allocating resources dynamically within constructors)
    ├── MemoryAllocationFailure.cpp           (Allocation failure handling via bad_alloc & nothrow)
    ├── SelfReferrentialClass.cpp             (Self-referential class structures and node linking)
    ├── EarlyVsLateBinding.cpp                (Compile-time static binding vs runtime dynamic binding)
    ├── VirtualFunctions.cpp                  (Virtual functions and runtime polymorphism)
    ├── PureVirtual.cpp                       (Abstract classes and pure virtual functions)
    ├── PureVirtual2.cpp                      (Hierarchical pure virtual implementation with employee salary model)
    ├── PolymorphicArray.cpp                  (Array of base class pointers for polymorphic dispatch)
    ├── VirtualDestructors.cpp                (Virtual destructors to prevent partial deletion leaks)
    └── PureVirtualDestructor.cpp             (Abstract class creation via pure virtual destructor)
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
* Initializer lists
* Opening/closing files, file modes (`ios::in`, `ios::out`, `ios::binary`, `ios::app`)
* Sequential and random access file processing (`seekg`, `seekp`, `tellg`, `tellp`)
* Binary file operations with `class` and `struct` records (`write` and `read`)

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
