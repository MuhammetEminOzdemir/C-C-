#include <iostream>
#define ROW 3
#define COW 4
using namespace std;

int main()
{
 int matrix[ROW][COW]={{1,2,3},
                       {8,7,9},
                       {4,7,5}};

    cout<<"Verilen matrix;"<<endl;

    for(int i=0;i<ROW;i++)
    {
        for(int j=0;j<COW;j++)
        {
        cout<<matrix[i][j];
        }

        cout<<endl;
    }





    return 0;
}