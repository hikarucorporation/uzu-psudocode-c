// Function : operator<
// Namespace: juce:TypefaceFileAndIndex
// Entry    : 00300e80
// Prototype: ulong operator<(TypefaceFileAndIndex * this, undefined8 * param_1)
// Body     : 00300e80 - 00300f4d


/* juce::TypefaceFileAndIndex::TEMPNAMEPLACEHOLDERVALUE(juce::TypefaceFileAndIndex const&) const */

ulong __thiscall
juce::TypefaceFileAndIndex::operator<(TypefaceFileAndIndex *this,undefined8 *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  undefined7 uVar9;
  ulong uVar8;
  
  iVar3 = *(int *)(this + 8);
  pbVar5 = *(byte **)this;
  pbVar1 = pbVar5 + -0x10;
  if (pbVar1 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar1 = *(int *)pbVar1 + 1;
    UNLOCK();
  }
  iVar4 = *(int *)(param_1 + 1);
  pbVar6 = (byte *)*param_1;
  pbVar2 = pbVar6 + -0x10;
  if (pbVar2 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar2 = *(int *)pbVar2 + 1;
    UNLOCK();
  }
  uVar9 = (undefined7)((ulong)pbVar5 >> 8);
  if (pbVar5 != pbVar6) {
    uVar7 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                      (pbVar5,pbVar6);
    if ((int)uVar7 < 0) {
      uVar8 = CONCAT71(uVar9,1);
      goto joined_r0x00300efa;
    }
    uVar7 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                      (pbVar6,pbVar5);
    if ((int)uVar7 < 0) {
      uVar8 = 0;
      goto joined_r0x00300efa;
    }
  }
  uVar8 = CONCAT71(uVar9,iVar3 < iVar4);
joined_r0x00300efa:
  if (pbVar2 != (byte *)&emptyString) {
    LOCK();
    iVar3 = *(int *)pbVar2;
    *(int *)pbVar2 = *(int *)pbVar2 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      operator_delete__(pbVar2);
    }
  }
  if (pbVar1 != (byte *)&emptyString) {
    LOCK();
    iVar3 = *(int *)pbVar1;
    *(int *)pbVar1 = *(int *)pbVar1 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      operator_delete__(pbVar1);
    }
  }
  return uVar8 & 0xffffffff;
}


