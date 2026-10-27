// Function : RangedAudioParameter>_>)_const
// Namespace: juce:AudioProcessorValueTreeState:AudioProcessorValueTreeState_juce:AudioProcessor__juce:UndoManager__juce:Identifier_const__juce:AudioProcessorValueTreeState:ParameterLayout_:PushBackVisitor:visit_std:unique_ptr_juce:RangedAudioParameter_std:default_delete_juce
// Entry    : 001c3010
// Prototype: undefined RangedAudioParameter>_>)_const(long param_1, long * param_2)
// Body     : 001c3010 - 001c3192


/* juce::AudioProcessorValueTreeState::AudioProcessorValueTreeState(juce::AudioProcessor&,
   juce::UndoManager*, juce::Identifier const&,
   juce::AudioProcessorValueTreeState::ParameterLayout)::PushBackVisitor::visit(std::unique_ptr<juce::RangedAudioParameter,
   std::default_delete<juce::RangedAudioParameter> >) const */

void juce::AudioProcessorValueTreeState::AudioProcessorValueTreeState(juce::AudioProcessor&,juce::
     UndoManager*,juce::Identifier_const&,juce::AudioProcessorValueTreeState::ParameterLayout)::
     PushBackVisitor::visit(std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::
     RangedAudioParameter>_>__const(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  
  if (*param_2 != 0) {
    addParameterAdapter(*(AudioProcessorValueTreeState **)(param_1 + 8),*param_2);
    lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x30);
    lVar2 = *param_2;
    *param_2 = 0;
                    /* try { // try from 001c3044 to 001c304d has its CatchHandler @ 001c3193 */
    puVar4 = operator_new(0x18);
    *puVar4 = 0;
    puVar4[1] = lVar2;
    puVar4[2] = lVar1 + 0xf8;
    iVar3 = *(int *)(lVar1 + 0x11c);
    if ((int)*(uint *)(lVar1 + 0x118) <= iVar3) {
      uVar7 = iVar3 + ((iVar3 - (iVar3 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
      if (*(uint *)(lVar1 + 0x118) != uVar7) {
        if ((int)uVar7 < 1) {
          free(*(void **)(lVar1 + 0x110));
          *(undefined8 *)(lVar1 + 0x110) = 0;
        }
        else {
          pvVar5 = realloc(*(void **)(lVar1 + 0x110),(ulong)uVar7 << 3);
          *(void **)(lVar1 + 0x110) = pvVar5;
        }
      }
      *(uint *)(lVar1 + 0x118) = uVar7;
      iVar3 = *(int *)(lVar1 + 0x11c);
    }
    *(int *)(lVar1 + 0x11c) = iVar3 + 1;
    *(undefined8 **)(*(long *)(lVar1 + 0x110) + (long)iVar3 * 8) = puVar4;
    uVar7 = *(uint *)(lVar1 + 0x130);
    iVar3 = *(int *)(lVar1 + 0x134);
    *(long *)(lVar2 + 0x48) = lVar1 + 0x138;
    *(int *)(lVar2 + 8) = iVar3;
    if ((int)uVar7 <= iVar3) {
      uVar6 = iVar3 + ((iVar3 - (iVar3 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
      if (uVar7 != uVar6) {
        if ((int)uVar6 < 1) {
          free(*(void **)(lVar1 + 0x128));
          *(undefined8 *)(lVar1 + 0x128) = 0;
        }
        else {
          pvVar5 = realloc(*(void **)(lVar1 + 0x128),(ulong)uVar6 << 3);
          *(void **)(lVar1 + 0x128) = pvVar5;
        }
      }
      *(uint *)(lVar1 + 0x130) = uVar6;
      iVar3 = *(int *)(lVar1 + 0x134);
    }
    *(int *)(lVar1 + 0x134) = iVar3 + 1;
    *(long *)(*(long *)(lVar1 + 0x128) + (long)iVar3 * 8) = lVar2;
  }
  return;
}


