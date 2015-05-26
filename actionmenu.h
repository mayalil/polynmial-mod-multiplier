//
//  actionmenu.h
//  testing
//
//  Created by Lawrence Matthew on 5/25/15.
//  Copyright (c) 2015 matthew. All rights reserved.
//

#ifndef testing_actionmenu_h
#define testing_actionmenu_h
int actionmenu ()
{
    //int pp1,pp2,pp3;
    int actionnumber = mainmenu();
    switch(actionnumber)
    {
        case 9:
            exit(0);
        case 1:
            printf("Enter max power for polynomial 1\nPower Polynomial 1 = ");
            scanf("%d",&pp1);
            break;
        case 2:
            printf("Enter max power for polynomial 2\nPower Polynomial 2 = ");
            scanf("%d",&pp2);
            break;
        case 3:
            printf("Enter max power for polynomial 3\nPower Polynomial 3 = ");
            scanf("%d",&pp3);
            break;
        case 5:
            InitializePolynomial(pp1,pp2,pp3);
            printf("\nAll polynomials Initialized\n");
            printf("type 'q' to exit: ");
            while(getchar() != 'q');
            break;
        case 6:
            printf("result of multiplication is \n:");
            dispproduct();
            printf("\ntype 'q' to exit: ");
            while(getchar() != 'q');
            break;
        case 4:
            printf("enter value for P and press enter:  ");
            scanf("%llu",&num);
            break;
        default:
            return 0;
    }
    return 0;
}

#endif
