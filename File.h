#ifndef SDDS_FILE_H__
#define SDDS_FILE_H__
#include "ShoppingRec.h"

namespace sdds {
    const char* const SHOPPING_DATA_FILE = "shoppinglist.csv";
    FILE* sfptr = nullptr;

    bool openFileForRead();
    bool openFileForOverwrite();
    void closeFile();
    bool freadShoppingRec(ShoppingRec* rec);
    void fwriteShoppintRec(const ShoppingRec* rec);
}

#endif