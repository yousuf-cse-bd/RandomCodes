#include <stdio.h>

int main(int argc, char const *argv[])
{
    // typedef int unit;
    // unit = 10;
    // //it is not working
    // printf("%d\n", unit);
    // return 0;

    enum day{Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
    enum day week_st, week_end;

    week_st = Monday;
    week_end = Friday;

    printf("Start: %d\n", week_st);
    printf("End: %d\n", week_end);

    if(week_st == Tuesday)
    {
        week_end = Saturday;
    }

    auto int count;
    register char ch;
    static int x;
    extern long total;

    printf("Auto Int = %d\n", count);
    printf("Register = %c\n", ch);
    printf("Static = %d\n", x);
    // printf("Extern = %ld\n", total);
}

