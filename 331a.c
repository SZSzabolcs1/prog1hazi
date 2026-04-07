#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void minmax(int tomb[], int *pMax, int *pMin, double *pAvg){
    
    for (int i = 0; i < 10; i++)
    {
        if (tomb[i] > *pMax)
        {
            *pMax = tomb[i];
        }
    }

    


    for (int i = 0; i < 10; i++)
    {
        if (tomb[i] < *pMin)
        {
            *pMin = tomb[i];
        }
    }

    

    double sum = 0.0;
    for (int i = 0; i < 10; i++)
    {
        sum+=tomb[i];
    }
    *pAvg = sum/10.0;
      

}



int main()
{
    int tomb[10]; 
    
    srand(time(0));
    
    for (int i = 0; i < 10; i++)
    {
        int number1 = (rand() % 90) + 10;

        tomb[i] = number1;
    }
    
    printf("A tomb elemei: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",tomb[i]);
    }
    printf("\n");
    int min = 999;
    int max = 0;
    double avg = 999;

    int *pMin = &min;
    int *pMax = &max;
    double *pAvg = &avg;
    
    minmax(tomb, &max, &min, &avg);

    printf("A legkissebb elem: %d \n A legnagyobb elem: %d \n Az elemek atlaga: %.2lf \n", min, max, avg);

    return 0;
}
