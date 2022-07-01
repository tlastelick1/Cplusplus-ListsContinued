#include <iostream>
#include <list>

using namespace std;

void mainDisplay(list<int> vlist, list<int> plist);

int main()
{
    list<int> vlist = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    list<int> plist = {2, 5, 6, 8};
    
    mainDisplay(vlist, plist);
    

    return 0;
}

// advances an iterator to a specific position indicated by a variable
void mainDisplay(list<int> vlist, list<int> plist)
{
    int position = 1;
    
    
    list<int> :: iterator it = vlist.begin();
    
    //permanently set the iterator to the position indicated
    //advance(it, position);
    //cout << *it;
    
    
    // show what iterator would be in a list at position indicated
    // must define all in one line
    cout << "The iterators in vlist, indicated by plist are: " << endl;
    for (list<int> :: iterator p = plist.begin(); p != plist.end(); p++)
    {
        position = *p;   
        list<int> :: iterator i = next(vlist.begin(), position);
        cout << *i << " "; 
    }
   
}


