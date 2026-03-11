//1
#include <stdio.h>

int main()
{
    int balance, withdraw;

    printf("Enter available balance: ");
    scanf("%d", &balance);

    printf("Enter withdrawal amount: ");
    scanf("%d", &withdraw);

    if(withdraw <= balance)
    {
        printf("Transaction Successful");
    }
    else
    {
        printf("Insufficient Balance");
    }

    return 0;
}
//2
#include <stdio.h>

int main()
{
    int bill, dueDate, paymentDate;

    printf("Enter bill amount: ");
    scanf("%d", &bill);

    printf("Enter due date: ");
    scanf("%d", &dueDate);

    printf("Enter payment date: ");
    scanf("%d", &paymentDate);

    if(paymentDate > dueDate)
    {
        bill = bill + 100;
    }

    printf("Total EB Bill = %d", bill);

    return 0;
}
//3
#include <stdio.h>

int main()
{
    float salary, bonus, finalSalary;

    printf("Enter salary: ");
    scanf("%f", &salary);

    if(salary > 50000)
    {
        bonus = salary * 0.10;
    }
    else
    {
        bonus = salary * 0.05;
    }

    finalSalary = salary + bonus;

    printf("Final Salary = %.2f", finalSalary);

    return 0;
}
//4
#include <stdio.h>

int main()
{
    int speed, excess, fine;

    printf("Enter vehicle speed: ");
    scanf("%d", &speed);

    if(speed > 80)
    {
        excess = speed - 80;
        fine = excess * 20;

        printf("Over Speeding - Fine Applied\n");
        printf("Fine Amount = %d", fine);
    }
    else
    {
        printf("Within Speed Limit");
    }

    return 0;
}
//5
#include <stdio.h>

int main()
{
    int house;

    printf("Enter house number: ");
    scanf("%d", &house);

    if(house % 2 == 0)
    {
        printf("Sweet Home");
    }
    else
    {
        printf("Brilliant Home");
    }

    return 0;
}
//6
#include <stdio.h>

int main()
{
    int income, loanAmount;

    printf("Enter monthly income: ");
    scanf("%d", &income);

    if(income > 25000)
    {
        loanAmount = income * 5;
        printf("Eligible for Loan\n");
        printf("Eligible Loan Amount = %d", loanAmount);
    }
    else
    {
        printf("Not Eligible for Loan");
    }

    return 0;
}
//7
#include <stdio.h>

int main()
{
    int password, storedPassword = 10052008;

    printf("Enter password: ");
    scanf("%d", &password);

    if(password == storedPassword)
    {
        printf("Login Successful");
    }
    else
    {
        printf("Incorrect Password");
    }

    return 0;
}
//8
#include <stdio.h>

int main()
{
    int year;

    printf("Enter year: ");
    scanf("%d", &year);

    if(year % 4 == 1)
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not a Leap Year");
    }

    return 0;
}
//9
#include <stdio.h>

int main()
{
    int age, wait;

    printf("Enter age: ");
    scanf("%d", &age);

    if(age >= 18)
    {
        printf("Eligible to Vote");
    }
    else
    {
        wait = 18 - age;
        printf("Not Eligible\n");
        printf("You must wait %d more years", wait);
    }

    return 0;
}
//10
#include <stdio.h>

int main()
{

    float amount, discount, finalAmount;

    printf("Enter purchase amount: ");
    scanf("%f", &amount);

    if(amount > 2000)
    {
        discount = amount * 0.05;
    }
    else
    {
        discount = 0;
    }

    finalAmount = amount - discount;

    printf("Final Payable Amount = %.2f", finalAmount);

    return 0;
}