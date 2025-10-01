#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profit, loss;
    float profitPercentage, lossPercentage;

    
    printf("Enter Cost Price: ");
    scanf("%f", &costPrice);

    printf("Enter Selling Price: ");
    scanf("%f", &sellingPrice);

   
    if(sellingPrice > costPrice) {
        profit = sellingPrice - costPrice;
        profitPercentage = (profit / costPrice) * 100;
        printf("Profit = %.2f\n", profit);
        printf("Profit Percentage = %.2f%%\n", profitPercentage);
    }
    else if(costPrice > sellingPrice) {
        loss = costPrice - sellingPrice;
        lossPercentage = (loss / costPrice) * 100;
        printf("Loss = %.2f\n", loss);
        printf("Loss Percentage = %.2f%%\n", lossPercentage);
    }
    else {
        printf("No Profit No Loss.\n");
    }

    return 0;
}
