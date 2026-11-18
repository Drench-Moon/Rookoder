// Created by Drench Moon

#include "iostream"


# include "windows.h"


using namespace std;
#define FAT_BMI 28
# define J2C_RATE 4.19


// character constant doesn't need " ; "


/*
"Define" need to be positioned or included at the head of the code
*/


int main()
{

    SetConsoleOutputCP(CP_UTF8);
    /*system("chcp 65001");*/


    cout << FAT_BMI << endl;
    cout << "焦耳 converts Calori need to divide " << J2C_RATE << endl;


    /*When exporting character constant (like: FAT_BMI), it represents a int format, so "    "FAT_BMI"    " doesn't need to appear, otherwise it'll export just FAT_BMI instead of 28.
    */


    return 0;
}