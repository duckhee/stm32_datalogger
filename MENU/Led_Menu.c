#define LED_MENU_LOCAL


#include "Led_Menu.h"


LED_MENU_DEF int Led_Main();
LED_MENU_DEF int Led_Main_Menu();
static unsigned long flag;

LED_MENU_DEF int Led_Main()
{
    int key;
    while((key = Led_Main_Menu()) != 0)
    {
        switch(key)
        {
            case '1':
            printf("No.1\n");
            Led_Test();
            break;
            case '2':
            printf("No.2\n");

            break;
            case '3':
            printf("No.3\n");

            break;
            case '4':
            printf("No.4\n");

            break;
            case '5':
            printf("No.5\n");

            break;
            case '6':
            printf("No.6\n");

            break;
            case '7':
            printf("No.7\n");

            break;
            case '8':
            printf("No.8\n");

            break;
            case '9':
            printf("No.9\n");

            break;
            case '0':
            printf("No.0\n");
         
        break;

        case 'a':
            printf("No.a\n");
        
        break;

        case 'b':
            printf("No.b\n");
          
        break;

        case 'c':
            printf("No.c\n");
        
        break;

        case 'd':
            printf("No.d\n");
    
        break;

        case 'e':
            printf("No.e\n");
 
        break;

        case 'f':
            printf("No.f\n");

        break;

        case 'g':
            printf("No.g\n");
 
        break;

        case 'h':
            printf("No.h\n");
   
        break;

        case 'i':
            printf("No.i\n");

        break;

        case 'j':
            printf("No.j\n");

        break;

        case 'k':
            printf("No.k\n");

        break;

        case 'q':
            return 0;
    }
}
return 0;
}

LED_MENU_DEF int Led_Main_Menu()
{
    int key;
    
    printf("\n\n");
    printf("-------------------------------------------------\n");
    printf("                 LED MAIN MENU\n");
    printf("-------------------------------------------------\n");
    printf(" 1. Led_Test                                       \n");
    printf(" 2. Led Test                                         \n");
    printf(" 3. Test                                      \n");
    printf(" 4. Test                                         \n");
    printf(" 5. Test                                         \n");
    printf(" 6. Test                                         \n");
    printf(" 7. Test                                         \n");
    printf(" 8. Test                                         \n");
    printf(" 9. Test                                         \n");
    printf(" 0. Test                                         \n");
    printf("-------------------------------------------------\n");
    printf(" q. LED Menu QUIT\n");
    printf("-------------------------------------------------\n");
    printf("\n\n");

    printf("SELECT THE COMMAND NUMBER : ");
    key=get_byte();
    printf("key %d\n", key);
    return key;
}