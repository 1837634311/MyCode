#include <stdio.h>
int main() {
    char isbn[14];
    short num[9], i = -1, j = 0, sum = 0;
    scanf("%s", isbn);
    do {
        i++;
        if (i == 1 || i == 5)
            continue;
        num[j] = isbn[i] - 48;
        j++;
    } while (i < 10);
    for (i = 0; i < 10; i++)
        sum += num[i] * (i + 1);
    sum %= 11;
    if (sum == isbn[12] - 48 || sum == isbn[12] - 78)
        printf("Right");
    else {
        if (sum != 10)
            isbn[12] = sum + 48;
        else
            isbn[12] = sum + 78;
        printf("%s", isbn);
    }
    return 0;
}