#include <iostream>
#include <string>
#include <utility>
void selectionSort(std::string *array, int length){
    for(int i=0;i<length-1;i++){
        int smallest=i;
        for (int j=i+1;j<length;j++){
            if(array[i]>array[j])
                smallest=j;
        }
        std::swap(array[i], array[smallest]);
    }
}
int main() {
    std::cout << "How many names would you like to enter ? \n";
    int length;
    std::cin>>length;
    auto *array=new std::string[length];
    for(int i=0;i<length;i++){
        std::cout<<"Enter name # "<<i+1<<" : ";
        std::cin>>array[i];
        std::cout<<"\n";
    }
    selectionSort(array,length);
    std::cout<<"Your sorted array of names : \n";
    for(int j=0;j<length;j++){
        std::cout<<"Name # "<<j+1<<" : "<<array[j]<<"\n";
    }


    return 0;
}