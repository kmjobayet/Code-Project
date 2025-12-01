#include <stdio.h>
#include <stdlib.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person p = {"Alice", 30};
    FILE *file = fopen("person.dat", "wb");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }
    fwrite(&p, sizeof(struct Person), 1, file);
    fclose(file);

    // Read back
    struct Person p2;
    file = fopen("person.dat", "rb");
    fread(&p2, sizeof(struct Person), 1, file);
    printf("Name: %s, Age: %d\n", p2.name, p2.age);
    fclose(file);
    return 0;
}