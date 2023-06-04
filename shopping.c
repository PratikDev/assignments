#include<stdio.h>

float sellingPrice(float selling1, float selling2, float selling3){
    float selling = selling1 + selling2 + selling3;
    return selling;
}

float salaries(float salary1, float salary2, float salary3){
    float salary = salary1 + salary2 + salary3;
    return salary;
}

float buyingPrice(float buying1, float buying2, float buying3){
    float buying = buying1 + buying2 + buying3;
    return buying;
}

float otherCost(float other1, float other2, float other3){
    float other = other1 + other2 + other3;
    return other;
}

float profit(float selling, float buying, float salary, float other){
    float profit = selling - (buying + salary + other);
    return profit;
}

int main() {
    float product1 = 40000,product2 = 70000,product3 = 99000;
    float salary1 = 7000,salary2 = 2000, salary3 = 19000;
    float selling1 = 10000,selling2 = 956000,selling3 = 89000;
    float other1 = 4000,other2 = 1000,other3 = 900;

    float selling = sellingPrice(selling1, selling2, selling3);
    float salary = salaries(salary1, salary2, salary3);
    float buying = buyingPrice(product1, product2, product3);
    float other = otherCost(other1, other2, other3);

    float totalProfit = profit(selling, buying, salary, other);

    printf("Total profit is: %.2f\n", totalProfit);
}