#include <iostream>
#include <string>

using namespace std;

#include "LinkedList.h"
LinkedList<int> returnObject(LinkedList<int> &list1);


int main()
{

LinkedList<int> list1;
returnObject(list1);
//list2 = new LinkedList<int>;
//list2 = returnObject();

    return 0;
}

template <class T>
LinkedList<int> returnObject(LinkedList<int> &list1)
{
    //LinkedList<T> list1;
   // list1 = new LinkedList<int>;
    list1.insertNode(5);
    
    return list1;
}
    


template <class T>
void mergeLists(LinkedList<T> &list, LinkedList<T> &list2, LinkedList<T> &newList)
{

    // Dynamic allocation
    // This allow function to be returnable, but set to VOID right now.
    // Fun challenge to change this program in the future.
    //LinkedList<int>*newList=new LinkedList<int>;

    int num = 0;
    
    //insert first list in order
    for (int i=0; i<list.numNodes(); i++)
    {
        num = list.atNode(i);
        newList.insertNode(num);
    }
    
    //insert second list in order
    for (int i=0; i<list2.numNodes(); i++)
    {
        num = list2.atNode(i);
        newList.insertNode(num);
    }
}
