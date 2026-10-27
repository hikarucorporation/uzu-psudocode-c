// Function : getParameterText
// Namespace: juce:AudioProcessor
// Entry    : 004ca730
// Prototype: undefined8 * getParameterText(undefined8 * param_1, long * param_2, uint param_3, int param_4)
// Body     : 004ca730 - 004ca8b5


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::AudioProcessor::getParameterText(int, int) */

undefined8 * __cdecl
juce::AudioProcessor::getParameterText(undefined8 *param_1,long *param_2,uint param_3,int param_4)

{
  int iVar1;
  byte bVar2;
  long *plVar3;
  uint uVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  size_t __n;
  undefined4 *__dest;
  ulong uVar8;
  byte *pbVar9;
  byte *local_30;
  
  if ((param_3 < *(uint *)((long)param_2 + 0x134)) &&
     (plVar3 = *(long **)(param_2[0x25] + (long)(int)param_3 * 8), plVar3 != (long *)0x0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    (**(code **)(*plVar3 + 0x50))(param_1,plVar3,param_4);
    return param_1;
  }
  uVar4 = (**(code **)(*param_2 + 0x1b0))(param_2);
  if (param_3 < uVar4) {
    (**(code **)(*param_2 + 0x1d8))(&local_30,param_2,param_3);
    pbVar9 = local_30;
    if (param_4 < 1) {
      *param_1 = &DAT_0061ac58;
    }
    else {
      pbVar6 = local_30;
      do {
        bVar2 = *pbVar6;
        if (bVar2 == 0) {
          *param_1 = local_30;
          pbVar9 = local_30 + -0x10;
          if (pbVar9 != (byte *)&emptyString) {
            LOCK();
            *(int *)pbVar9 = *(int *)pbVar9 + 1;
            UNLOCK();
          }
          goto LAB_004ca87f;
        }
        pbVar7 = pbVar6 + 1;
        if (((char)bVar2 < '\0') && ((bVar2 & 0x40) != 0)) {
          if ((bVar2 & 0x20) == 0) {
            pbVar7 = pbVar6 + 2;
          }
          else {
            pbVar7 = pbVar6 + (4 - (ulong)((bVar2 & 0x10) == 0));
          }
        }
        param_4 = param_4 + -1;
        pbVar6 = pbVar7;
      } while (param_4 != 0);
      __dest = (undefined4 *)&DAT_0061ac58;
      if ((local_30 != (byte *)0x0) && (*local_30 != 0)) {
        __n = (long)pbVar7 - (long)local_30;
        uVar8 = __n + 4 & 0xfffffffffffffffc;
                    /* try { // try from 004ca84e to 004ca852 has its CatchHandler @ 004ca8b6 */
        puVar5 = operator_new__(uVar8 + 0x17);
        LOCK();
        *puVar5 = 0;
        UNLOCK();
        *(ulong *)(puVar5 + 2) = uVar8;
        __dest = puVar5 + 4;
        memcpy(__dest,pbVar9,__n);
        *(undefined1 *)((long)puVar5 + __n + 0x10) = 0;
      }
      *param_1 = __dest;
    }
LAB_004ca87f:
    local_30 = local_30 + -0x10;
    if (local_30 != (byte *)&emptyString) {
      LOCK();
      iVar1 = *(int *)local_30;
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(local_30);
      }
    }
  }
  else {
    *param_1 = &DAT_0061ac58;
  }
  return param_1;
}


