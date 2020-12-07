/* If the total selling price of 15 items and the total profit earned
on them is input through the keyboard, write a program to
find the cost price of one item.
Author Majid Mujahid Hussain dated 7 December 2020  */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float selling_price, profit, items;
    printf("Hello world!\n");
    printf("Please enter the Total selling price of all the same kind of items \n");
    scanf("%f", &selling_price);
    printf("Please enter the total Profit earned on the items.\n");
    scanf("%f", &profit);
    printf("Please enter the number of items.");
    scanf("%f", &items);

    printf("\n The cost of one item is equal to %.1f", (selling_price - profit) / items);

    return 0;
}
