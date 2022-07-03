#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define TRUE 1

#define BBLK "\e[1;30m" // black font color
#define WHTB "\e[47m" // white background
#define BLKB "\e[40m" // black bacground
#define CRESET "\e[0m" // color reset

void cls(){
    system("cls");
}

void menu(int input){
    puts(BBLK"Press either 'W' or 'S' key to navigate menu");
    if (input == 0)
    {
        puts(BLKB"Menu 1"WHTB);
        puts("Menu 2");
        puts("Menu 3");
        puts("Menu 4");
    }
    else if (input == 1)
    {
        puts("Menu 1");
        puts(BLKB"Menu 2"WHTB);
        puts("Menu 3");
        puts("Menu 4");
    }
    else if (input == 2)
    {
        puts("Menu 1");
        puts("Menu 2");
        puts(BLKB"Menu 3"WHTB);
        puts("Menu 4");
    }
    else if (input == 3)
    {
        puts("Menu 1");
        puts("Menu 2");
        puts("Menu 3");
        puts(BLKB"Menu 4"WHTB);
    }
    else return;
}

int main()
{
    int current = 0;
    int input = 0;
    do
    {
        puts(WHTB BBLK);
        cls();
        menu(current);
        input = getch();
        if (input == 'w' && current >= 0)
        {
            if (current == 0) continue;
            current--;
        }
        else if (input == 's' && current <= 3)
        {
            if (current == 3) continue;
            current++;
        }
        if (input == '0') break; // exit program
    } while (TRUE);
    return 0;
}