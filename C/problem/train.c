#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void defStudent(char*, int, int);
typedef struct student {
    char* name;
    int age, score;
} student;

int main() {
    int n, age, score;
    char name[31];
    scanf("%d\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%30s %d %d", name, age, score);
        defStudent
    }
    return 0;
}

void defStudent(char name[], int age, int score) {
    student* stu;
    stu = (student*)malloc(sizeof(student));
    stu->name = (char*)malloc(strlen(name) + 1); // 为名字分配足够的空间
    strcpy(stu->name, name); // 正确复制字符串
    stu->age = age;
    stu->score = score;
    return stu;
}