#include <stdio.h>
#include <conio.h>
 typedef struct distance 
 { 
     int kms; 
     int metres; 
 }   DISTANCE; 
     DISTANCE add_distance (DISTANCE, DISTANCE); 
     DISTANCE subtract_distance(DISTANCE,DISTANCE); 
     DISTANCE dl, d2, d3, d4; 
 int main() 
 { 
       int option; 
       clrscr (); 
    do 
    { 
        printf("\n ***MAIN MENU***"); 
        printf ("\n 1. Read the distances "); 
        printf ("\n 2. Display the distances"); 
        printf ("\n 3. Add the distances "); 
        printf ("\n 4. Subtract the distances"); 
        printf ("\n 5. EXIT"); 
        printf ("\n Enter your option: "); 
        scanf("%d", &option); 
     switch(option) 
     { 
      case 1: 
             printf("\n Enter the first distance in kms and metres: "); 
             scanf ("%d %d", &dl .kms, &dl .metres); 
             printf("\n Enter the second distancekms and metres: "); 
             scanf ("%d %d" , &d2 .kms, &d2 .metres); 
       break; 
      case 2: 
             printf("\n The first distance is: %d kms %d metres " , dl.kms, dl.metres); 
             printf("\n The second distance is: %d kms %d metres " , d2 .kms, d2 .metres); 
       break; 
      case 3: 
             d3 = add_distance(dl, d2); 
             printf("\n The sum of two distances is: %d kms %d metres", d3.kms, d3.metres); 
       break; 
      case 4: 
             d4 = subtract_distance(dl, d2); 
             printf("\n The difference between two distances is: %d kms %d metres ", d4.kms, d4 .metres); 
       break; 
     } 
    } 
     while(option != 5); 
     { 
       getch (); 
       return 0; 
     } 
 } 
  DISTANCE add_distance(DISTANCE dl, DISTANCE d2) 
  { 
     DISTANCE sum; 
     sum.metres = dl.metres + d2. metres; 
     sum.kms = dl.kms + d2.kms; 
       if(sum.metres >= 1000) 
       { 
                         sum.metres = sum.metres%1000; 
                         sum.kms += 1; 
       } 
                    return sum; 
  } 
  DISTANCE subtract_distance(DISTANCE dl,DISTANCE d2) 
  { 
     DISTANCE sub; 
       if(dl.kms > d2.kms) 
       { 
                         sub.metres = dl.metres - d2. metres; 
                         sub.kms = dl.kms - d2.kms; 
       } 
        else 
        { 
                    sub.metres = d2.metres - dl. metres; 
                    sub.kms = d2.kms - dl.kms; 
        } 
      if(sub.metres < 0) 
      { 
                    sub.kms = sub.kms - 1; 
                    sub.metres = sub.metres + 1000; 
      } 
                   return sub; 
  }
