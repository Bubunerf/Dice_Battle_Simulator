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
    int sum = dice1 + dice2;
    return sum;
    
}


int main(void) {

    srand(time(NULL));

    int player_1_health = 100;
    int player_2_health = 100;

    int player1_dice1 = dice_roll();
    int player1_dice2 = dice_roll();
    int dice_sum = calculate_damage(player1_dice1, player1_dice2);
    
    printf("=====Dice Battle=====\n\n");

    printf("Player 1's turn!\n");
    printf("Dice 1: %d\n" , player1_dice1);
    printf("Dice 1: %d\n" , player1_dice2);
    printf("Total damage: %d", dice_sum);

    


    


    return 0;
}