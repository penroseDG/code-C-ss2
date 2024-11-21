#include <stdio.h>

int main() {
    // Kieu int: D�ng de luu c�c so nguy�n (integer)
    int age = 25;
    
    // Kieu float: D�ng de luu c�c so thuc (so c� phan thap ph�n)
    float pi = 3.14f; 
    
    // Kieu double: D�ng de luu c�c so thuc voi do ch�nh x�c cao hon float
    double gravity = 9.80665; 
    
    // Kieu char: D�ng de luu mot k� tu (character)
    char grade = 'A'; 
    
    // Kieu _Bool: D�ng de luu gi� tri logic (true hoac false)
    _Bool isStudent = 1; 
   
    // In gi� tri cac bien  
    printf("Age: %d\n", age);
    printf("Pi: %.2f\n", pi);
    printf("Gravity: %.5lf\n", gravity);
    printf("Grade: %c\n", grade);
    printf("Is Student: %d\n", isStudent);
 
    return 0;
}

