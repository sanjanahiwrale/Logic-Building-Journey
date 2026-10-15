
   #include<stdio.h>
   #include<stdlib.h>

   int Addition(   
                  int ino1,   //first input 
                  int ino2    //second input
            
                )
   {
      int iAns = 0;

      iAns = ino1 + ino2;        //Bussiness Logic

      return iAns;

   }
   
   int main()
   {
     int iValue1 =0, iValue2 =0, iResult =0;

     printf("Enter first number: \n");
     scanf("%d",&iValue1);

     printf("Enter second number: \n");
     scanf("%d",&iValue2);

     iResult = Addition(iValue1,iValue2);     //Business Logic

     printf("Addition is :%d",iResult);
     
     return EXIT_SUCCESS;
   
   }
   
   













