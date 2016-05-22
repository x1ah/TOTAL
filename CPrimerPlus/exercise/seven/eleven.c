#include <stdio.h>
#define CXLI 1.25
#define TIANCAI 0.65
#define CARROT 0.89
int main (void)
{
    float cost, total_pand, transport;
    float carrot, cxli, tiancai, discount;

    printf ("Input pound of cxli, tiancai, carrot[q to quit]: ");
    while (scanf ("%f %f %f", &cxli, &tiancai, &carrot) == 3)
    {
        discount = ((cxli*CXLI + tiancai*TIANCAI + carrot*CARROT) > 100) ? 0.95: 1;
        total_pand = cxli + tiancai + carrot;
        switch ((int) total_pand / 5)
        {
            case 0:
                transport = 3.5;
                break;
            case 1:
            case 2:
            case 3:
                transport = 10.00;
                break;
            default:
                transport = 0.1 * total_pand + 8;
                break;
        }
        cost = (cxli * CXLI + tiancai * TIANCAI + carrot * CARROT + transport) * discount;
        printf ("total %f pounds.\n", cxli+tiancai+carrot);
        printf ("total cost: %f\n", cost);
        printf ("cxli %f pounds cost $%f\ntiancai %f pounds cost $%f\ncarrot %f pounds cost $%f\n",
                cxli, cxli*CXLI, tiancai, tiancai*TIANCAI, carrot, carrot*CARROT);
        printf ("discount %f%%\n", 100-discount*100);
        printf ("transport cost: %f\n", transport);
        printf ("Input pound of cxli, tiancai, carrot[q to quit]: ");
        }}
