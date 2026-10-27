// Function : readdir
// Namespace: _EXTERNAL_
// Entry    : 0015dd60
// Prototype: dirent * readdir(DIR * __dirp)
// Body     : 0015dd60 - 0015dd65


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent * readdir(DIR *__dirp)

{
  dirent *pdVar1;
  
  pdVar1 = (dirent *)(*(code *)PTR_readdir_007176b0)();
  return pdVar1;
}


