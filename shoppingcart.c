#include <stdio.h>
int main(){
    // shopping cart program
    char item[50]= "";
    float price =0.0f;
    int quantity = 0;
    char currency[] ="rs";
    float total = 0.0f;

    printf("what itme would u like to buy;");
    fgets(item,50,stdin);
    printf("whats the price for each item?");
    scanf("%f", &price);
    printf("\nhow mayn would u like?");
    scanf("%d", &quantity);

    total= price * quantity;

    printf("your total is :%.2f %s",total,currency);
    printf("\nyou bought %d %s at our shopping mall, please visit again", quantity,item);

    return 0;
}
