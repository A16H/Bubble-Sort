#include <iostream>

int numArray[10];
int i;
bool sortComplete = false;
std::string ascOrDesc;
int tempNum = 0;
int smallSort = 0;
int bigSort = 1;
int x = 1;



int main()
{
    for (i = 0; i < 10; i++)
    {
        std::cout << "What is the #" << i + 1 << " number in your list? ";
        std::cin >> numArray[i];
        std::cout << "\n\n";
    }

    std::cout << "==========================================================\n\nYou incomplete list is as follows:\n\n";

    for (i = 0; i < 10; i++)
    {
        std::cout << i + 1 << "#: " << numArray[i] << "\n";
    }

    std::cout << "\n==========================================================\n\n";

    std::cout << "Would you like to sort your list in ascending or descending order? (asc for ascending and desc for descending): ";
    std::cin >> ascOrDesc;

    if (ascOrDesc == "asc")
    {
        std::cout << "\n\nSorting your list in ascending order!\n\n";

        while (sortComplete == false)
        {
            for (i = 0; i < 10; i++)
            {
                if (numArray[i] > numArray[i + 1])
                {
                    tempNum = numArray[i + 1];
                    numArray[i + 1] = numArray[i];
                    numArray[i] = tempNum;
                    tempNum = 0;
                }

                if (numArray[0] < numArray[1] && numArray[1] < numArray[2] && numArray[2] < numArray[3] && numArray[3] < numArray[4] && numArray[4] < numArray[5] && numArray[5] < numArray[6] && numArray[6] < numArray[7] && numArray[7] < numArray[8] && numArray[8] < numArray[9])
                {
                    sortComplete = true;
                    std::cout << "==========================================================\n\nSort Completed!\n\nHere is you completed list:\n\n";
                    for (i = 0; i < 10; i++)
                    {
                        std::cout << i + 1 << "#: " << numArray[i] << "\n";
                    }
                }
            }
        }
    }

    else if (ascOrDesc == "desc")
    {
        std::cout << "\n\nSorting your list in descending order!\n\n";

        while (sortComplete == false)
        {
            for (i = 0; i < 10; i++)
            {
                if (numArray[i] > numArray[i + 1])
                {
                    tempNum = numArray[i + 1];
                    numArray[i + 1] = numArray[i];
                    numArray[i] = tempNum;
                    tempNum = 0;
                }

                if (numArray[0] < numArray[1] && numArray[1] < numArray[2] && numArray[2] < numArray[3] && numArray[3] < numArray[4] && numArray[4] < numArray[5] && numArray[5] < numArray[6] && numArray[6] < numArray[7] && numArray[7] < numArray[8] && numArray[8] < numArray[9])
                {
                    sortComplete = true;
                    std::cout << "==========================================================\n\nSort Completed!\n\nHere is you completed list:\n\n";
                    for (i = 10; i >= 1; i--)
                    {
                        std::cout << x << "#: " << numArray[i - 1] << "\n";
                        x++;
                    }
                    break;
                }
            }
        }
    }
}
