//
//  modmultiplier.h
//  testing
//
//  Created by Lawrence Matthew on 5/25/15.
//  Copyright (c) 2015 matthew. All rights reserved.
//

#ifndef testing_modmultiplier_h
#define testing_modmultiplier_h
void dispproduct()
{
    int i,j,k;
    if(1)
    {
        for(i=0;i<=larger;i++)
            for(j=0;j<=larger;j++)
                for(k=0;k<=larger;k++)
                {product[i+j+k]=product[i+j+k]+(poly[0][i]*poly[1][j]*poly[2][k]);}
        for(i=51;i>0;i--)
        {if(product[i]!=0)
        {printf("%llux^%d + ",product[i],i);}
        }
        printf("%llu",product[i]);
        
        
        printf("\n\n polynomial mod %llu = \n\n",num);
        for(i=51;i>=0;i--)
        {product[i]=product[i]%num;}
        for(i=51;i>0;i--)
        {if(product[i]!=0)
        {printf("%llux^%d + ",product[i],i);}
        }
        printf("%llu",product[i]);
    }
}

#endif
