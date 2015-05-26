//
//  mainmenu.h
//  testing
//
//  Created by Lawrence Matthew on 5/25/15.
//  Copyright (c) 2015 matthew. All rights reserved.
//

#ifndef testing_mainmenu_h
#define testing_mainmenu_h

int mainmenu()
{
    int menuitem;
    printf("\nChoose option\n1. enter max power of polynomial 1;current value is %d\n2. enter max power of polynomial 2;current value is %d\n3. enter max power of polynomial 3;current value is %d\n4. Enter value for mod -> p;current value is %llu\n5. Accept and initialize polynomial\n6. Multiply and print result\n9. exit\n",pp1,pp2,pp3,num);
    scanf("%d",&menuitem);
    return menuitem;
}

#endif
