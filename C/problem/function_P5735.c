#include <stdio.h>
#include <math.h>

float dis(float x1, float y1, float x2, float y2) {
    return sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
}

int main() {
    float pos[3][2], res = 0;
    for (int i = 0; i < 3; i++) {
        scanf("%f %f", &pos[i][0], &pos[i][1]);
    }
    for (int i = 0; i < 3; i++) {
        res += dis(pos[i % 3][0], pos[i % 3][1], pos[(i + 1) % 3][0], pos[(i + 1) % 3][1]);
    }
    printf("%.2f", res);
    return 0;
}