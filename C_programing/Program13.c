
   #include<stdio.h>
   #include<stdlib.h>
   ////////////////////////////////////////////////////////
   //
   //Function Name: Addition
   //input: Integer, Integer
   //Output: Integer
   //Description: Performs addition
   //
   ///////////////////////////////////////////////////////

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
     if (scanf("%d",&iValue1); != 1)
     {
        fprintf(stderr,"Unable to proceed as Input is invalid\n");

        return EXIT_FAILURE;
     }

     printf("Enter second number: \n");
     if (scanf("%d",&iValue2); != 1)
     {
        fprintf(stderr,"Unable to proceed as Input is invalid\n");

        return EXIT_FAILURE;
     }


     iResult = Addition(iValue1,iValue2);     //Business Logic

     printf("Result is :%d\n",iResult);
     
     return EXIT_SUCCESS;
   
   }
   

   
   













