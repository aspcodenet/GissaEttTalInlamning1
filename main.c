#include <stdio.h> 

//  '=' tilldelning EJ jämförelse
// int (heltal) 18, -111
// flyttal 2.123, -3.1234
// char 'A' (0-255)   

// LAGRAR  STOSTORLEKAR FÖR  ALLA I SVERIGE
// short 2 bytes
// int 4 bytes
// long int 8 bytes

//Scanf + printf med %s kl 12:40 fram till 13:00. 
//Då blir det studeranderepresentant och sen är det HANDLEDNING, 
// COOLA VS CODE!
void main(){
    int nrOfGuesses = 0;
    int secretNumber = 40; // TODO Slumpa fram
    char namn[] = "Stefan";

    //tills vi gissat rätt
    int inputNumber; 
    //nrOfGuesses = nrOfGuesses + 1;
    nrOfGuesses++;
    //nrOfGuesses+=1;

   printf("Gissning %d:", nrOfGuesses);
    scanf(" %d", &inputNumber);
    if(inputNumber == secretNumber){
        printf("Hej %s du gissade rätt på %d försök\n",namn,  nrOfGuesses);
    }



    // unsigned char ch=65;
    // unsigned char ch2='A';
    // printf("Hej %c %c %d %d\n", ch, ch2, ch, ch2);

    // float aa = 123.23;
    // double e  = 112.3343;

    // unsigned char age = 14;

    

//     short int a= 123; 
//     short unsigned int b= 123;
//    int nrOfGuesses; // signed TECKEN + - (-123)
//     unsigned int aaa = 123; // BARA POSITIVA TAL

//     long int a= 123;
//     long unsigned int b= 123;

//     nrOfGuesses = -123;

//     int age = 123;
//     printf("Gissa ett tal mellan 1 och 100\n");
//     int tal;
//     float pi = 123.123123;

//     // 122
//     // 000122
//     //


//     printf("Gissning %d: du är %d år bla %.2f dsa",nrOfGuesses, age,pi);
    








//     int test = 12;



// // tilldelning -  tvåstegsraket
// //  1. uttrycket till höger evalueras
// //  2. resultatet stoppas in på vänster sida
//     nrOfGuesses = nrOfGuesses + 1;  // EXPRESSIONS (uttryck)
    
}
