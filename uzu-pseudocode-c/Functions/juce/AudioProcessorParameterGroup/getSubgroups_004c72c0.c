// Function : getSubgroups
// Namespace: juce:AudioProcessorParameterGroup
// Entry    : 004c72c0
// Prototype: undefined getSubgroups(AudioProcessorParameterGroup * this, long * param_1, char param_2)
// Body     : 004c72c0 - 004c741d


/* juce::AudioProcessorParameterGroup::getSubgroups(juce::Array<juce::AudioProcessorParameterGroup
   const*, juce::DummyCriticalSection, 0>&, bool) const */

void __thiscall
juce::AudioProcessorParameterGroup::getSubgroups
          (AudioProcessorParameterGroup *this,long *param_1,char param_2)

{
  long lVar1;
  AudioProcessorParameterGroup *this_00;
  long lVar2;
  int iVar3;
  void *pvVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  
  if ((long)*(int *)(this + 0x24) != 0) {
    lVar1 = *(long *)(this + 0x18);
    lVar7 = (long)*(int *)(this + 0x24) * 8;
    lVar5 = 0;
    if (param_2 == '\0') {
      do {
        lVar2 = **(long **)(lVar1 + lVar5);
        if (lVar2 != 0) {
          iVar3 = *(int *)((long)param_1 + 0xc);
          if ((int)*(uint *)(param_1 + 1) <= iVar3) {
            uVar6 = iVar3 + ((iVar3 - (iVar3 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
            if (*(uint *)(param_1 + 1) != uVar6) {
              if ((int)uVar6 < 1) {
                free((void *)*param_1);
                *param_1 = 0;
              }
              else {
                pvVar4 = realloc((void *)*param_1,(ulong)uVar6 << 3);
                *param_1 = (long)pvVar4;
              }
            }
            *(uint *)(param_1 + 1) = uVar6;
            iVar3 = *(int *)((long)param_1 + 0xc);
          }
          *(int *)((long)param_1 + 0xc) = iVar3 + 1;
          *(long *)(*param_1 + (long)iVar3 * 8) = lVar2;
        }
        lVar5 = lVar5 + 8;
      } while (lVar7 != lVar5);
    }
    else {
      do {
        this_00 = (AudioProcessorParameterGroup *)**(undefined8 **)(lVar1 + lVar5);
        if (this_00 != (AudioProcessorParameterGroup *)0x0) {
          iVar3 = *(int *)((long)param_1 + 0xc);
          if ((int)*(uint *)(param_1 + 1) <= iVar3) {
            uVar6 = iVar3 + ((iVar3 - (iVar3 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
            if (*(uint *)(param_1 + 1) != uVar6) {
              if ((int)uVar6 < 1) {
                free((void *)*param_1);
                *param_1 = 0;
              }
              else {
                pvVar4 = realloc((void *)*param_1,(ulong)uVar6 << 3);
                *param_1 = (long)pvVar4;
              }
            }
            *(uint *)(param_1 + 1) = uVar6;
            iVar3 = *(int *)((long)param_1 + 0xc);
          }
          *(int *)((long)param_1 + 0xc) = iVar3 + 1;
          *(AudioProcessorParameterGroup **)(*param_1 + (long)iVar3 * 8) = this_00;
          getSubgroups(this_00,param_1,'\x01');
        }
        lVar5 = lVar5 + 8;
      } while (lVar7 != lVar5);
    }
  }
  return;
}


