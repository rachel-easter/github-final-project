
#include <iostream>
using namespace std;


int v[8];
int current;
string digit;
int main() {
    
        
    int temp ;
    char a[9] = {'s', '=', '(', '2', '0', '5' ,'+', '5', ')'};
     for (int j = 0; j < 9; j++) {
       cout<<a[j];
        v[j] = 0;
    }
    cout<<endl;
    for (int i = 0; i < 9; i++) {
        if (isdigit(a[i]) && v[i] == 0) {
            digit += a[i];
            current = i;
            i++;
            while (isdigit(a[i])) {
                v[i] = 1;
                digit += a[i];
                i++;
            }
             temp = stoi(digits);
        }

        if ( a[i] == '+' && isdigit(a[i + 1])) {
            v[i+1]=1;
           temp+=(a[i+1] - '0');
           
        }
    }
    int i = 0;
    while(a[i]!='('){
        cout<<a[i];
        i++;
    }
cout<<temp << endl;
    return 0;
}
