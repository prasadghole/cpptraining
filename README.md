# cpptraining
Programs used for c++training

# Variable
Variable is a location in computer memory where you can store and retrive value.
# C++ history
# Constructor
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


