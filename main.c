//  main.c
//  testing
//
//  Created by Lawrence Matthew on 5/18/15.
//  Copyright (c) 2015 matthew. All rights reserved.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef unsigned long long lnumber;
//#define pmodulo 73786976294838206473
lnumber num = 1000;
lnumber poly[3][17]={0},product[52]={0};
int pp1=0,pp2=0,pp3=0;
int larger=0;
#include "randomgenerator.h"

#include "initializepolynomial.h"
#include "mainmenu.h"
#include "modmultiplier.h"
#include "actionmenu.h"

int main() {
    time_t t;
    srand((unsigned) time(&t));
    while(1)
    {
    actionmenu();
    }
    return 0;
}

