// Question: display the number with the most number of occurences

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//length of the array is 10
int interviewQuestion(int* array){

    return 0;
}

int main(){
    srand(time(0));
    int* array = new int[10];

    for(int i=0;i<10;++i){
        array[i] = rand()%3;
        cout << array[i] << " ";
    }
    cout<<endl;

    int returnVal = interviewQuestion(array);
    cout<<returnVal<<endl;
}

