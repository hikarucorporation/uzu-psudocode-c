// Function : getCurrentWorkingDirectory
// Namespace: juce:File
// Entry    : 0049cc10
// Prototype: undefined getCurrentWorkingDirectory(File * this)
// Body     : 0049cc10 - 0049cce6


/* juce::File::getCurrentWorkingDirectory() */

void __thiscall juce::File::getCurrentWorkingDirectory(File *this)

{
  int iVar1;
  byte *pbVar2;
  int *piVar3;
  char *__buf;
  undefined4 *puVar4;
  undefined8 in_RCX;
  undefined8 extraout_RDX;
  size_t __size;
  uint *in_R8;
  ulong in_R9;
  undefined4 *local_430;
  char local_428 [1032];
  
  pbVar2 = (byte *)getcwd(local_428,0x3ff);
  if (pbVar2 == (byte *)0x0) {
    __size = 0x1000;
    __buf = (char *)0x0;
    piVar3 = __errno_location();
    do {
      if (*piVar3 != 0x22) {
        pbVar2 = (byte *)0x0;
        break;
      }
      free(__buf);
      if (__size == 0) {
        __buf = (char *)0x0;
      }
      else {
        __buf = malloc(__size);
      }
      pbVar2 = (byte *)getcwd(__buf,__size - 1);
      __size = __size + 0x400;
    } while (pbVar2 == (byte *)0x0);
  }
  else {
    __buf = (char *)0x0;
  }
                    /* try { // try from 0049cc8e to 0049cc95 has its CatchHandler @ 0049cd11 */
  puVar4 = StringHolderUtils::createFromCharPointer<juce::CharPointer_UTF8>(pbVar2);
                    /* try { // try from 0049cc9e to 0049ccaa has its CatchHandler @ 0049cce7 */
  local_430 = puVar4;
  parseAbsolutePath(this,(uint *)&local_430,extraout_RDX,in_RCX,in_R8,in_R9);
  piVar3 = puVar4 + -4;
  if (piVar3 != &emptyString) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar3);
    }
  }
  free(__buf);
  return;
}


