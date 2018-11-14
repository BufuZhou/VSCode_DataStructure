#include <stdio.h>
#include <time.h>

void PrintN(int N);
void PrintN_1(int N);

clock_t start, stop;
double duration1, duration2;

int main(void)
{
    int ii = 30000;

    start = clock();
    PrintN(ii);
    stop = clock();
    duration1 = ((double) (stop - start))  / CLK_TCK;
    
    start = clock();
    PrintN_1(ii);
    stop = clock();
    duration2 = ((double) (stop - start)) / CLK_TCK;
    
    printf("%.2f\n", duration1);
    printf("%.2f\n", duration2);


    return 0;
}

void PrintN(int N)
{
    int i;
    for(i = 1; i <= N; i++)
    {
        printf("%d\n", i);
    }
    return ;
}

void PrintN_1(int N)
{
    if(N)
    {
        PrintN(N - 1);
        printf("%d\n", N);
    }
    return ;
}
