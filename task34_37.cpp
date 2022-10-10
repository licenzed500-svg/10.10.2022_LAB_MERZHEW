#include <iostream>
#include <cmath>

#define M_PI 3.14

void __task_34__action(float* y, float* x)
{
    if(*x<10)
    {
        *y = 5;
    }
    else if( (*x>=10) && (*x<=40) )
    {
        *y = 0;
    }
    else if (*x>40)
    {
        *y = -5;
    }
    else
    {
       //
    }
}

void __task35__action(float* y, float* x)
{
    if(*x < 0)
    {
        *y = 1;
    }
    else if((*x>=0) && (*x<30))
    {
        *y = 0;
    }
    else if (*x>=30)
    {
        *y=-1;
    }
    else
    {
        //
    }
}

void __task36__action(float* y, float* x)
{
    if(*x<10)
    {
        *y = 5;
    }
    if((*x>=10) && (*x<=30))
    {
        *y=0;
    }
    if ((*x>30) && (*x<40))
    {
        *y = -5;
    }
    if(*x>=40)
    {
        *y=10;
    }
}

bool __task37__action(int x, int y, int r, int R)
{
    int Xr = R-r;
    int isBelongRight = pow(x,2) + pow(y,2);
   
    if((isBelongRight == pow(R,2)) && (isBelongRight - pow(Xr,2) == pow(r,2)))
    {
        return true;
    }
    else
        return false;
}

void task_34()
{
   float y = 0;
   float x = 0;
   std::cin >> x;
   float* pointer_of_x = &x;
   float* pointer_of_y = &y;
   __task_34__action(pointer_of_y, pointer_of_x);
   std::cout << y << "\n";

}

void task_35()
{
    float y = 0;
    float x = 0;
    std::cin >> x;
    float* pointer_of_x = &x;
    float* pointer_of_y = &y;
    __task35__action(pointer_of_y, pointer_of_x);
    std::cout << y << "\n";
}

void task_36()
{
    float y = 0;
    float x = 0;
    std::cin >> x;
    float* pointer_of_x = &x;
    float* pointer_of_y = &y;
    __task36__action(pointer_of_y, pointer_of_x);
    std::cout << y << "\n";
}

void task_37()
{
    int x = 0;
    int y = 0;
    int r = 0;
    int R = 0;
    std::cin >> x;
    std::cin >> y;
    std::cin >> r;
    std::cin >> R;
    bool ifbelongs = __task37__action(x,y,r,R);
    if(ifbelongs == true)
    {
        std::cout << "belongs\n";
    }
    else
    {
        std::cout << "NOT belongs\n";
    }

}

int main()
{
   task_34();
   task_35();
   task_36();



}
