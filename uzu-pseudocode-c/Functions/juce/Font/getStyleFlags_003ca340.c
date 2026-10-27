// Function : getStyleFlags
// Namespace: juce:Font
// Entry    : 003ca340
// Prototype: uint getStyleFlags(Font * this)
// Body     : 003ca340 - 003ca451


/* juce::Font::getStyleFlags() const */

uint __thiscall juce::Font::getStyleFlags(Font *this)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  int *piVar5;
  uint uVar6;
  long local_30;
  
  bVar2 = *(byte *)(*(long *)this + 0x7d);
  lVar3 = *(long *)(*(long *)this + 0x20);
  piVar5 = (int *)(lVar3 + -0x10);
  if (piVar5 != &emptyString) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
  local_30 = lVar3;
  uVar4 = juce::String::containsWholeWordIgnoreCase((String *)&local_30,&DAT_005e50a9);
  piVar5 = (int *)(lVar3 + -0x10);
  if (piVar5 != &emptyString) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar5);
    }
  }
  local_30 = *(long *)(*(long *)this + 0x20);
  piVar5 = (int *)(local_30 + -0x10);
  if (piVar5 != &emptyString) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
  uVar6 = (uint)bVar2 << 2 | (uint)uVar4 & 0xff;
  uVar4 = juce::String::containsWholeWordIgnoreCase((String *)&local_30,(byte *)0x5e50a2);
  if ((char)uVar4 == '\0') {
    uVar4 = juce::String::containsWholeWordIgnoreCase((String *)&local_30,(byte *)"Oblique");
    piVar5 = (int *)(local_30 + -0x10);
    if (piVar5 != &emptyString) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar5);
      }
    }
    if ((char)uVar4 == '\0') {
      return uVar6;
    }
  }
  else {
    piVar5 = (int *)(local_30 + -0x10);
    if (piVar5 != &emptyString) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar5);
      }
    }
  }
  return uVar6 | 2;
}


