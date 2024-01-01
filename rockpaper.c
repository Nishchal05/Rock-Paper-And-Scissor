#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int game(char you, char chatbot)
{
    if (you == chatbot)
        return -1;
    if (you == 's' && chatbot== 'p')
        return 0;
        
    else if (you == 'p' && chatbot == 's') return 1;
    if (you == 's' && chatbot == 'z')
        return 1;
    else if (you == 'z' && chatbot == 's')
        return 0;
    if (you == 'p' && chatbot == 'z')
        return 0;
    else if (you == 'z' && chatbot == 'p')
        return 1;
}
int main()
{
    int n;
    char you, chatbot, result;
    srand(time(NULL));
    n = rand() % 100;
    if (n < 33)
        chatbot = 's';
 
    else if (n > 33 && n < 66)
        chatbot = 'p';
    else
        chatbot = 'z';
 
    printf("Enter a for STONE, b for Paper and c for Scissor");

    scanf("%c\n", &you);
    result = game(you, chatbot);
 
    if (result == -1) {
        printf("Game Draw!");
    }
    else if (result == 1) {
        printf("Wow! You have won\n");
    }
    else { 
        printf("Oh! You have lost the game!\n");
    }
        printf("YOu choose : %c and chatbot choose : %c\n",you, chatbot);
 
    return 0;
}