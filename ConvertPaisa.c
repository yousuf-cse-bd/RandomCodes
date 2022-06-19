#include <stdio.h>

int main(int argc, char const *argv[])
{
    float tk = 15.95;

    printf("TAKA: %0.2lf\n", tk);

    int paisa = tk * 100;
    printf("Paisa: %d\n", paisa);
    return 0;
}
