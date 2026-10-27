// Function : append
// Namespace: juce:AudioProcessorParameterGroup
// Entry    : 004c71f0
// Prototype: undefined append(AudioProcessorParameterGroup * this, undefined8 * param_1)
// Body     : 004c71f0 - 004c7291


/* juce::AudioProcessorParameterGroup::append(std::unique_ptr<juce::AudioProcessorParameter,
   std::default_delete<juce::AudioProcessorParameter> >) */

void __thiscall
juce::AudioProcessorParameterGroup::append(AudioProcessorParameterGroup *this,undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  void *pvVar4;
  uint uVar5;
  
  puVar3 = operator_new(0x18);
  uVar1 = *param_1;
  *param_1 = 0;
  *puVar3 = 0;
  puVar3[1] = uVar1;
  puVar3[2] = this;
  iVar2 = *(int *)(this + 0x24);
  if ((int)*(uint *)(this + 0x20) <= iVar2) {
    uVar5 = iVar2 + ((iVar2 - (iVar2 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
    if (*(uint *)(this + 0x20) != uVar5) {
      if ((int)uVar5 < 1) {
        free(*(void **)(this + 0x18));
        *(undefined8 *)(this + 0x18) = 0;
      }
      else {
        pvVar4 = realloc(*(void **)(this + 0x18),(ulong)uVar5 << 3);
        *(void **)(this + 0x18) = pvVar4;
      }
    }
    *(uint *)(this + 0x20) = uVar5;
    iVar2 = *(int *)(this + 0x24);
  }
  *(int *)(this + 0x24) = iVar2 + 1;
  *(undefined8 **)(*(long *)(this + 0x18) + (long)iVar2 * 8) = puVar3;
  return;
}


