// Function : trimStart
// Namespace: juce:String
// Entry    : 0049dbd0
// Prototype: undefined trimStart(undefined8 * param_1, undefined8 * param_2)
// Body     : 0049dbd0 - 0049dd61


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::String::trimStart() const */

void __cdecl juce::String::trimStart(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  size_t sVar4;
  undefined4 *puVar5;
  uint uVar6;
  byte *pbVar7;
  uint __wc;
  byte *pbVar8;
  
  pbVar8 = (byte *)*param_2;
  bVar1 = *pbVar8;
  if ((bVar1 != 0) && (sVar4 = strlen((char *)pbVar8), sVar4 != 0)) {
    pbVar2 = pbVar8;
    while( true ) {
      __wc = (uint)bVar1;
      if ((char)bVar1 < '\0') {
        if ((bVar1 & 0x40) == 0) {
          __wc = __wc & 0x7f;
        }
        else {
          uVar6 = __wc & 0x10 ^ 0x1f;
          if ((bVar1 & 0x20) == 0) {
            uVar6 = 0x3f;
          }
          __wc = __wc & uVar6;
          if (((((pbVar2[1] & 0xffffffc0) == 0x80) &&
               (__wc = pbVar2[1] & 0x3f | __wc << 6, (bVar1 & 0x20) != 0)) &&
              ((pbVar2[2] & 0xffffffc0) == 0x80)) &&
             ((__wc = pbVar2[2] & 0x3f | __wc << 6, (bVar1 >> 5 & (bVar1 & 0x10) == 0) == 0 &&
              ((pbVar2[3] & 0xffffffc0) == 0x80)))) {
            __wc = __wc << 6 | pbVar2[3] & 0x3f;
          }
        }
      }
      iVar3 = iswspace(__wc);
      if (iVar3 == 0) break;
      pbVar7 = pbVar2 + 1;
      bVar1 = *pbVar2;
      if (((char)bVar1 < '\0') && ((bVar1 & 0x40) != 0)) {
        if ((bVar1 & 0x20) == 0) {
          pbVar7 = pbVar2 + 2;
        }
        else {
          pbVar7 = pbVar2 + (4 - (ulong)((bVar1 & 0x10) == 0));
        }
      }
      pbVar2 = pbVar8 + sVar4;
      if (pbVar7 == pbVar8 + sVar4) break;
      bVar1 = *pbVar7;
      pbVar2 = pbVar7;
    }
    if (pbVar2 != pbVar8) {
      puVar5 = StringHolderUtils::createFromCharPointer<juce::CharPointer_UTF8>(pbVar2);
      *param_1 = puVar5;
      return;
    }
    pbVar8 = (byte *)*param_2;
  }
  *param_1 = pbVar8;
  pbVar8 = pbVar8 + -0x10;
  if (pbVar8 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar8 = *(int *)pbVar8 + 1;
    UNLOCK();
  }
  return;
}


