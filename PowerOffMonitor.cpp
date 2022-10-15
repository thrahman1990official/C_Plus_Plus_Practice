// Below is the C++ script for powering off & on the monitor in Windows Operating System

#include <Windows.h> 
//windows specific header file for C++ that contains declarations for all functions in Windows Application-Programming-Interface, all common macros used by
//Windows programmers, & all data types used by various functions & subsystems

int main()
{
SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM)2);
//turns off monitor initially
  
//HWND_BROADCAST results in message being delivered to all top-level windows in system
//WM_SYSCOMMAND is the system version of WM_COMMAND, where message is sent to your application when control sends notification message to its parent window
//SC_MONITORPOWER is part of the WM_SYSCOMMAND, sets the state of display, command supports devices that have power-saving features such as battery powered
//personal computer. Where when (LPARAM)-1, the display is powering on, when (LPARAM)1, the display is going to lower power, when (LPARAM)2, the display is
//shut off

Sleep(10000);
//Sleep for 10 seconds
//turns monitor back on after 10 seconds  
SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM)-1);
  
return 0;  
}
