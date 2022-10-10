#include <iostream>

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

void task_34()
{
   float y = 0;
   float x = 0;
   float* pointer_of_x = &x;
   float* pointer_of_y = &y;    
   __task_34__action(pointer_of_y, pointer_of_x);
}

void task_35()
{
    float y = 0;
    float x = 0;
    float* pointer_of_x = &x;
    float* pointer_of_y = &y;    
    __task35__action(pointer_of_y, pointer_of_x);
}
 
void task_36
        
int main()
{
   task_34();
   task_35();
    
 


}
