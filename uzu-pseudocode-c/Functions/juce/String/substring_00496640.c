// Function : substring
// Namespace: juce:String
// Entry    : 00496640
// Prototype: undefined substring(undefined8 * param_1, undefined8 * param_2, int param_3, int param_4)
// Body     : 00496640 - 00496782


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::String::substring(int, int) const */

void __cdecl
juce::String::substring(undefined8 *param_1,undefined8 *param_2,int param_3,int param_4)

{
  byte bVar1;
  undefined4 *puVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *__src;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  undefined4 *__dest;
  size_t __n;
  
  iVar7 = 0;
  if (-1 < param_3) {
    iVar7 = param_3;
  }
  if (iVar7 < param_4) {
    pbVar8 = (byte *)*param_2;
    __src = pbVar8;
    iVar5 = 0;
    if (0 < param_3) {
      pbVar4 = pbVar8;
      iVar5 = iVar7;
      do {
        bVar1 = *pbVar4;
        if (bVar1 == 0) goto LAB_004966a6;
        __src = pbVar4 + 1;
        if (((char)bVar1 < '\0') && ((bVar1 & 0x40) != 0)) {
          if ((bVar1 & 0x20) == 0) {
            __src = pbVar4 + 2;
          }
          else {
            __src = pbVar4 + (4 - (ulong)((bVar1 & 0x10) == 0));
          }
        }
        iVar5 = iVar5 + -1;
        pbVar4 = __src;
      } while (iVar5 != 0);
      iVar5 = iVar7;
    }
    pbVar4 = __src;
    if (iVar5 < param_4) {
      iVar5 = param_4 - iVar5;
      do {
        bVar1 = *pbVar4;
        if (bVar1 == 0) {
          if (param_3 < 1) {
            *param_1 = pbVar8;
            pbVar8 = pbVar8 + -0x10;
            if (pbVar8 == (byte *)&emptyString) {
              return;
            }
            LOCK();
            *(int *)pbVar8 = *(int *)pbVar8 + 1;
            UNLOCK();
            return;
          }
          break;
        }
        pbVar6 = pbVar4 + 1;
        if (((char)bVar1 < '\0') && ((bVar1 & 0x40) != 0)) {
          if ((bVar1 & 0x20) == 0) {
            pbVar6 = pbVar4 + 2;
          }
          else {
            pbVar6 = pbVar4 + (4 - (ulong)((bVar1 & 0x10) == 0));
          }
        }
        pbVar4 = pbVar6;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    __dest = (undefined4 *)&DAT_0061ac58;
    if ((__src != (byte *)0x0) && (*__src != 0)) {
      __n = (long)pbVar4 - (long)__src;
      uVar3 = __n + 4 & 0xfffffffffffffffc;
      puVar2 = operator_new__(uVar3 + 0x17);
      LOCK();
      *puVar2 = 0;
      UNLOCK();
      *(ulong *)(puVar2 + 2) = uVar3;
      __dest = puVar2 + 4;
      memcpy(__dest,__src,__n);
      *(undefined1 *)((long)puVar2 + __n + 0x10) = 0;
    }
    *param_1 = __dest;
  }
  else {
LAB_004966a6:
    *param_1 = &DAT_0061ac58;
  }
  return;
}


