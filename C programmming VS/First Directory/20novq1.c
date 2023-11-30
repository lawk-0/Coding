#include<stdio.h>
struct train
{
    int TrainID;
    char Name[20];
    char FromStation[20];
    char Tostation[20];
}Coromondol, Satabdi;

void main()
{
    printf("Enter Train ID : ");
    scanf("%d", &Coromondol.TrainID);
    printf("Enter Train name : ");
    gets(Coromondol.Name);
    gets(Coromondol.Name);
    printf("Enter Departure Statiion :");
    gets(Coromondol.FromStation);
    printf("Enter destination station : ");
    gets(Coromondol.Tostation);
    printf("TrainID is %d\nTrain name is %s\nTrain departes from station %s and arrives at station %s.", Coromondol.TrainID, Coromondol.Name, Coromondol.FromStation, Coromondol.Tostation);
}