 /*
   Step 1:  Understand the probleam statement
   Step 2:  Write the Algorithm
   Step 3:  Decide the programming language
   Step 4:  Write the program
   Step 5:  Test the program


   ////////////////////////////////////////////////////////////////////////
   //
   //   Step 1:  Understand the probleam statement
   //           User is going to enter any 2 integer
  //            and we have to perform addition
  ////////////////////////////////////////////////////////////////////////

  ///////////////////////////////////////////////////////////////////////
  //Step 2:write the Algorithm
  /*
    START
       Accept 1st no as no1
       accept 2nd no as no2
       create the variable as Ans to store result
       perform the addition and store into Ans
       Display the result from Ans
    END
    ///////////////////////////////////////////////////////////////////////
/*

   ////////////////////////////////////////////////////////////////////////
   //
   //Step 3:Step 3:  Decide the programming language
                   we select c programinng
   //
   //////////////////////////////////////////////////////////////////////

   //////////////////////////////////////////////////////////////////////
   //
   Step 4:Step 4:  Write the program
   //
   /////////////////////////////////////////////////////////////////////
   */
   //////////////////////////////////////////////////////////////////////

   #include<stdio.h>
   int main()
   {
     int iValue1 =0, iValue2 =0, iResult =0;

     printf("Enter first number: \n");
     scanf("%d",&iValue1);

     printf("Enter second number: \n");
     scanf("%d",&iValue2);

     iResult = iValue1 + iValue2;  //Business Logic

     printf("Addition is :%d",iResult);
     
     return 0;
   
   }













