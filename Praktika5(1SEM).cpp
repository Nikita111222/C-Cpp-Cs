#include <stdio.h> 

int main() 
{ 
        unsigned short h;
        unsigned short t; 
        unsigned short s; 
        unsigned short temp; 
        unsigned short y = 0; 

        printf("\n input num of head (0-3) :")
        scanf_s("%hu", &h); 
        printf("\n input num of road (0-511) :");
        scanf_s("%hu", &t); 
        printf("\n input num of sec (0-31) :");
        scanf_s("%hu", &s); 

        temp = h & 3; 
        y = y | (temp << 14); 

        temp = t & 511; 
        y = y | (temp <<  5); 

        temp = s & 31; 
        y = y | temp; 

        printf("\n packed value is decimal = %hu hexadecimcal=%x ", y, y); 
}
