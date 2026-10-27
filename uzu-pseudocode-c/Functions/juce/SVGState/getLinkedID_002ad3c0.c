// Function : getLinkedID
// Namespace: juce:SVGState
// Entry    : 002ad3c0
// Prototype: undefined getLinkedID(SVGState * this, long * param_1)
// Body     : 002ad3c0 - 002ad56a


/* juce::SVGState::getLinkedID(juce::SVGState::XmlPath const&) */

void __thiscall juce::SVGState::getLinkedID(SVGState *this,long *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  long *plVar8;
  uint uVar9;
  
  if (param_1 != (long *)0x0) {
    do {
      uVar4 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                        ((byte *)param_1[1],(byte *)"xlink:href");
      if (uVar4 == 0) {
        plVar8 = param_1 + 2;
        goto LAB_002ad456;
      }
      param_1 = (long *)*param_1;
    } while (param_1 != (long *)0x0);
  }
  plVar8 = (long *)&getEmptyStringRef()::empty;
  if ((getEmptyStringRef()::empty == '\0') &&
     (iVar5 = __cxa_guard_acquire(&getEmptyStringRef()::empty), iVar5 != 0)) {
    getEmptyStringRef()::empty = &DAT_0061ac58;
    plVar8 = (long *)&getEmptyStringRef()::empty;
    __cxa_atexit(juce::String::~String,&getEmptyStringRef()::empty,&__dso_handle);
    __cxa_guard_release(&getEmptyStringRef()::empty);
  }
LAB_002ad456:
  pbVar3 = (byte *)*plVar8;
  pbVar1 = pbVar3 + -0x10;
  if (pbVar1 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar1 = *(int *)pbVar1 + 1;
    UNLOCK();
  }
  bVar2 = *pbVar3;
  uVar4 = (uint)bVar2;
  if ((char)bVar2 < '\0') {
    if ((bVar2 & 0x40) == 0) {
      uVar4 = bVar2 & 0x7f;
    }
    else {
      uVar9 = 0x3f;
      if ((bVar2 & 0x20) != 0) {
        uVar9 = uVar4 & 0x10 ^ 0x1f;
      }
      uVar4 = uVar9 & bVar2;
      if (((((pbVar3[1] & 0xffffffc0) == 0x80) &&
           (uVar4 = pbVar3[1] & 0x3f | uVar4 << 6, (bVar2 & 0x20) != 0)) &&
          ((pbVar3[2] & 0xc0) == 0x80)) &&
         ((uVar4 = pbVar3[2] & 0x3f | uVar4 << 6, (bVar2 >> 5 & (bVar2 & 0x10) == 0) == 0 &&
          ((pbVar3[3] & 0xffffffc0) == 0x80)))) {
        uVar4 = uVar4 << 6 | pbVar3[3] & 0x3f;
      }
    }
  }
  puVar6 = (undefined4 *)&DAT_0061ac58;
  if ((uVar4 == 0x23) && (bVar2 != 0)) {
    pbVar7 = pbVar3 + 1;
    if (((char)bVar2 < '\0') && ((bVar2 & 0x40) != 0)) {
      if ((bVar2 & 0x20) == 0) {
        pbVar7 = pbVar3 + 2;
      }
      else {
        pbVar7 = pbVar3 + (4 - (ulong)((bVar2 & 0x10) == 0));
      }
    }
                    /* try { // try from 002ad53e to 002ad542 has its CatchHandler @ 002ad56b */
    puVar6 = StringHolderUtils::createFromCharPointer<juce::CharPointer_UTF8>(pbVar7);
  }
  *(undefined4 **)this = puVar6;
  if (pbVar1 != (byte *)&emptyString) {
    LOCK();
    iVar5 = *(int *)pbVar1;
    *(int *)pbVar1 = *(int *)pbVar1 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      operator_delete__(pbVar1);
      return;
    }
  }
  return;
}


