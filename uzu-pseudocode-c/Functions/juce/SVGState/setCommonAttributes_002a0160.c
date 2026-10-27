// Function : setCommonAttributes
// Namespace: juce:SVGState
// Entry    : 002a0160
// Prototype: undefined setCommonAttributes(long * param_1, long * param_2)
// Body     : 002a0160 - 002a0346


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::SVGState::setCommonAttributes(juce::Drawable&, juce::SVGState::XmlPath const&) */

void __cdecl juce::SVGState::setCommonAttributes(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  long *plVar6;
  long local_28;
  
  for (puVar2 = *(undefined8 **)(*param_2 + 0x10); puVar2 != (undefined8 *)0x0;
      puVar2 = (undefined8 *)*puVar2) {
    uVar3 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                      ((byte *)puVar2[1],&DAT_0065bedf);
    if (uVar3 == 0) {
      plVar6 = puVar2 + 2;
      goto LAB_002a0206;
    }
  }
  plVar6 = (long *)&getEmptyStringRef()::empty;
  if ((getEmptyStringRef()::empty == '\0') &&
     (iVar4 = __cxa_guard_acquire(&getEmptyStringRef()::empty), iVar4 != 0)) {
    getEmptyStringRef()::empty = &DAT_0061ac58;
    plVar6 = (long *)&getEmptyStringRef()::empty;
    __cxa_atexit(juce::String::~String,&getEmptyStringRef()::empty,&__dso_handle);
    __cxa_guard_release(&getEmptyStringRef()::empty);
  }
LAB_002a0206:
  local_28 = *plVar6;
  piVar5 = (int *)(local_28 + -0x10);
  if (piVar5 != &emptyString) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
                    /* try { // try from 002a0224 to 002a02cf has its CatchHandler @ 002a0347 */
  (**(code **)(*param_1 + 0x58))(param_1,&local_28);
  piVar5 = (int *)(local_28 + -0x10);
  if (piVar5 != &emptyString) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
  LOCK();
  lVar1 = param_1[2];
  param_1[2] = local_28;
  UNLOCK();
  piVar5 = (int *)(lVar1 + -0x10);
  if (piVar5 != &emptyString) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      operator_delete__(piVar5);
      plVar6 = *(long **)(*param_2 + 0x10);
      goto joined_r0x002a029f;
    }
  }
  plVar6 = *(long **)(*param_2 + 0x10);
joined_r0x002a029f:
  if (plVar6 != (long *)0x0) {
    do {
      uVar3 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                        ((byte *)plVar6[1],(byte *)"display");
      if (uVar3 == 0) {
        plVar6 = plVar6 + 2;
        goto LAB_002a02b2;
      }
      plVar6 = (long *)*plVar6;
    } while (plVar6 != (long *)0x0);
  }
  plVar6 = (long *)&getEmptyStringRef()::empty;
  if ((getEmptyStringRef()::empty == '\0') &&
     (iVar4 = __cxa_guard_acquire(&getEmptyStringRef()::empty), iVar4 != 0)) {
    getEmptyStringRef()::empty = &DAT_0061ac58;
    plVar6 = (long *)&getEmptyStringRef()::empty;
    __cxa_atexit(juce::String::~String,&getEmptyStringRef()::empty,&__dso_handle);
    __cxa_guard_release(&getEmptyStringRef()::empty);
  }
LAB_002a02b2:
  uVar3 = CharacterFunctions::compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                    ((byte *)*plVar6,&DAT_0065e5f2);
  if (uVar3 == 0) {
    (**(code **)(*param_1 + 0x60))(param_1,0);
  }
  piVar5 = (int *)(local_28 + -0x10);
  if (piVar5 != &emptyString) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      operator_delete__(piVar5);
    }
  }
  return;
}


