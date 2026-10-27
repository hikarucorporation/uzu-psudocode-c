// Function : FileInputStream
// Namespace: juce:FileInputStream
// Entry    : 0049e410
// Prototype: undefined FileInputStream(FileInputStream * this, long * param_1)
// Body     : 0049e410 - 0049e4b2


/* juce::FileInputStream::FileInputStream(juce::File const&) */

void __thiscall juce::FileInputStream::FileInputStream(FileInputStream *this,long *param_1)

{
  long lVar1;
  int iVar2;
  char *__file;
  int *piVar3;
  long local_20;
  
  *(undefined ***)this = &PTR__FileInputStream_007130c8;
  __file = (char *)*param_1;
  *(char **)(this + 8) = __file;
  piVar3 = (int *)(__file + -0x10);
  if (piVar3 != &emptyString) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
    __file = *(char **)(this + 8);
  }
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined1 **)(this + 0x20) = &DAT_0061ac58;
                    /* try { // try from 0049e45f to 0049e483 has its CatchHandler @ 0049e4b3 */
  iVar2 = open(__file,0);
  if (iVar2 == -1) {
    (anonymous_namespace)::getResultForErrno((_anonymous_namespace_ *)&local_20);
    lVar1 = *(long *)(this + 0x20);
    *(long *)(this + 0x20) = local_20;
    piVar3 = (int *)(lVar1 + -0x10);
    if (piVar3 != &emptyString) {
      LOCK();
      iVar2 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        local_20 = lVar1;
        operator_delete__(piVar3);
      }
    }
  }
  else {
    *(int *)(this + 0x10) = iVar2;
  }
  return;
}


