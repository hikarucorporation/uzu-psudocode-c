// Function : replaceFileIn
// Namespace: juce:File
// Entry    : 004a0fd0
// Prototype: ulong replaceFileIn(File * this, File * param_1)
// Body     : 004a0fd0 - 004a1112


/* juce::File::replaceFileIn(juce::File const&) const */

ulong __thiscall juce::File::replaceFileIn(File *this,File *param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  byte *__old;
  byte *__name;
  
  __old = *(byte **)this;
  __name = *(byte **)param_1;
  if ((__name != __old) &&
     (uVar1 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                        (__name,__old), uVar1 != 0)) {
    if (*__name != 0) {
      iVar2 = access((char *)__name,0);
      __old = *(byte **)this;
      __name = *(byte **)param_1;
      if (iVar2 != 0) goto LAB_004a101d;
      iVar2 = rename((char *)__old,(char *)__name);
      if (iVar2 == 0) {
LAB_004a10fb:
        __name = (byte *)CONCAT71((int7)((ulong)__name >> 8),1);
        param_1 = this;
      }
      else {
        uVar3 = isNonEmptyDirectory(this);
        if ((((char)uVar3 != '\0') || (uVar3 = hasWriteAccess(this), (char)uVar3 == '\0')) ||
           (uVar3 = copyInternal(this,param_1), (char)uVar3 == '\0')) goto LAB_004a1108;
        uVar3 = deleteFile(this);
        if ((char)uVar3 != '\0') goto LAB_004a10fb;
LAB_004a110c:
        __name = (byte *)0x0;
      }
      deleteFile(param_1);
      goto LAB_004a10ac;
    }
LAB_004a101d:
    if ((__name != __old) &&
       (uVar1 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                          (__name,__old), uVar1 != 0)) {
      if (*__old != 0) {
        __name = (byte *)0x0;
        iVar2 = access((char *)__old,0);
        if (iVar2 != 0) goto LAB_004a10ac;
        uVar3 = deleteFile(param_1);
        if ((char)uVar3 != '\0') {
          iVar2 = rename(*(char **)this,*(char **)param_1);
          if (iVar2 == 0) goto LAB_004a10a9;
          uVar3 = isNonEmptyDirectory(this);
          if ((((char)uVar3 == '\0') && (uVar3 = hasWriteAccess(this), (char)uVar3 != '\0')) &&
             (uVar3 = copyInternal(this,param_1), (char)uVar3 != '\0')) {
            uVar3 = deleteFile(this);
            __name = (byte *)0x1;
            if ((char)uVar3 != '\0') goto LAB_004a10ac;
            goto LAB_004a110c;
          }
        }
      }
LAB_004a1108:
      __name = (byte *)0x0;
      goto LAB_004a10ac;
    }
  }
LAB_004a10a9:
  __name = (byte *)CONCAT71((int7)((ulong)__name >> 8),1);
LAB_004a10ac:
  return (ulong)__name & 0xffffffff;
}


