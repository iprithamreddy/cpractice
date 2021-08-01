     /* write a program to calculate simple interest */
    #include<stdio.h>

    int main(void)
    {
       long p;
       int t;
       float r,si;
       printf("\nTo calculate simple interest...........\n");
       printf("\nEnter principle amount :");
       scanf("%ld",&p);
       printf("\nEnter Rate of Interest :");
       scanf("%f",&r);
       printf("\nEnter No.Of Years      :");
       scanf("%d",&t);

       si=(p*t*r)/100;
       printf("\nSimple Interest is : %f",si);
    }
    /*
	see ex05_1.c
    */
