// Function : deleteFile
// Namespace: juce:File
// Entry    : 004a0250
// Prototype: ulong deleteFile(File * this)
// Body     : 004a0250 - 004a02c4


/* juce::File::deleteFile() const */

ulong __thiscall juce::File::deleteFile(File *this)

{
  bool bVar1;
  int iVar2;
  ulong unaff_RBX;
  stat64 local_a0;
  
  bVar1 = isSymbolicLink(*(File **)this);
  if (bVar1) goto LAB_004a0269;
  unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
  if (**(char **)this == '\0') goto LAB_004a028d;
  iVar2 = access(*(char **)this,0);
  if (iVar2 != 0) goto LAB_004a028d;
  if (**(char **)this == '\0') {
LAB_004a0269:
    iVar2 = remove(*(char **)this);
  }
  else {
    iVar2 = stat64(*(char **)this,&local_a0);
    if ((iVar2 != 0) || ((local_a0.st_mode & 0x4000) == 0)) goto LAB_004a0269;
    iVar2 = rmdir(*(char **)this);
  }
  unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),iVar2 == 0);
LAB_004a028d:
  return unaff_RBX & 0xffffffff;
}


