#include <stdio.h>
#include <cs50.h>
#include <math.h>

bool chksm(long long val);
bool valid(long long value);
void cbrand(long long val);
long long value;
long long value1;
long long value2;
long long value3;

int main(void)


{


do

{

value = get_long_long("Please input your card number: ");

}

while(value < 0);

value1= value;
value2= value;
value3= value;


    if (valid(value1) && chksm(value2))

    {

        cbrand(value3);

    }

        else

    {

        printf("INVALID\n");

    }


}



bool valid(long long x)

{

    int l;

    for (l=0; x != 0; l++)

    {

        x /=10;

    }

    return (l==13 || l==15 || l==16);


}



bool chksm(long long val)
{

int sum=0;


for (int i=0; val > 0; i++, val /= 10)

{

 if (i % 2==0)

    sum+=val % 10;


    else


 {


    int secnum = 2 * (val % 10);
    sum +=  secnum % 10 + secnum/10;
    

}

 

}

return (sum % 10) == 0;
}


void cbrand(long long val)

{

if ((val>34e13 && val<35e13) || (val>37e13 && val<38e13))

{
    printf("AMEX\n");

}


else if (val>=51e14 && val<56e14)

{
    printf("MASTERCARD\n");

    }



else if ((val>=4e12 && val<5e12) || (val>=4e15 && val<5e15))

{
    printf("VISA\n");

}

else

{

    printf("INVALID\n");
}


}