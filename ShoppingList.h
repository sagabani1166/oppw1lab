#ifndef SDDS_SHOPPINGLIST_H__
#define SDDS_SHOPPINGLIST_H__
#include "ShoppingRec.h" // for ShopingRec records

namespace sdds {
    const int MAX_NO_OF_RECS = 15;
    ShoppingRec recs[MAX_NO_OF_RECS] = {};
    int noOfRecs = 0;

    bool loadList();
    void displayList();
    void removeBoughtItems();
    void removeItem(int index);
    bool saveList();
    void clearList();
    void toggleBought();
    void addItemToList();
    void removeItemfromList();
    bool listIsEmpty();
    
}

#endif

    
    
    
    
    
    
    
    
    
    