#include <stdio.h>
#include "pe12-2a.h"
static int mode = 1;
static float distant = 0;
static float fuel = 0;

void set_mode (int modes)
{
    extern int mode;

    if (modes > 1)
    {
        printf ("Invalid mode specified. Mode 1 (US) used.\n");
        mode = 1;
    }
    else
        mode = modes;

}

void get_info (void)
{
    switch (mode)
    {
        case 0:
            printf ("Enter distance traveled in kilometers: ");
            scanf ("%f", &distant);
            printf ("Enter fuel consumed in liters: ");
            scanf ("%f", &fuel);
            break;
        case 1:
            printf ("Enter distance traveled in miles: ");
            scanf ("%f", &distant);
            printf ("Enter fuel consumed in gallons: ");
            scanf ("%f", &fuel);
            break;
    }

}

void show_info (void)
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
