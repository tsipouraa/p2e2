#include <stdio.h>
#include <string.h>

struct car
{
    char model[50];
    double price;
    int manufacture_date;
};

int main()
{
    int end = 0;
    struct car c[100];

    for (int i = 0; i < 100; i++)
    {
        printf("Type model: ");
        scanf("%s", &c[i].model);

        printf("Type price: ");
        scanf("%lf", &c[i]);

        printf("Type manufacture date: ");
        scanf("%d", &c[i].manufacture_date);
        if(cars[i].manufacture_date == -1)
        {
            i = 100;
        }
    }
    while (end == 0)
    {
        printf("1. Print Model\n");
        printf("2. Print basic price\n");
        printf("3. End\n");
        int choice;

        scanf("%d", &choice
        if(choice == 1)
        {
            char mdl[50];
            printf("Search model: ");
            scanf("%s", &mdl);

            
            for (int i = 0; i < 100; i++)
            {
                if(strcmp(mdl,"*")==0)
                {
                    if(c[i].price > 0 && c[i].manufacture_date > 0)
                    {
                        printf("Model: %s\n",c[i].model);
                        printf("Price: %lf\n",c[i].price);
                        printf("Manufacture Date: %d\n",c[i].manufacture_date);
                    }
                }
                if(strcmp(c[i].model,mdl)==0)
                {
                    printf("Model: %s\n",c[i].model);
                    printf("Price: %lf\n",c[i].price);
                    printf("Manufacture Date: %d\n",c[i].manufacture_date);
                    i=101;
                }
            }
        }
        else if(choice == 2)
        {
            double price = 0.0;
           printf("Type price:");
           scanf("%lf",&price);
            for(int i = 0;i<99;i++)
            {
                for (int j = 0; j < 99-i; j++)
                {
                    if(c[j].price > c[j+1].price)
                    {
                        struct car temp = c[j];
                        c[j] = c[j+1];
                        c[j+1] = temp;
                    }
                }
            }
            for (int i = 0; i < 100; i++)
            {
                
                if(c[i].price > price && c[i].manufacture_date > 0)
                {
                    printf("Model: %s\n",c[i].model);
                    printf("Price: %lf\n",c[i].price);
                    printf("Manufacture Date: %d\n",c[i].manufacture_date);
                }
            }
            
        }
        else if(choice == 3)
        {
            printf("End of Programm\n");
            end = 1;
            return 0;
        }
    }
}

