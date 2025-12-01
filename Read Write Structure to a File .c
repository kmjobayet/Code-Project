#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int age;
} Person;

int main() {
    Person p = {"Alice", 30};
    FILE *file = fopen("person.dat", "wb");
    if (file) {
        fwrite(&p, sizeof(Person), 1, file);
        fclose(file);
    }
    
    Person p2;
    file = fopen("person.dat", "rb");
    if (file) {
        fread(&p2, sizeof(Person), 1, file);
        fclose(file);
        printf("Name: %s, Age: %d\n", p2.name, p2.age);
    }
    return 0;
}