#include <stdio.h>

int main() {
    // Kieu int: Dùng de luu các so nguyên (integer)
    int age = 25;
    
    // Kieu float: Dùng de luu các so thuc (so có phan thap phân)
    float pi = 3.14f; 
    
    // Kieu double: Dùng de luu các so thuc voi do chính xác cao hon float
    double gravity = 9.80665; 
    
    // Kieu char: Dùng de luu mot ký tu (character)
    char grade = 'A'; 
    
    // Kieu _Bool: Dùng de luu giá tri logic (true hoac false)
    _Bool isStudent = 1; 
   
    // In giá tri cac bien  
    printf("Age: %d\n", age);
    printf("Pi: %.2f\n", pi);
    printf("Gravity: %.5lf\n", gravity);
    printf("Grade: %c\n", grade);
    printf("Is Student: %d\n", isStudent);
 
    return 0;
}

