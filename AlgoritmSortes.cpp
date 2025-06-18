#include <iostream>
#include<vector>
using namespace std;

void selectSort (vector<int>& v)
{
    for(int i = 0; i < v.size() ; i++)
    {
        int min_index = i;// fires index 
        for(int j = i+1; j < v.size() ; j++)
        {
            if (v[j] < v[min_index])
            {
                min_index = j;//when fide min elem change ndex  
            }
        }
        swap(v[min_index], v[i]);// first itereit change min elem in first index 
    }
}
/*
   v[1] = 25 ➝  < 64-ից, min_index = 1

   v[2] = 12 ➝  < 25-ից, min_index = 2

   v[3] = 22 ➝  > 12-ից, min_index չի փոխվում

   v[4] = 11 ➝  < 12-ից, min_index = 4
 */

void bubbleSort(vector<int>& v) {
    int n = v.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]);
            }
        }
    }
}

//  vector<int> vec  = {1,8,364,7,4,3}
void BubleSort (vector<int>& v)
{
    int n = v.size() -1;
    bool swaped = false;

    for (int i = 0; i < n; i++)
    {    
        swaped = false;

        for (int j = 0 ; j < n; j++)
        { 
            if (v[j] > v[j+1])
            {
                swap(v[j] , v[j+1]); 
                swaped = true;
            }
        }
        if(swaped)// if all sorted break :)
            break;
    }
}
void insertionSort(vector<int>& v)
{
    int n = v.size();
    for (int i = 1; i < n; ++i) 
    {
        int key = v[i];
        int previous = i - 1;

        std::cout << " key \t "<< v[i];// << std::endl;
        for ( ; previous >= 0 && v[previous] > key ; previous-- )
        {
            v[previous + 1] = v[previous];
            std::cout << " previous + 1\t "<<v[previous + 1]<<"\t= \t"<<v[previous];
        }
        v[previous + 1] = key;// Տեղադրում ենք key-ն իր ճիշտ դիրքում
        std::cout  << std::endl;
    }
}
/*
 key 	 3 nex	 5	= 	5
 key 	 8
 key 	 4 nex	 8	= 	8 nex	 5	= 	5
 key 	 2 nex	 8	= 	8 nex	 5	= 	5 nex	 4	= 	4 nex	 3	= 	3
*/


int main ()
{
    vector<int> vec  ={5, 3, 8, 4, 2}; 
//    BubleSort(vec);
//    selectSort(vec);
    insertionSort(vec);
    for(int val : vec)
        std::cout << "val  \t "<< val  << std::endl;
    return 0;
}
