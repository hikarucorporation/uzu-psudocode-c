// Function : getGroupsForParameter
// Namespace: juce:AudioProcessorParameterGroup
// Entry    : 004c7510
// Prototype: undefined8 * getGroupsForParameter(undefined8 * param_1, AudioProcessorParameterGroup * param_2, long param_3)
// Body     : 004c7510 - 004c7688


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::AudioProcessorParameterGroup::getGroupsForParameter(juce::AudioProcessorParameter*) const
    */

undefined8 * __cdecl
juce::AudioProcessorParameterGroup::getGroupsForParameter
          (undefined8 *param_1,AudioProcessorParameterGroup *param_2,long param_3)

{
  uint uVar1;
  AudioProcessorParameterGroup *pAVar2;
  int iVar3;
  uint uVar4;
  size_t __n;
  uint uVar5;
  int iVar6;
  long *local_48;
  
  *param_1 = 0;
  param_1[1] = 0;
  pAVar2 = getGroupForParameter(param_2,param_3);
  if ((pAVar2 != (AudioProcessorParameterGroup *)0x0) && (pAVar2 != param_2)) {
    local_48 = malloc(0x40);
    *param_1 = local_48;
    *(undefined4 *)(param_1 + 1) = 8;
    *local_48 = (long)pAVar2;
    pAVar2 = *(AudioProcessorParameterGroup **)(pAVar2 + 0x28);
    iVar3 = 1;
    if ((pAVar2 != (AudioProcessorParameterGroup *)0x0) && (pAVar2 != param_2)) {
      iVar3 = 1;
      uVar1 = 8;
      uVar4 = 2;
      iVar6 = 10;
      __n = 8;
      do {
        if (iVar3 < (int)uVar1) {
        }
        else {
          uVar5 = (uVar4 >> 1) + iVar6 & 0xfffffff8;
          if (uVar1 != uVar5) {
            if ((int)uVar5 < 1) {
              free(local_48);
              *param_1 = 0;
              local_48 = (long *)0x0;
            }
            else {
              local_48 = realloc(local_48,(ulong)uVar5 << 3);
              *param_1 = local_48;
            }
          }
          *(uint *)(param_1 + 1) = uVar5;
          uVar1 = uVar5;
        }
        memmove(local_48 + 1,local_48,__n);
        *local_48 = (long)pAVar2;
        pAVar2 = *(AudioProcessorParameterGroup **)(pAVar2 + 0x28);
        iVar3 = iVar3 + 1;
        if (pAVar2 == (AudioProcessorParameterGroup *)0x0) break;
        uVar4 = uVar4 + 1;
        iVar6 = iVar6 + 1;
        __n = __n + 8;
      } while (pAVar2 != param_2);
    }
    *(int *)((long)param_1 + 0xc) = iVar3;
  }
  return param_1;
}


