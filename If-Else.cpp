#include <iostream>
#include <stdlib.h>


void PrintHeader()
{

    std::cout << "\n+---------------------+\n";
    std::cout << "|      Wellcome       |\n";
    std::cout << "|    to C++ Program   |\n";
    std::cout << "+---------------------+\n\n";
}


int main()
{
system("CLS");
int m_Key;
int m_AnserKey;
PrintHeader();
// do
// {

    std::cout << "\nEnter Your Key: ";
    std::cin >> m_Key;
    if(m_Key > 10)
    {
        std::cout << "Invalid";
    }

    else if(m_Key <= 0)
    {
        std::cout << "Invalid";
    }

    else
    {
        std::cout << "\nEnter The Right Key: ";
       
        if(m_AnserKey > 10)
        {
            std::cout << "Invalid";
        }

        else if(m_AnserKey <= 0)
        {
            std::cout << "Invalid";
        }

        else
        {
             std::cin >> m_AnserKey;
            if(m_Key == m_AnserKey) 
            {
            std::cout << "Unlock";
            }

            else
            {
            std::cout << "not the right key";
            }
        }
    } 
return 0;
}