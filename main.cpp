/*
    Title:  Program to generate output to the PC screen using MBED OS6
    Author: Your Name, Student ID, Course CODE, Lab Section
    Date:   Today's Date
    Description:    This program will take characters from the keyboard and
                    continually send them to the screen. You can use ANSI
                    ESCAPE sequences to position the cursor, clear the
                    screen, and change screen foreground and background
                    colours.
*/
#include "mbed.h"
 
int main(void)
{
    unsigned char input;    // variable to get char from keyboard

    for(;;) 
    {
       input=getc(stdin);      // get char and put into variable input
       if(input==0x0a)
       {
        putc(input,stdout);     // send char to output buffer
       }
        fflush(stdout);         // flush output buffer to screen
    }
}
