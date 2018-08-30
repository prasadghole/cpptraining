# cpptraining
Programs used for c++training

# Variable
Variable is a location in computer memory where you can store and retrive value.
C++ is strongly typed and statically typed lanaguage.
A pointer type is used store address of memory location.

Discuss issues with raw pointers.

## Type safety
Means during conversion , function parameter passing or return is storing appropriate type
of data which should not result in loss , incorrect interpretation or memory corruption.

# Uniform initialization

# C++ history
# Constructor
If a constructor also initializes a given data member, the member initializer is overridden.
# Constexpr
# static data members and function
Order of static variable initializatoin and destruction are undefined. 
## Static variable in function
Static local variables retain there values between entry and exit of their scope.

## Type aliases
````
using IntPtr = int*;
````
prefer type aliase over typedefs

# Casting
const_cast used to remove constant ness of object
Should only be used in case we don't have control over callee like libraries.

# Stream

stream buffer get flushed 
1. When flushed explicitely using endl
2. When buffer is full
3. stream goes out of scope and destructed
4. 
Not all streams are buffered cerr is un buffered


# Smart Pointer
The C++ smart pointer idiom resembles object creation in languages such as C#:
you create the object and then let the system take care of deleting it at the correct time. 
The difference is that no separate garbage collector runs in the background
memory is managed through the standard C++ scoping rules so that the runtime environment is faster and more efficient.



