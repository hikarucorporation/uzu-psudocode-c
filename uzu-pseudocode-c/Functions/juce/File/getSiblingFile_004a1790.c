// Function : getSiblingFile
// Namespace: juce:File
// Entry    : 004a1790
// Prototype: undefined getSiblingFile(File * param_1, undefined8 * param_2, byte * param_3)
// Body     : 004a1790 - 004a1847


/* WARNING: Removing unreachable block (ram,0x004a17df) */
/* WARNING: Removing unreachable block (ram,0x004a17ec) */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::File::getSiblingFile(juce::StringRef) const */

void __cdecl juce::File::getSiblingFile(File *param_1,undefined8 *param_2,byte *param_3)

{
  int iVar1;
  int *piVar2;
  long local_28;
  long local_20;
  
  getPathUpToLastSlash(&local_20,param_2);
  piVar2 = (int *)(local_20 + -0x10);
  if (piVar2 != &emptyString) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  LOCK();
  UNLOCK();
  local_28 = local_20;
  piVar2 = (int *)(local_20 + -0x10);
  if (piVar2 != &emptyString) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar2);
    }
  }
                    /* try { // try from 004a1811 to 004a181e has its CatchHandler @ 004a1848 */
  getChildFile(param_1,&local_28,param_3);
  piVar2 = (int *)(local_28 + -0x10);
  if (piVar2 != &emptyString) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar2);
    }
  }
  return;
}


