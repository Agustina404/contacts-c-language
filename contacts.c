#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("What is your name? ");
    int age = get_int("What is your age? ");
    string number = get_string("What is your phone number? ");
    string country = get_string("Where are you from? ");

    printf("Name: %s\n", name);
    printf("Age: %i\n", age);
    printf("Phone number: %s\n", number);
    printf("Country: %s\n", country);

    return 0;
}