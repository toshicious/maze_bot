#include<iostream>

char path[100] = "";
unsigned char path_length = 0;


char select_turn(unsigned char found_left, unsigned char found_straight,
    unsigned char found_right)
{
    if(found_left)
        return 'L';
    else if(found_straight)
        return 'S';
    else if(found_right)
        return 'R';
    else
        return 'B';
}

void simplify_path()
{
    if(path_length < 3 || path[path_length-2] != 'B')
        return;
 
    int total_angle = 0;
    int i;
    for(i=1;i<=3;i++)
    {
        switch(path[path_length-i])
        {
        case 'R':
            total_angle += 90;
            break;
        case 'L':
            total_angle += 270;
            break;
        case 'B':
            total_angle += 180;
            break;
        }
    }
 
    total_angle = total_angle % 360;
 
    switch(total_angle)
    {
    case 0:
        path[path_length - 3] = 'S';
        break;
    case 90:
        path[path_length - 3] = 'R';
        break;
    case 180:
        path[path_length - 3] = 'B';
        break;
    case 270:
        path[path_length - 3] = 'L';
        break;
    }
 
    path_length -= 2;
}

int main()
{
    while(1)
    {
        char dir;
        std::cout<<"enter path : ";
        std::cin>>dir;
        if(dir=='E')
        break;

        unsigned char found_left=0;
        unsigned char found_straight=0;
        unsigned char found_right=0;
        

        // unsigned char dir = select_turn(found_left, found_straight, found_right);
                
        path[path_length] = dir;
        path_length ++;
        
        simplify_path();
        std::cout<<"current path :";
        for(int i=0; i<path_length; i++)
        {
            std::cout<<path[i];
        }
        std::cout<<std::endl;
        
    }

    std::cout<<"final path : ";
    for(int i=0; i<path_length; i++)
    {
        std::cout<<path[i]<<" ";
    }

    return 0;
}  