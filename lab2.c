// // Q.2 Write a Program to input electricity unit charges and calculate the total electricity bill according to the given condition:
// For the first 50 units Rs. 0.50/unit
// For the next 100 units Rs. 0.75/unit
// For the next 100 units Rs. 1.20/unit
// For units above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill.

#include<stdio.h>

int main(){

    float unit , i , j, res , res1 , res2 ;

    printf("Enter electricity units: ");
    scanf("%f", &unit);

    if (unit < 50)
    {    
        res = unit*0.5;
        printf("Electricity Bill Rs: %.2f/-", res);
    }

    else if(unit >= 50 && unit<= 150)
    {

        res1 =  (unit - 50);
        float  u = res1*0.75 + (unit - res1)*0.5 ;
       
        printf("Electricity Bill Rs: %.2f/-", u);

    }

    else if (unit >= 150 && unit <= 250)
    {


        
        float j = unit - 50;
        float h = (unit - j); //for 0.5
        float w = (unit - h - (unit - 150));
       

        float p = (unit - 150)*1.20 + h*0.5 + w*0.75;

       
  
        printf("Electricity Bill Rs: %.2f/-", p);
       
    }

    else if (unit > 250)
    {
        float y = unit - 50 ;
        float t = unit - y;

        float g = unit - 100 ;
        float f = unit - g;

        float z = unit - 100 ;
        float h = unit - z;

        float res = unit - (t + f + h);
        float res1 = t*0.5 + f*0.75 + h*1.20 + res*1.50;

        float res2 = (res1*20)/100;

        printf("Electricity Bill Rs: %.2f/-", res1+res2);

    }
    

    else{

        printf("Invalid choice");
    }
    

   
 

    return 0;

    
    
    
}