#include <stdio.h>
#include "pe12-3a.h"

void set_mode (int * mode)
{

    if (*mode > 1)
    {
        printf ("Invalid mode specified. Mode 1 (US) used.\n");
        * mode = 1;
    }

}

void get_info (int mode, float * distant, float * fuel)
{

    switch (mode)
    {
        case 0:
            printf ("Enter distance traveled in kilometers: ");
            scanf ("%f", distant);
            printf ("Enter fuel consumed in liters: ");
            scanf ("%f", fuel);
            break;
        case 1:
            printf ("Enter distance traveled in miles: ");
            scanf ("%f", distant);
            printf ("Enter fuel consumed in gallons: ");
            scanf ("%f", fuel);
            break;
    }

}

void show_info (int mode, float distant, float fuel)
{
    switch (mode)
    {
        case 0:
            printf ("Fuel consumption is %.2f liters per 100 km.\n",
                    fuel / distant * 100);
            break;
        case 1:
            printf ("Fuel consumption is %.2f miles per galion.\n",
                    distant / fuel);
            break;
    }
}
