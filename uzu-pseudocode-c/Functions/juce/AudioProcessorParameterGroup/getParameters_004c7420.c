// Function : getParameters
// Namespace: juce:AudioProcessorParameterGroup
// Entry    : 004c7420
// Prototype: undefined getParameters(long param_1, long * param_2)
// Body     : 004c7420 - 004c7507


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::AudioProcessorParameterGroup::getParameters(juce::Array<juce::AudioProcessorParameter*,
   juce::DummyCriticalSection, 0>&, bool) const */

void __cdecl juce::AudioProcessorParameterGroup::getParameters(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  void *pvVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  
  if ((long)*(int *)(param_1 + 0x24) != 0) {
    lVar1 = *(long *)(param_1 + 0x18);
    lVar8 = (long)*(int *)(param_1 + 0x24) * 8;
    lVar6 = 0;
    do {
      while( true ) {
        plVar2 = *(long **)(lVar1 + lVar6);
        lVar3 = plVar2[1];
        if (lVar3 == 0) break;
        iVar4 = *(int *)((long)param_2 + 0xc);
        if ((int)*(uint *)(param_2 + 1) <= iVar4) {
          uVar7 = iVar4 + ((iVar4 - (iVar4 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
          if (*(uint *)(param_2 + 1) != uVar7) {
            if ((int)uVar7 < 1) {
              free((void *)*param_2);
              *param_2 = 0;
            }
            else {
              pvVar5 = realloc((void *)*param_2,(ulong)uVar7 << 3);
              *param_2 = (long)pvVar5;
            }
          }
          *(uint *)(param_2 + 1) = uVar7;
          iVar4 = *(int *)((long)param_2 + 0xc);
        }
        *(int *)((long)param_2 + 0xc) = iVar4 + 1;
        *(long *)(*param_2 + (long)iVar4 * 8) = lVar3;
        lVar6 = lVar6 + 8;
        if (lVar8 == lVar6) {
          return;
        }
      }
      getParameters(*plVar2,param_2);
      lVar6 = lVar6 + 8;
    } while (lVar8 != lVar6);
  }
  return;
}


