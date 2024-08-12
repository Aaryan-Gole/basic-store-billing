#include <stdio.h>
#define MAX 50 


typedef struct item_details {
    char itemName[30]; 
    int quantity; 
    float price; 
    float totalAmount; 
} item;

int main()
{
    item thing[MAX]; 
    int i, choice;
    int count = 0;
    float amount = 0.0f;

    i = 0;
    
    do {
        printf("Enter item details [%2d]:\n", i + 1);

        printf("Item name?  ");
        fgets(thing[i].itemName, 30, stdin);

        printf("Price? ");
        scanf("%f", &thing[i].price);

        printf("Quantity?  ");
        scanf("%d", &thing[i].quantity);

        thing[i].totalAmount = (float)thing[i].quantity * thing[i].price;
        amount += thing[i].totalAmount;

        i++;
        count++; 

        printf("\nWant to more items (press 1) or want nothing from store (press 2): ");
        scanf("%d", &choice);

        getchar();

    } while (choice == 1);

    
    printf("the items you have purchased are:\n");
    for (i = 0; i < count; i++) {
        printf("%-10s %.2f \t %2d \t %.2f\n", thing[i].itemName, thing[i].price, thing[i].quantity, thing[i].totalAmount);
    }
    printf("Total amount: %.2f\n", amount);

    printf("if you want to divide in friends (press 1 for yes or press 2 for no): ");
    scanf("%d", &choice);
    if (choice == 1) {
        printf("How many friends? ");
        scanf("%d", &i);
        printf("Each friend will have to pay: %.2f\n", (amount / (float)i));
    }

    printf("Thanks for choosing DMART,Indore.... Enjoy your day!!\n");
    return 0;
}
