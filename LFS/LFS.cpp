#include "LFS.h"



const char* LFS::getSystemJSON(){
    const char* file_content = nullptr;
    File f = LittleFS.open("/system/system.json", "r");
    if (!f) {
        ErrorState::enter("Could not open system.json for reading.");
    }
    else{
        file_content = f.readString().c_str();
        f.close();
    }
    return file_content;
}