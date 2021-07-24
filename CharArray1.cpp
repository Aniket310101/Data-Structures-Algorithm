# include <iostream>
using namespace std;


//FIND LENGTH OF A STRING
int length(char c[]){
    int count=0;
    for(int i=0; c[i]!='\0'; i++){
        count++;
    }
    return count;
}

//REVERSE A STRING
void reverse(char c[]){
    int start = 0, end = length(c)-1;
    while(start < end){
        swap(c[start],c[end]);   //inbuilt function
        start++;
        end--;
    }
}


int main(){

    char name[100];
    cout<<"Enter any word: ";
    cin.getline(name,100);                // if name is of 5 char then the rest 95 indexes will be occupied by null NULL CHARACTER (\o) which is a terminator.
    cout<<"Your name is "<<name<<endl;

//cin.getline(): the third parameter is delimeter by default it is '/n', which means any input before '/n' is valid. 

    int l = length(name);
    cout<<"Length of the string is: "<<l<<endl;

    reverse(name);
    cout<<name;

    return 0;
}