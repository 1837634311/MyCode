#include <stdio.h>
#include <string.h>
typedef struct {
    int age, score;
    char name[20];
} student;

int main() {
    student stu[5];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s %d %d", &stu[i].name, &stu[i].age, &stu[i].score);
        stu[i].age += 1;
        stu[i].score = stu[i].score * 1.2 > 600 ? 600 : stu[i].score * 1.2;
    }
    for (int i = 0; i < n; i++)
        printf("%s %d %d\n", stu[i].name, stu[i].age, stu[i].score);
    return 0;
}