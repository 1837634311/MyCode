#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct student {
    short zh, math, en, total;
    char name[9];
} student;

int main() {
    short n;
    scanf("%hd", &n);
    student stu[n];
    for (int i = 0; i < n; i++) {
        scanf("%s %hd %hd %hd", &stu[i].name, &stu[i].zh, &stu[i].math, &stu[i].en);
        stu[i].total = stu[i].zh + stu[i].math + stu[i].en;
    }
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++) {
            if (abs(stu[i].total - stu[j].total) <= 10) {
                short cmpZh = abs(stu[i].zh - stu[j].zh);
                short cmpMath = abs(stu[i].math - stu[j].math);
                short cmpEn = abs(stu[i].en - stu[j].en);
                if (cmpZh <= 5 && cmpMath <= 5 && cmpEn <= 5)
                    printf("%s %s\n", stu[i].name, stu[j].name);
            }
        }
    return 0;
}