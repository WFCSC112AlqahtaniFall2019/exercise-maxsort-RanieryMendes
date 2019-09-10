#include <iostream>
#include <vector>
using namespace std;

// function declarations
void maxSort(vector<int>& list);
void swap(int& a, int& b);
void print(const vector<int>& list);

int main() {

    vector<int> v(5);  // vector to be sorted

     v = {6,1,3,2,1};  //initialize v


    // print the unsorted v

    cout << "The unsorted vector is: ";

    for (int i = 0; i < v.size(); i++){

        cout << v.at(i) << " ";
    }
 cout << endl;

    // sort v

    maxSort(v);

    // print the sorted v

    print(v);

    return 0;
}

/* the function definitions */

//Max sort function
void maxSort(vector<int>& list){

    for(int i=list.size()-1;i > =0; i--){

       int current_max = 0;

        for(int j=0;j<=i;j++){

             if (list.at(j) > list.at(current_max)){
                 current_max = j;

                 swap(list.at(current_max), list.at(i));
             }

        }
        /*complete the code*/
    }
}

// swap function
void swap(int& a, int&b){

    int temp = a;

    a = b;

    b = temp;


}

// print function
void print(const vector<int>& list){

    cout << "List is sorted: ";

    for(int i = 0; i < list.size(); i++)
    {
        cout << list.at(i) << " ";
    }
}

