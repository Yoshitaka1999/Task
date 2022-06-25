#include <stdio.h>
int main(void){
    // Your code here!
    int mathArray[5];
    int physicsArray[5];
    
    int scores[5][2] = {{72, 48}, {88, 39}, {72, 91}, {81, 82}, {68, 78}};
    
    
    
    for (int i = 0; i < 5; i += 1) {
        mathArray[i] = scores[i][0];
        physicsArray[i] = scores[i][1];

        printf("%d\n", scores[i][0]);
        printf("%d\n", scores[i][1]);
        printf("-----------------------\n");
    }
    
    printf("========================\n");
    for (int i = 0; i < 5; i += 1) {
        printf("%d\n", mathArray[i]);
    }
    printf("========================\n");
    for (int i = 0; i < 5; i += 1) {
        printf("%d\n", physicsArray[i]);
    }
    
    
    // printf("%d %d", scores[0][0], scores[1][0]);
}
