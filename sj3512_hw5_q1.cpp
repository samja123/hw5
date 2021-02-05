#include <iostream>

using namespace std;

int main() {
    int n, line_counter, column_counter, mult;
    cout<<"Please enter a positive integer: "<<endl;
    cin>>n;
    for(line_counter = 1; line_counter <= n; line_counter++){
        for(column_counter = 1; column_counter <= (n * line_counter); column_counter++){
            mult = (column_counter * line_counter);
            if(mult <= (line_counter * n)){
                cout<<mult<<"\t";
            }
        }
        cout<<endl;
    }
    return 0;
}
