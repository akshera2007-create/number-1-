#include <stdio.h>

int main() {
    int m1,m2,m3, totlal;

    printf("Enter marks of 3 subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    total = m1 + m2 + m3;

    printf("Total Marks = %d", total);

    return 0;
}


//2
#include <stdio.h>

int main() {
    int previous, current, units;

    printf("Enter previous reading: ");
    scanf("%d", &previous);

    printf("Enter current reading: ");
    scanf("%d", &current);

    units = current - previous;

    printf("Units Consumed = %d", units);

    return 0;
}

#include <stdio.h>

int main() {
    int length, breadth, area;

    printf("Enter length and breadth: ");
    scanf("%d %d", &length, &breadth);

    area = length * breadth;

    printf("Area of Park = %d", area);

    return 0;
}#include <stdio.h>

int main() {
    float morning, afternoon, evening, average;

    printf("Enter morning temperature: ");
    scanf("%f", &morning);

    printf("Enter afternoon temperature: ");
    scanf("%f", &afternoon);

    printf("Enter evening temperature: ");
    scanf("%f", &evening);

    average = (morning + afternoon + evening) / 3;

    printf("Average Temperature = %.2f", average);

    return 0;
}
#include <stdio.h>

int main() {
    int minutes;
    float hours;

    printf("Enter duration in minutes: ");
    scanf("%d", &minutes);

    hours = minutes / 60.0;

    printf("Duration in hours = %.2f", hours);

    return 0;
}
#include <stdio.h>

int main() {
    float price, discount_percent, discount;

    printf("Enter product price: ");
    scanf("%f", &price);

    printf("Enter discount percentage: ");
    scanf("%f", &discount_percent);

    discount = (price * discount_percent) / 100;

    printf("Discount Amount = %.2f", discount);

    return 0;
}
#include <stdio.h>

int main() {
    int hours, minutes, seconds;

    printf("Enter hours: ");
    scanf("%d", &hours);

    printf("Enter minutes: ");
    scanf("%d", &minutes);

    seconds = (hours * 3600) + (minutes * 60);

    printf("Total time in seconds = %d", seconds);

    return 0;
}
#include <stdio.h>

int main() {
    int boys, girls, total;

    printf("Enter number of boys: ");
    scanf("%d", &boys);

    printf("Enter number of girls: ");
    scanf("%d", &girls);

    total = boys + girls;

    printf("Total Strength = %d", total);

    return 0;
}
#include <stdio.h>

int main() {
    float obtained, maximum, percentage;

    printf("Enter obtained marks: ");
    scanf("%f", &obtained);

    printf("Enter maximum marks: ");
    scanf("%f", &maximum);

    percentage = (obtained / maximum) * 100;

    printf("Percentage = %.2f%%", percentage);

    return 0;
}
#include <stdio.h>

int main() {
    int w1, w2, temp;

    printf("Enter weight of box 1: ");
    scanf("%d", &w1);

    printf("Enter weight of box 2: ");
    scanf("%d", &w2);

    temp = w1;
    w1 = w2;
    w2 = temp;

    printf("After swapping:\n");
    printf("Weight of box 1 = %d\n", w1);
    printf("Weight of box 2 = %d\n", w2);

    return 0;
}