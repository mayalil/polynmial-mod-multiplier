//
//  initializepolynomial.h
//  testing
//
//  Created by Lawrence Matthew on 5/25/15.
//  Copyright (c) 2015 matthew. All rights reserved.
//

#ifndef testing_initializepolynomial_h
#define testing_initializepolynomial_h

void InitializePolynomial(pp1,pp2,pp3)
{
    int i,j,power[]={pp1,pp2,pp3};
    if(larger<pp1)
        larger = pp1;
    if(larger<pp2)
        larger = pp2;
    if(larger <pp3)
        larger = pp3;
    
  /*  if(larger == 0)
    {printf("\n\nMax power = 0 \nResult = 0\nProgram Exited");
        exit(0);}
  */
    if(larger > 17)
    {printf("\n\nMax power >17 \nResult = Unknown\nProgram Exited");
        exit(0);}
    
    for (i=0;i<3;i++)
    {for(j=0;j<=power[i];j++)
    {poly[i][j]=randomizer();}
    }
    
    printf("\nlargest power = %d\n",larger);
    if(/* DISABLES CODE */ (0))
    {  for (i=0;i<3;i++)
    {
        for(j=0;j<=larger;j++)
        {printf(" %llu ",poly[i][j]);}
        printf("\n");
    }
    }
}

#endif
