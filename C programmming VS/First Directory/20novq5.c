#include <stdio.h>
struct Distance
{
    int feet;
    float inch;
};
struct Year
{
    int year;
    float month;
};
int main()
{ 
struct Distance d1, d2, d;
struct Year y1, y2, y;
printf("\nEnter data for 1st distance\n");
printf("\nEnter feet: ");
scanf("%d", &d1.feet);
printf("\nEnter inch: ");
scanf("%f", &d1.inch);
printf("\nEnter data for 2nd distance\n");
printf("\nEnter feet: ");
scanf("%d", &d2.feet);
printf("\nEnter inch: ");
scanf("%f", &d2.inch);
//addition
d.feet = d1.feet+d2.feet;
d.inch = d1.inch+d2.inch;
/*If inch is greater than 12, changing it to feet*/ if (d.inch>12.0)
{ d.inch = d.inch-12.0; ++d.feet;
}
printf("\nSum of distances = %d\'- %.1f\"", d.feet, d.inch); 
printf("\nEnter data for 1st distance\n");
printf("\nEnter years: ");
scanf("%d", &y1.year);
printf("\nEnter months: ");
scanf("%f", &y1.month);
printf("\nEnter data for 2nd time\n");
printf("\nEnter years: ");
scanf("%d", &y2.year);
printf("\nEnter months: ");
scanf("%f", &y2.month);
//addition
y.year = y1.year+y2.year;
y.month = y1.month+y2.month;
/*If inch is greater than 12, changing it to feet*/ if (d.inch>12.0)
{ d.inch = d.inch-12.0; ++d.feet;
}
printf("\nSum of distances = %d years- %.1f months", y.year, y.month);
return 0;
}