#include <stdio.h>
#include <unistd.h>

int main()
{
    // Initiating variables here
     int CustomerID;
     double Amount, rate;
     double _Amount;
     double SubCharge = 0.15;
     double SubAmount;
     double UnitConsumed = 0;
     double TotalAmount;
     char name[20];

     printf("\n");

     printf("Welcome To Electricity Bill Calculator \n");
     printf("\n");
     printf("Can You Please Enter Your Good Name > ");
     scanf("%s", name);
     printf("Can You Please Enter Your ID Number > ");
     scanf("%d", &CustomerID);
     printf("Enter The Amount of units Consumed  > ");
     scanf("%lf", &UnitConsumed);



     if (199 > UnitConsumed)
     {
         _Amount = (UnitConsumed*1.2);
         rate = 1.2;
         TotalAmount = (_Amount);
     }

     if ((200 <= UnitConsumed) && (400 > UnitConsumed))
     {
         _Amount = (UnitConsumed*1.5);
         rate = 1.5;
         TotalAmount = (_Amount);
     }

     if ((400 <= UnitConsumed) && (600 > UnitConsumed))
     {
         _Amount = (UnitConsumed*1.8);
         rate = 1.8;
         SubAmount = (SubCharge*_Amount);
         TotalAmount = (_Amount + SubAmount);
     }

     if (600 <= UnitConsumed)
     {
         _Amount = (UnitConsumed*2.0);
         rate = 2.0;
         SubAmount = (SubCharge*_Amount);
         TotalAmount = (_Amount + SubAmount);
     }

     printf(" \n");
     printf(" \n");

     printf("Customer IDNO :");
     printf("%d \n", CustomerID);

     printf("Name :");
     printf("%s \n", name);

     printf("Units Consumed :");
     printf("%lf \n", UnitConsumed);

     printf("Amount :");
     printf("%lf \n", _Amount);

     printf("Amount Charges @ ");
     printf("%lf", rate);
     printf(" Per unit \n");

     printf("Subcharge Amount :");
     printf("%lf \n", SubAmount);

     printf("Net Amount Paid By The Customer :");
     printf("%lf \n", TotalAmount);

     printf("\n");
     printf("The program will exit automatically in 10sec");
     printf("\n");
     sleep(11);

     return 0;


}
