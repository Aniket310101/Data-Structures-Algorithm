//INBUILT FUNCTIONS

# include <iostream>
# include <cstring>
using namespace std;

int main(){

    char input[100];
    char input1[100];
    cin.getline(input,100);
    cin.getline(input1,100);

    int len = strlen(input);
    cout<<"Length: "<<len<<endl;

    cout<<strcmp(input,input1)<< endl;  // 0: equal   non-zero: non-equal

    // strcpy(input,input1);  // copies the string of input1 into input (Also copies the NULL Character)
    // cout<<input<<endl;

    // strncpy(input,input1,2);  // copies the first n characters string of input1 into input (Also copies the NULL Character)
    // cout<<input<<endl;

    strcat(input,input1);  // concatenates input1 with input
    cout<<input<<endl;

    return 0;
}