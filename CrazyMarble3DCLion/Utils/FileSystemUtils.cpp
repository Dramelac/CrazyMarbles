//
// Created by mathieu on 15/05/16.
//

#include "FileSystemUtils.h"

bool FileSystemUtils::CheckExistingDir(stringc path) {

    DIR* rep = opendir(path.c_str());

    if (rep == nullptr){
        return false;
    }
    closedir(rep);
    return true;

}

array<stringc> FileSystemUtils::parseDirectory(stringc path) {
    DIR* rep = opendir(path.c_str());
    dirent* CurrentReadingFile = nullptr;
    array<stringc> listFile;

    while ((CurrentReadingFile = readdir(rep)) != nullptr) {
        stringc tempName = CurrentReadingFile->d_name;
        if (tempName == "." or tempName == "..") continue;
        stringc tempPath = path + "/" + tempName;

        if (CheckExistingDir(tempPath)){
            // folder
        }
        else{
            //file
            listFile.push_back(tempPath);
        }

    }
    return listFile;
}

