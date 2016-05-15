//
// Created by mathieu on 15/05/16.
//

#ifndef CRAZYMARBLE3DCLION_FILESYSTEMUTILS_H
#define CRAZYMARBLE3DCLION_FILESYSTEMUTILS_H

#include <dirent.h>
#include <irrlicht.h>

using namespace irr;
using namespace core;

class FileSystemUtils {
public:
    static bool CheckExistingDir(stringc path);
    static array<stringc> parseDirectory(stringc path);
};


#endif //CRAZYMARBLE3DCLION_FILESYSTEMUTILS_H
