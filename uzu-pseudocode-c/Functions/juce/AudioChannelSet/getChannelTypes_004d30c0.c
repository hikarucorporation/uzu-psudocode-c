// Function : getChannelTypes
// Namespace: juce:AudioChannelSet
// Entry    : 004d30c0
// Prototype: undefined8 * getChannelTypes(undefined8 * param_1, long * param_2)
// Body     : 004d30c0 - 004d31ef


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::AudioChannelSet::getChannelTypes() const */

undefined8 * __cdecl juce::AudioChannelSet::getChannelTypes(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  void *__ptr;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  
  *param_1 = 0;
  param_1[1] = 0;
  plVar2 = (long *)*param_2;
  plVar5 = plVar2;
  if (plVar2 == (long *)0x0) {
    plVar5 = param_2 + 1;
  }
  uVar3 = *(uint *)(param_2 + 4);
  if (-1 < (int)uVar3) {
    uVar6 = 0;
    do {
      if ((*(uint *)((long)plVar5 + (long)((int)uVar6 >> 5) * 4) >> (uVar6 & 0x1f) & 1) != 0) {
        if ((int)uVar6 < 0) {
          return param_1;
        }
        __ptr = (void *)0x0;
        uVar4 = 0;
        uVar7 = 0;
        do {
          uVar1 = uVar7 + 1;
          if ((long)uVar7 < (long)(int)uVar4) {
          }
          else {
            uVar8 = ((uint)(uVar1 >> 1) & 0x7fffffff) + (int)uVar7 + 9 & 0xfffffff8;
            if (uVar4 != uVar8) {
              if ((int)uVar8 < 1) {
                free(__ptr);
                *param_1 = 0;
                __ptr = (void *)0x0;
              }
              else {
                __ptr = realloc(__ptr,(ulong)uVar8 << 2);
                *param_1 = __ptr;
              }
            }
            *(uint *)(param_1 + 1) = uVar8;
            plVar2 = (long *)*param_2;
            uVar3 = *(uint *)(param_2 + 4);
            uVar4 = uVar8;
          }
          *(int *)((long)param_1 + 0xc) = (int)uVar1;
          *(uint *)((long)__ptr + uVar7 * 4) = uVar6;
          plVar5 = plVar2;
          if (plVar2 == (long *)0x0) {
            plVar5 = param_2 + 1;
          }
          if ((int)uVar3 <= (int)uVar6) {
            return param_1;
          }
          while (uVar6 = uVar6 + 1,
                (*(uint *)((long)plVar5 + (long)((int)uVar6 >> 5) * 4) >> (uVar6 & 0x1f) & 1) == 0)
          {
            if (uVar6 == uVar3) {
              return param_1;
            }
          }
          uVar7 = uVar1;
        } while (-1 < (int)uVar6);
        return param_1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar3 + 1 != uVar6);
  }
  return param_1;
}


