// Function : getParentDirectory
// Namespace: juce:File
// Entry    : 0049f7a0
// Prototype: File * getParentDirectory(File * this, undefined8 * param_1)
// Body     : 0049f7a0 - 0049f82b


/* juce::File::getParentDirectory() const */

File * __thiscall juce::File::getParentDirectory(File *this,undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  long in_RAX;
  int *piVar3;
  long local_18;
  
  local_18 = in_RAX;
  getPathUpToLastSlash(&local_18,param_1);
  *(undefined1 **)this = &DAT_0061ac58;
  piVar3 = (int *)(local_18 + -0x10);
  if (piVar3 != &emptyString) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  LOCK();
  lVar2 = *(long *)this;
  *(long *)this = local_18;
  UNLOCK();
  piVar3 = (int *)(lVar2 + -0x10);
  if (piVar3 != &emptyString) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar3);
    }
  }
  piVar3 = (int *)(local_18 + -0x10);
  if (piVar3 != &emptyString) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar3);
    }
  }
  return this;
}


