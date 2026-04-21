#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    int min;
    int max;
    double avg;

} stats;



stats minmax(int tomb[]){
    stats s;
    s.min = tomb[0];
    s.max = tomb[0];
    for (int i = 0; i < 10; i++)
    {
        if (tomb[i] > s.max)
        {
            s.max = tomb[i];
        }
    }

    


    for (int i = 0; i < 10; i++)
    {
        if (tomb[i] < s.min)
        {
            s.min = tomb[i];
        }
    }

    

    double sum = 0.0;
    for (int i = 0; i < 10; i++)
    {
        sum+=tomb[i];
    }
    s.avg = sum/10.0;
      
    return s;
}



int main()
{



    int tomb[10]; 
    
    srand(time(NULL)); // mindig ugyan azok a szamok lesznek, (time(NULL))-al lesz teljesen random
    
    for (int i = 0; i < 10; i++)
    {
        int number1 = (rand() % 90) + 10; // mivel a rand nagy számot adnak, modulo 90, ezzel 0-89 lesz a tartomany, majd eltoljuk 10-el

        tomb[i] = number1;
    }
    
    printf("A tomb elemei: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",tomb[i]);
    }
    printf("\n");

    
    
    stats s = minmax(tomb);
    printf("A legkissebb elem: %d \n A legnagyobb elem: %d \n Az elemek atlaga: %.2lf \n", s.min, s.max, s.avg);

    return 0;
}
