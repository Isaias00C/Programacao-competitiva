#include <stdio.h>

int maxNumber(int vector[6]){
    int maxNumber = vector[0];
    maxNumber = maxNumber < vector[1] ? vector[1] : maxNumber;
    maxNumber = maxNumber < vector[2] ? vector[2] : maxNumber;
    maxNumber = maxNumber < vector[3] ? vector[3] : maxNumber;
    maxNumber = maxNumber < vector[4] ? vector[4] : maxNumber;
    maxNumber = maxNumber < vector[5] ? vector[5] : maxNumber;
}

int main(){
    int skills[6][6];
    
    for(int player = 0; player < 6; player++){
        for(int function = 0; function < 6; function++){
            scanf("%d", &skills[player][function]);
        }
    }

    int sumSkills = 0;

    for(int player = 0; player < 6; player++){
        for(int function = 0; function < 6; function++){
            maxNumber()
        }
    }
}