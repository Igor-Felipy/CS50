#include <cs50.h>

void hash(int s);
void space(int s);


int main(void){
    int height = get_int("Enter the  height: ");
    int n1 = 0;
    int n2 = height;
    for(int i=0;i<=height;i++){
        space(n2);
        hash(n1);
        printf("\n");
        n1++;
        n2--;
    }
}

void space(int s)
{
    for(int i = 0;i < s;i++){
        printf(" ");
    }
}

void hash(int s)
{
    for(int i = 0;i < s;i++){
        printf("#");
    }
}
