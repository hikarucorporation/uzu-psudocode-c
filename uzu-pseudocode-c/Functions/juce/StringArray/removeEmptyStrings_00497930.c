// Function : removeEmptyStrings
// Namespace: juce:StringArray
// Entry    : 00497930
// Prototype: undefined removeEmptyStrings(Array<juce::String,juce::DummyCriticalSection,0> * param_1)
// Body     : 00497930 - 00497a81


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::StringArray::removeEmptyStrings(bool) */

void __cdecl
juce::StringArray::removeEmptyStrings(Array<juce::String,juce::DummyCriticalSection,0> *param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  wint_t __wc;
  
  uVar5 = (ulong)*(uint *)(param_1 + 0xc);
  if (0 < (int)*(uint *)(param_1 + 0xc)) {
    do {
      uVar6 = uVar5 - 1;
      pbVar7 = *(byte **)(*(long *)param_1 + (uVar6 & 0xffffffff) * 8);
      bVar2 = *pbVar7;
      while (bVar2 != 0) {
        __wc = (wint_t)bVar2;
        if ((char)bVar2 < '\0') {
          if ((bVar2 & 0x40) == 0) {
            __wc = bVar2 & 0x7f;
          }
          else {
            uVar4 = __wc & 0x10 ^ 0x1f;
            if ((bVar2 & 0x20) == 0) {
              uVar4 = 0x3f;
            }
            __wc = __wc & uVar4;
            if (((((pbVar7[1] & 0xffffffc0) == 0x80) &&
                 (__wc = pbVar7[1] & 0x3f | __wc << 6, (bVar2 & 0x20) != 0)) &&
                ((pbVar7[2] & 0xffffffc0) == 0x80)) &&
               ((__wc = pbVar7[2] & 0x3f | __wc << 6, (bVar2 >> 5 & (bVar2 & 0x10) == 0) == 0 &&
                ((pbVar7[3] & 0xffffffc0) == 0x80)))) {
              __wc = __wc << 6 | pbVar7[3] & 0x3f;
            }
          }
        }
        iVar3 = iswspace(__wc);
        if (iVar3 == 0) goto LAB_00497950;
        pbVar8 = pbVar7 + 1;
        bVar2 = *pbVar7;
        if (((char)bVar2 < '\0') && ((bVar2 & 0x40) != 0)) {
          if ((bVar2 & 0x20) == 0) {
            pbVar8 = pbVar7 + 2;
          }
          else {
            pbVar8 = pbVar7 + (4 - (ulong)((bVar2 & 0x10) == 0));
          }
        }
        pbVar7 = pbVar8;
        bVar2 = *pbVar8;
      }
      if ((uint)uVar6 < *(uint *)(param_1 + 0xc)) {
        Array<juce::String,juce::DummyCriticalSection,0>::removeInternal
                  (param_1,(long *)(uVar6 & 0xffffffff));
      }
LAB_00497950:
      bVar1 = 1 < (long)uVar5;
      uVar5 = uVar6;
    } while (bVar1);
  }
  return;
}


