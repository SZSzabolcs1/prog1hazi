#include <stdio.h>

int contains(const int n, const int tomb[], const int k){
    for (int i = 0; i<n; ++i){
        if (tomb[i]==k){
            return 1;
        }
    }
    return 0;
}


int main()
{
int t1[5]= {1,3,5,3,1};
int t1_meret = 5;
int keresett = 8;

int benne_van = contains(t1_meret, t1, keresett);
printf("t1-ben benne van a %d?: %s \n", keresett, benne_van ? "igen" : "nem");
return 0;    
}