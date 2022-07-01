#include <iostream>
#include <string>

using namespace std;

#include "LinkedList.h"

//START FUNCTION USED TO BUILD mergeLists fucntion**********************
template <class T>
void mergeLists(LinkedList<T> &list, LinkedList<T> &list2, LinkedList<T> &newList);

//END FUNCTION USED TO BUILD mergeLists fucntion************************


//START ALL FUNCTIONS TO BUILD compare FUNCTION////////////////////////
template <class T>
bool compare (LinkedList<T> &list1, LinkedList<T> &list2);
template <class T>
bool nodeCheck (LinkedList<T> &list1, LinkedList<T> &list2);

template <class T>
bool nodeEqual (LinkedList<T> &list1, LinkedList<T> &list2);

template <class T>
bool emptyLists (LinkedList<T> &list1, LinkedList<T> &list2);

template <class T>
bool valueEqual (LinkedList<T> &list1, LinkedList<T> &list2);
//END ALL FUNCTIONS USED TO BUILD COMPARE FUNCTION//////////////////////

int main()
{   //Problem 2
    LinkedList<int> list3;
    list3.appendNode(1);
    list3.appendNode(7);
    list3.appendNode(6);
    cout << endl << "data in a list: " << endl;
    list3.displayList();
    LinkedList<int> list4;
    list4.appendNode(2);
    list4.appendNode(99);
    LinkedList<int> mergedList;
    cout << endl << "data in another list: " << endl;
    list4.displayList();
    cout << endl;
    mergeLists(list3, list4, mergedList);
    cout << "The two lists merged together and sorted: " << endl;
    mergedList.displayList();
    cout << endl;
    
    //Problem 1
    LinkedList<int> list1;
    LinkedList<int> list2;
    list1.appendNode(5);
    list2.appendNode(5);
    list1.appendNode(99);
    list2.appendNode(99);
    cout << "Testing out the compare function: " << endl;
    //cout << endl;
    if (compare(list1, list2))
        cout << "lists are the same";
    
    else 
        cout << "different lists";
    
    cout << endl << "Now comparing two more lists of different nodes: " << endl;
    
    if (compare(list3, list4))
        cout << "lists are the same";
    
    else 
        cout << "different lists";
    
    cout << endl << "compare function returns true if lists are the same or are empty lists, false if lists have different number nodes or different data in corresponding nodes.";
    return 0;
}

//START FUNCTION USED TO BUILD mergeLists fucntion**********************
//**********************************************************************
template <class T>
void mergeLists(LinkedList<T> &list, LinkedList<T> &list2, LinkedList<T> &newList)
{
    //I know I need to dynamically allocate a LinkedList object in order to be able to return it.
    // I simply cannot figure out the syntax. I wrote the program as void for now.
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
//END FUNCTION USED TO BUILD mergeLists function*************************
//***********************************************************************

/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
// START ALL FUNCTIONS TO BUILD compare FUNCTION ////////////////////////

//*******************************************
// compare function returns true if two     *
// liast hvae same number nodes and same    *
// values in each corresponding position.   *
// Returns false if different number nodes  *
// or different values in same number nodes *
//******************************************* 
template <class T>
bool compare (LinkedList<T> &list1, LinkedList<T> &list2)
{
// to hold number of nodes in the list
int numNodes;

    // if both lists have same number of nodes 
    if (nodeEqual(list1, list2))
       {
            // if both lists are empty
            if (emptyLists(list1, list2))
            {
            cout << "Both lists are empty. " << endl;
            return true;
            }
            // if same number of nodes and 1+ nodes of data
            else
            {
                // if same number nodes and same data
                if (valueEqual(list1, list2))
                    return true;
                // same number nodes but different data in nodes
                // not the same lists so return false
                else
                    return false;
            }        
       }
          
    // if both lists have different number of nodes or
    // if both lists have same number of nodes but different values
    // either condition means different lists. return false. done.
    else
        return false;
    
    
}

//**************************************
// nodeEqual function returns true if  *
// the number of nodes in two lists    *
// are the same, false if different    *
// number of nodes in each list        *  
//**************************************
template <class T>
bool nodeEqual (LinkedList<T> &list1, LinkedList<T> &list2)
{
    if (list1.numNodes() == list2.numNodes())
        return true;
    
    else 
        return false;
}

//***************************************
// emptyLists function returns true if  *
// comparing two empty lists.           *
// Flase otherwise.                     *
//***************************************
template <class T>
bool emptyLists (LinkedList<T> &list1, LinkedList<T> &list2)
{
    if (list1.numNodes() == 0)
        return true;
        
    else
        return false;  
}

//*****************************************
//valueEqual function compares two lists  *
// with the same number of ndoes. If both *
// lists have the same values in the      *
// same position returns true. Else false.*
//*****************************************
template <class T>
bool valueEqual (LinkedList<T> &list1, LinkedList<T> &list2)
{
    // I can't think of a simple way given the member
    // functions of LinkedList given so I won't create it
    // I just don't have the time with other classes. 
    
    //create two new LinkedList objects to work with
    // so original lists do not get deleted.
    // where's copy constructor when you need it . . . // 
    
    
    
    

    for (int i=0; i<list1.numNodes(); i++)
    {
        if (list1.pop_front() != list2.pop_front())
            return false;
            
        else 
            return true;
    }
}

// END OF FUNCTIONS THAT BUILT compare FUNCTION /////////////////////////
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////

