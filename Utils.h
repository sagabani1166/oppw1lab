#ifndef SDDS_UTILS_H__
#define SDDS_UTILS_H__

namespace sdds {
    void flushkeys();
    bool ValidYesResponse(char ch);
    bool yes();
    void readCstr(char cstr[], int len);
    int readInt(int min, int max);
}


#endif