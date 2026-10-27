// Function : getName
// Namespace: juce:AudioProcessorParameterWithID
// Entry    : 004cf410
// Prototype: undefined8 * getName(undefined8 * param_1, long param_2, int param_3)
// Body     : 004cf410 - 004cf4e8


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::AudioProcessorParameterWithID::getName(int) const */

undefined8 * __cdecl
juce::AudioProcessorParameterWithID::getName(undefined8 *param_1,long param_2,int param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  size_t __n;
  undefined4 *__dest;
  ulong uVar5;
  byte *pbVar6;
  
  if (param_3 < 1) {
    *param_1 = &DAT_0061ac58;
  }
  else {
    pbVar6 = *(byte **)(param_2 + 0x68);
    pbVar3 = pbVar6;
    do {
      bVar1 = *pbVar3;
      if (bVar1 == 0) {
        *param_1 = pbVar6;
        pbVar6 = pbVar6 + -0x10;
        if (pbVar6 == (byte *)&emptyString) {
          return param_1;
        }
        LOCK();
        *(int *)pbVar6 = *(int *)pbVar6 + 1;
        UNLOCK();
        return param_1;
      }
      pbVar4 = pbVar3 + 1;
      if (((char)bVar1 < '\0') && ((bVar1 & 0x40) != 0)) {
        if ((bVar1 & 0x20) == 0) {
          pbVar4 = pbVar3 + 2;
        }
        else {
          pbVar4 = pbVar3 + (4 - (ulong)((bVar1 & 0x10) == 0));
        }
      }
      param_3 = param_3 + -1;
      pbVar3 = pbVar4;
    } while (param_3 != 0);
    __dest = (undefined4 *)&DAT_0061ac58;
    if ((pbVar6 != (byte *)0x0) && (*pbVar6 != 0)) {
      __n = (long)pbVar4 - (long)pbVar6;
      uVar5 = __n + 4 & 0xfffffffffffffffc;
      puVar2 = operator_new__(uVar5 + 0x17);
      LOCK();
      *puVar2 = 0;
      UNLOCK();
      *(ulong *)(puVar2 + 2) = uVar5;
      __dest = puVar2 + 4;
      memcpy(__dest,pbVar6,__n);
      *(undefined1 *)((long)puVar2 + __n + 0x10) = 0;
    }
    *param_1 = __dest;
  }
  return param_1;
}


