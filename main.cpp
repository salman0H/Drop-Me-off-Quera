#include <iostream>
using namespace std;

int main() {
int result = 0;
int enter;
cin >> enter;
for(int i=1;i<=enter;i++)
{
    for(int j=1;j<=i;j++)
    {
        result += 1;
    }
}
if(result < 0)
{
    cout << result * (-1);
}else{
    cout << result;
}
    return 0;
}
