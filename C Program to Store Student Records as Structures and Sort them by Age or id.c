#include <stdio.h>

typedef struct {
    char name[50];
    int age, id;
} Student;

void sortByAge(Student s[], int n) {
    for (int i = 0; i < n-1; i++)
        for (int j = 0; j < n-i-1; j++)
            if (s[j].age > s[j+1].age) {
                Student t = s[j]; s[j] = s[j+1]; s[j+1] = t;
            }
}

int main() {
    int n; scanf("%d", &n);
    Student s[n];
    for (int i = 0; i < n; i++)
        scanf("%s %d %d", s[i].name, &s[i].age, &s[i].id);
    sortByAge(s, n);
    for (int i = 0; i < n; i++)
        printf("%s %d %d\n", s[i].name, s[i].age, s[i].id);
    return 0;
}