#include <stdio.h>

// Extern variable (global)
int extern_var = 100;

void autoStorageClass() {
    auto int auto_var = 10; // Automatically created and destroyed within this function
    printf("Auto Variable: %d\n", auto_var);
}

void externStorageClass() {
    // Accessing the global extern variable
    printf("Extern Variable (Global): %d\n", extern_var);
}

void staticStorageClass() {
    static int static_var = 20; // Retains value between calls
    printf("Static Variable: %d\n", static_var);
    static_var++; // Increment to observe persistence in subsequent calls
}

void registerStorageClass() {
    register int register_var = 30; // Stored in CPU register (if possible), faster access
    printf("Register Variable: %d\n", register_var);
}

int main() {
    printf("Demonstrating Storage Classes:\n\n");

    printf("1. Auto Storage Class:\n");
    autoStorageClass();
    
    printf("\n2. Extern Storage Class:\n");
    externStorageClass();

    printf("\n3. Static Storage Class (First Call):\n");
    staticStorageClass();
    printf("Static Storage Class (Second Call):\n");
    staticStorageClass();

    printf("\n4. Register Storage Class:\n");
    registerStorageClass();

    return 0;
}
