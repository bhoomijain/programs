#include <stdio.h>

void main()
{
    int choice;
    printf("Enter the number for food item");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("Food item- Pizza\nPrize- Rs 239");
        break;
        case 2:
        printf("Food item- Burger\nPrize- Rs 129");
        break;
        case 3:
        printf("Food item- Pasta\nPrize- Rs 179");
        break;
        case 4:
        printf("Food item- French Fries\nPrize- Rs 99");
        break;
        case 5:
        printf("Food item- Sandwich\nPrize Rs 149");
        break;
        default:
        printf("Invalid choice!");
    }

    
}
