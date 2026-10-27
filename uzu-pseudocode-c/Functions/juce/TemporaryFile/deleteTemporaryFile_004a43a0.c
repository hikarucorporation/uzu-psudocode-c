// Function : deleteTemporaryFile
// Namespace: juce:TemporaryFile
// Entry    : 004a43a0
// Prototype: undefined deleteTemporaryFile(TemporaryFile * this)
// Body     : 004a43a0 - 004a45d4


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::TemporaryFile::deleteTemporaryFile() const */

void __thiscall juce::TemporaryFile::deleteTemporaryFile(TemporaryFile *this)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  ulong uVar4;
  stat64 local_a8;
  
  if (((**(char **)this == '\0') || (iVar2 = stat64(*(char **)this,&local_a8), iVar2 != 0)) ||
     ((local_a8.st_mode & 0x4000) == 0)) {
    uVar4 = File::deleteFile((File *)this);
    bVar1 = (byte)uVar4;
  }
  else {
    bVar1 = File::deleteRecursively((File *)this,0);
  }
  if (bVar1 == 0) {
    local_a8.st_dev = _DAT_005de310;
    local_a8.st_ino = _UNK_005de318;
    do {
      iVar2 = nanosleep((timespec *)&local_a8,(timespec *)&local_a8);
      if (iVar2 != -1) break;
      piVar3 = __errno_location();
    } while (*piVar3 == 4);
    if (((**(char **)this == '\0') || (iVar2 = stat64(*(char **)this,&local_a8), iVar2 != 0)) ||
       ((local_a8.st_mode & 0x4000) == 0)) {
      uVar4 = File::deleteFile((File *)this);
      bVar1 = (byte)uVar4;
    }
    else {
      bVar1 = File::deleteRecursively((File *)this,0);
    }
    if (bVar1 == 0) {
      local_a8.st_dev = _DAT_005de310;
      local_a8.st_ino = _UNK_005de318;
      do {
        iVar2 = nanosleep((timespec *)&local_a8,(timespec *)&local_a8);
        if (iVar2 != -1) break;
        piVar3 = __errno_location();
      } while (*piVar3 == 4);
      if (((**(char **)this == '\0') || (iVar2 = stat64(*(char **)this,&local_a8), iVar2 != 0)) ||
         ((local_a8.st_mode & 0x4000) == 0)) {
        uVar4 = File::deleteFile((File *)this);
        bVar1 = (byte)uVar4;
      }
      else {
        bVar1 = File::deleteRecursively((File *)this,0);
      }
      if (bVar1 == 0) {
        local_a8.st_dev = _DAT_005de310;
        local_a8.st_ino = _UNK_005de318;
        do {
          iVar2 = nanosleep((timespec *)&local_a8,(timespec *)&local_a8);
          if (iVar2 != -1) break;
          piVar3 = __errno_location();
        } while (*piVar3 == 4);
        if (((**(char **)this == '\0') || (iVar2 = stat64(*(char **)this,&local_a8), iVar2 != 0)) ||
           ((local_a8.st_mode & 0x4000) == 0)) {
          uVar4 = File::deleteFile((File *)this);
          bVar1 = (byte)uVar4;
        }
        else {
          bVar1 = File::deleteRecursively((File *)this,0);
        }
        if (bVar1 == 0) {
          local_a8.st_dev = _DAT_005de310;
          local_a8.st_ino = _UNK_005de318;
          do {
            iVar2 = nanosleep((timespec *)&local_a8,(timespec *)&local_a8);
            if (iVar2 != -1) break;
            piVar3 = __errno_location();
          } while (*piVar3 == 4);
          if (((**(char **)this == '\0') || (iVar2 = stat64(*(char **)this,&local_a8), iVar2 != 0))
             || ((local_a8.st_mode & 0x4000) == 0)) {
            uVar4 = File::deleteFile((File *)this);
            bVar1 = (byte)uVar4;
          }
          else {
            bVar1 = File::deleteRecursively((File *)this,0);
          }
          if (bVar1 == 0) {
            local_a8.st_dev = _DAT_005de310;
            local_a8.st_ino = _UNK_005de318;
            do {
              iVar2 = nanosleep((timespec *)&local_a8,(timespec *)&local_a8);
              if (iVar2 != -1) {
                return;
              }
              piVar3 = __errno_location();
            } while (*piVar3 == 4);
          }
        }
      }
    }
  }
  return;
}


