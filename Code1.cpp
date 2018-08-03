#include <iostream>
#include <stdio.h>     
#include <stdlib.h>     
#include <time.h>       

using namespace std;

int main()
{
    char op;
    float IN, OUT, Count;
    

    cout << "Enter operator either IN or OUT  ";
    cin >> op;
    
	1 + ( IN::rand() % ( 10 - 1 + 1 ) )
	1 + ( OUT::rand() % ( 10 - 1 + 1 ) )

    switch(op)
    {
        case 'IN':
        	cin >> op;
            cout << Count=IN+Count;
            break;

        case 'OUT':
        	cin >> op;
            cout << Count=Count-OUT;
            break;

        default:
            // If the operator is other than +, -, * or /, error message is shown
            cout << "Error! operator is not correct";
            break;
            
        Count = Count    
    }

    return 0;
}
