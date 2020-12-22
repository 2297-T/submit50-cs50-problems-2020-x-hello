#include <cs50.h>
#include <stdio.h>

int main(void)
{

//declare variables
int i;
bool con = false;

//input appropriate number
do
{
i = get_int("enter an mumber from 1 to 8: ");

    if (i < 1 || i > 8)
    {
        printf("invalid number try again; \n");
        con = false;
    }

    else
    {
        con = true;
    }
}
while (con == false);
//draw half pyramid

//establish row indexing
for (int row = 0; row < i; row++)
{

//print spaces
for (int space = 1; space < i - row; space++)
{
printf(" ");
}

//print hashes
for (int hash = -1; hash < row + 1; hash++)
{
printf("#");
}
//new line, return to beginning of loop
printf("\n");
}

}
