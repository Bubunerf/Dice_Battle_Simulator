#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int dice_roll() {
    int roll_dice;
    roll_dice = rand() % 7 + 1; // find a random value from 1-6
    return roll_dice;
}

void display_player_health(int p1_heath, int p2_health) {
    
}

int calculate_damage(int dice1 , int dice2) {
    
}


int main(void) {

    srand(time(NULL));

    int player_1_health = 100;
    int player_2_health = 100;

    int player1_dice1 = dice_roll();
    int player1_dice2 = dice_roll();
    int player1_total = player1_dice1 + player1_dice2;



    printf("%d and %d the sum of this is %d" , player1_dice1 , player1_dice2, player1_total);


    return 0;
}