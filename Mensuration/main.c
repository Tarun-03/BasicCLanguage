#include <stdio.h>
#include <stdlib.h>

int main()
{
char Exit;
double answer;
char keyword[100];
double radius;
double side;
double length;
double breadth;
double height;
double pi = 3.14;

char choice;
	do
	{

printf("Welcome to the Mensuration calculator (BY GAMPALA TARUN)\n");
printf("\n");
printf("FULLSCREEN THIS TAB\n");
printf("\n");
printf("Type help to know how to use this program\n");
printf("\n");
printf("\n");
printf("Enter the KEYWORD > ");
scanf("%s", keyword);

if(strcmp(keyword, "help") == 0)
    {
        system("clear");
        printf("\n");
        printf(" __________________________________________________________________\n");
        printf("|USAGE                              |           KEYWORD            |\n");
        printf("|-----------------------------------|------------------------------|\n");
        printf("|To calculate LSA of Cube           |           lsaofcube          |\n");
        printf("|To calculate TSA of Cube           |           tsaofcube          |\n");
        printf("|To calculate volume of Cube        |           volumeofcube       |\n");
        printf("|-----------------------------------|------------------------------|\n");
        printf("|To calculate LSA of Cuboid         |           lsaofcuboid        |\n");
        printf("|To calculate TSA of Cuboid         |           tsaofcuboid        |\n");
        printf("|To calculate Volume of Cuboid      |           volumeofcuboid     |\n");
        printf("|-----------------------------------|------------------------------|\n");
        printf("|To calculate LSA of Cylinder       |           lsaofcylinder      |\n");
        printf("|To calculate TSA of Cylinder       |           tsaofcylinder      |\n");
        printf("|To calculate Volume of Cylinder    |           volumeofcylinder   |\n");
        printf("|-----------------------------------|------------------------------|\n");
        printf("|To calculate LSA of Cone           |           lsaofcone          |\n");
        printf("|To calculate TSA of Cone           |           tsaofcone          |\n");
        printf("|To calculate Volume of Cone        |           volumeofcone       |\n");
        printf("|-----------------------------------|------------------------------|\n");
        printf("|To calculate LSA of Sphere         |           lsaofsphere        |\n");
        printf("|To calculate TSA of Sphere         |           tsaofsphere        |\n");
        printf("|To calculate Volume of Sphere      |           volumeofsphere     |\n");
        printf("|-----------------------------------|------------------------------|\n");
        printf("|To calculate LSA of HemiSphere     |           lsaofhemisphere    |\n");
        printf("|To calculate TSA of HemiSphere     |           tsaofhemisphere    |\n");
        printf("|To calculate Volume of HemiSphere  |           volumeofhemisphere |\n");
        printf("|___________________________________|______________________________|\n");
        printf("\n");
}


if(strcmp(keyword, "lsaofcube") == 0)
     {
        printf("\n");
        printf("Enter the value of side > ");
        scanf("%lf", &side);
        printf("\n");
        answer = (4*side*side);
        system("clear");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("|LSA OF CUBE is %lf | \n", answer);
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
     }

if(strcmp(keyword, "tsaofcube") == 0)
     {
        printf("\n");
        printf("Enter the value of side > ");
        scanf("%lf", &side);
        printf("\n");
        answer = (6*side*side);
        system("clear");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("|TSA OF CUBE is %lf | \n", answer);
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
     }


if(strcmp(keyword, "volumeofcube") == 0)
     {
        printf("\n");
        printf("Enter the value of side > ");
        scanf("%lf", &side);
        printf("\n");
        answer = (side*side*side);
        system("clear");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("|VOLUME OF CUBE is %lf | \n", answer);
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
     }

if(strcmp(keyword, "lsaofcuboid") == 0)
     {
        printf("\n");
        printf("Enter the value of Length > ");
        scanf("%lf", &length);
        printf("\n");
        printf("Enter the value of Height > ");
        scanf("%lf", &height);
        printf("\n");
        printf("Enter the value of Breadth > ");
        scanf("%lf", &breadth);
        printf("\n");
        answer = (2*length*(length+breadth));
        system("clear");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("|LSA OF CUBOID is %lf | \n", answer);
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
     }

if(strcmp(keyword, "tsaofcuboid") == 0)
     {
        printf("\n");
        printf("Enter the value of Length > ");
        scanf("%lf", &length);
        printf("\n");
        printf("Enter the value of Height > ");
        scanf("%lf", &height);
        printf("\n");
        printf("Enter the value of Breadth > ");
        scanf("%lf", &breadth);
        printf("\n");
        answer = (2*((length*breadth)+(breadth*height)+(height*length)));
        system("clear");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("|TSA OF CUBOID is %lf | \n", answer);
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");

     }


if(strcmp(keyword, "volumeofcuboid") == 0)
     {
        printf("\n");
        printf("Enter the value of Length > ");
        scanf("%lf", &length);
        printf("\n");
        printf("Enter the value of Height > ");
        scanf("%lf", &height);
        printf("\n");
        printf("Enter the value of Breadth > ");
        scanf("%lf", &breadth);
        printf("\n");
        answer = (length*length*breadth);
        system("clear");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("|VOLUME OF CUBOID is %lf | \n", answer);
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
     }




if(strcmp(keyword, "lsaofcylinder") == 0)
     {
        printf("\n");
        printf("Enter the value of radius > ");
        scanf("%lf", &radius);
        printf("\n");
        printf("Enter the value of Height > ");
        scanf("%lf", &height);
        printf("\n");
        answer = (2*pi*radius*height);
        system("clear");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("|LSA OF CYLINDER is %lf | \n", answer);
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
     }


if(strcmp(keyword, "tsaofcylinder") == 0)
     {
        printf("\n");
        printf("Enter the value of radius > ");
        scanf("%lf", &radius);
        printf("\n");
        printf("Enter the value of Height > ");
        scanf("%lf", &height);
        printf("\n");
        answer = (2*pi*radius*(radius+height));
        system("clear");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("|TSA OF CYLINDER is %lf | \n", answer);
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
     }





if(strcmp(keyword, "volumeofcylinder") == 0)
     {
        printf("\n");
        printf("Enter the value of radius > ");
        scanf("%lf", &radius);
        printf("\n");
        printf("Enter the value of Height > ");
        scanf("%lf", &height);
        printf("\n");
        answer = (pi*radius*radius*height);
        system("clear");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("|VOLUME OF CYLINDER is %lf | \n", answer);
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
     }



if(strcmp(keyword, "lsaofcone") == 0)
     {
        printf("\n");
        printf("Enter the value of Radius > ");
        scanf("%lf", &radius);
        printf("\n");
        printf("Enter the value of Length > ");
        scanf("%lf", &length);
        printf("\n");
        answer = (pi*radius*length);
        system("clear");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("|LSA OF CONE is %lf | \n", answer);
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
     }



if(strcmp(keyword, "tsaofcone") == 0)
     {
        printf("\n");
        printf("Enter the value of Radius > ");
        scanf("%lf", &radius);
        printf("\n");
        printf("Enter the value of Length > ");
        scanf("%lf", &length);
        printf("\n");
        answer = (pi*radius*(length+radius));
        system("clear");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("|TSA OF CONE is %lf | \n", answer);
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
     }





if(strcmp(keyword, "volumeofcone") == 0)
     {
        printf("\n");
        printf("Enter the value of Radius > ");
        scanf("%lf", &radius);
        printf("\n");
        printf("Enter the value of Height > ");
        scanf("%lf", &height);
        printf("\n");
        answer = ((pi*radius*radius*height)/3);
        system("clear");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("|VOLUME OF CONE is %lf | \n", answer);
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
     }


if(strcmp(keyword, "lsaofsphere") == 0)
     {
        printf("\n");
        printf("Enter the value of radius > ");
        scanf("%lf", &radius);
        printf("\n");
        answer = (4*pi*radius*radius);
        system("clear");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("|LSA OF SPHERE is %lf | \n", answer);
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
     }






if(strcmp(keyword, "tsaofsphere") == 0)
     {
        printf("\n");
        printf("Enter the value of radius > ");
        scanf("%lf", &radius);
        printf("\n");
        answer = (4*pi*radius*radius);
        system("clear");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("|TSA OF SPHERE is %lf | \n", answer);
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
     }



if(strcmp(keyword, "volumeofsphere") == 0)
     {
        printf("\n");
        printf("Enter the value of radius > ");
        scanf("%lf", &radius);
        printf("\n");
        answer = ((4*pi*radius*radius*radius)/3);
        system("clear");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("|VOLUME OF SPHERE is %lf | \n", answer);
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
     }



if(strcmp(keyword, "lsaofhemisphere") == 0)
     {
        printf("\n");
        printf("Enter the value of radius > ");
        scanf("%lf", &radius);
        printf("\n");
        answer = (2*pi*radius*radius);
        system("clear");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("|LSA OF HEMISPHERE is %lf | \n", answer);
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
     }

if(strcmp(keyword, "tsaofhemisphere") == 0)
     {
        printf("\n");
        printf("Enter the value of radius > ");
        scanf("%lf", &radius);
        printf("\n");
        answer = (3*pi*radius*radius);
        system("clear");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("|TSA OF HEMISPHERE is %lf | \n", answer);
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
     }

if(strcmp(keyword, "volumeofhemisphere") == 0)
     {
        printf("\n");
        printf("Enter the value of radius > ");
        scanf("%lf", &radius);
        printf("\n");
        answer = ((2*pi*radius*radius*radius)/3);
        system("clear");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("|VOLUME OF HEMISPHERE is %lf | \n", answer);
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
     }

		scanf("%c",&choice);
		if(choice=='n' || choice=='N')
        break;
        }while(1);
return 0;

}
