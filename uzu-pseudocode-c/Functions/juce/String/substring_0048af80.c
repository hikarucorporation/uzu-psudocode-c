// Function : substring
// Namespace: juce:String
// Entry    : 0048af80
// Prototype: undefined substring(long * param_1, long * param_2, int param_3)
// Body     : 0048af80 - 0048b008


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::String::substring(int) const */

void __cdecl juce::String::substring(long *param_1,long *param_2,int param_3)

{
  byte bVar1;
  long lVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  if (param_3 < 1) {
    lVar2 = *param_2;
    *param_1 = lVar2;
    piVar3 = (int *)(lVar2 + -0x10);
    if (piVar3 != &emptyString) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
      return;
    }
  }
  else {
    iVar5 = param_3 + 1;
    pbVar6 = (byte *)*param_2;
    do {
      bVar1 = *pbVar6;
      if (bVar1 == 0) {
        puVar4 = (undefined4 *)&DAT_0061ac58;
        goto LAB_0048b004;
      }
      pbVar7 = pbVar6 + 1;
      if (((char)bVar1 < '\0') && ((bVar1 & 0x40) != 0)) {
        if ((bVar1 & 0x20) == 0) {
          pbVar7 = pbVar6 + 2;
        }
        else {
          pbVar7 = pbVar6 + (4 - (ulong)((bVar1 & 0x10) == 0));
        }
      }
      iVar5 = iVar5 + -1;
      pbVar6 = pbVar7;
    } while (1 < iVar5);
    puVar4 = StringHolderUtils::createFromCharPointer<juce::CharPointer_UTF8>(pbVar7);
LAB_0048b004:
    *param_1 = (long)puVar4;
  }
  return;
}


