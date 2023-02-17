// syntax and data types
#include <iostream>

class my_first_class {
   public:
    // Enumerated data type
    enum Animal { CAT, DOG, ELEPHANT, LION, PANDA };

    // Built-in data types
    int my_int;
    double my_double;
    char my_char;
    bool my_bool;

    // User-defined data type (class)
    struct my_struct {
        int field1;
        double field2;
    };

    // Pointer data type
    int* my_pointer;

    // Reference data type
    int& my_reference;

    // Member function
    void my_function();
};

void my_first_class::my_function() {
    std::cout << "Hello, world!" << std::endl;
}

int main() {
    my_first_class obj;

    // Set values for built-in data types
    obj.my_int = 42;
    obj.my_double = 3.14;
    obj.my_char = 'A';
    obj.my_bool = true;

    // Allocate memory for pointer data type
    obj.my_pointer = new int[10];

    // Set values for struct data type
    my_first_class::my_struct myStruct;
    myStruct.field1 = 10;
    myStruct.field2 = 3.14159;

    // Set reference to built-in data type
    int myValue = 123;
    obj.my_reference = myValue;

    // Call member function
    obj.my_function();

    // Use enumerated data type
    my_first_class::Animal myPet = my_first_class::CAT;

    // Print values of data types
    std::cout << "my_int: " << obj.my_int << std::endl;
    std::cout << "my_double: " << obj.my_double << std::endl;
    std::cout << "my_char: " << obj.my_char << std::endl;
    std::cout << "my_bool: " << obj.my_bool << std::endl;
    std::cout << "my_pointer: " << obj.my_pointer << std::endl;
    std::cout << "myStruct.field1: " << myStruct.field1 << std::endl;
    std::cout << "myStruct.field2: " << myStruct.field2 << std::endl;
    std::cout << "my_reference: " << obj.my_reference << std::endl;
    std::cout << "myPet: " << myPet << std::endl;

    // Deallocate memory for pointer data type
    delete[] obj.my_pointer;

    return 0;
}