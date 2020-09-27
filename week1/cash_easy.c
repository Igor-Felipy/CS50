#include <cs50.h>
#include <stdio.h>
#include <math.h>

void count(void);
int clean_float(float v);

int main(void){
    count();
}


void count(void){
    do{
        float float_value = get_float("Enter the value: ");
        if (float_value >= 0){
            int value = clean_float(float_value);
            int c = 0;
            while(value>0){
                if (value >= 25){
                    value -= 25;
                    c+= 1;
                }
                else if(value >= 10){
                    value -= 10;
                    c += 1;
                }
                else if(value >= 05){
                    value -= 05;
                    c += 1;
                }
                else if(value >= 01){
                    value -= 01;
                    c += 1;
                }
            }
            printf("%d \n",c);
            break;
        }
        else{
            continue;
        }
    }while(true);
    

}

int clean_float(float v){
    int new_v = round(v * 100);
    return new_v;
}