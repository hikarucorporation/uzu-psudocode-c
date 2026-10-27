// Function : AudioProcessorParameterGroup>_>)_const
// Namespace: juce:AudioProcessorValueTreeState:AudioProcessorValueTreeState_juce:AudioProcessor__juce:UndoManager__juce:Identifier_const__juce:AudioProcessorValueTreeState:ParameterLayout_:PushBackVisitor:visit_std:unique_ptr_juce:AudioProcessorParameterGroup_std:default_delete_juce
// Entry    : 001c31b0
// Prototype: undefined AudioProcessorParameterGroup>_>)_const(long param_1, long * param_2)
// Body     : 001c31b0 - 001c34d1


/* juce::AudioProcessorValueTreeState::AudioProcessorValueTreeState(juce::AudioProcessor&,
   juce::UndoManager*, juce::Identifier const&,
   juce::AudioProcessorValueTreeState::ParameterLayout)::PushBackVisitor::visit(std::unique_ptr<juce::AudioProcessorParameterGroup,
   std::default_delete<juce::AudioProcessorParameterGroup> >) const */

void juce::AudioProcessorValueTreeState::AudioProcessorValueTreeState(juce::AudioProcessor&,juce::
     UndoManager*,juce::Identifier_const&,juce::AudioProcessorValueTreeState::ParameterLayout)::
     PushBackVisitor::visit(std::unique_ptr<juce::AudioProcessorParameterGroup,std::
     default_delete<juce::AudioProcessorParameterGroup>_>__const(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  void *pvVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  void *local_58;
  undefined8 uStack_50;
  void *local_48;
  long *local_40;
  undefined8 local_38;
  
  if (*param_2 != 0) {
    local_58 = (void *)0x0;
    uStack_50 = 0;
    local_40 = param_2;
    AudioProcessorParameterGroup::getParameters(*param_2,(long *)&local_58);
    pvVar6 = local_58;
    lVar12 = (long)uStack_50._4_4_;
    if (lVar12 != 0) {
      lVar14 = 0;
      do {
        lVar2 = *(long *)((long)pvVar6 + lVar14);
        if ((lVar2 != 0) &&
           (lVar2 = __dynamic_cast(lVar2,&AudioProcessorParameter::typeinfo,
                                   &RangedAudioParameter::typeinfo,0), lVar2 != 0)) {
                    /* try { // try from 001c3238 to 001c323f has its CatchHandler @ 001c34f9 */
          addParameterAdapter(*(AudioProcessorValueTreeState **)(param_1 + 8),lVar2);
        }
        lVar14 = lVar14 + 8;
      } while (lVar12 * 8 != lVar14);
    }
    free(pvVar6);
    lVar12 = *(long *)(*(long *)(param_1 + 8) + 0x30);
    pvVar6 = (void *)*local_40;
    *local_40 = 0;
    iVar9 = *(int *)(lVar12 + 0x134);
    uVar10 = (ulong)iVar9;
    local_58 = (void *)0x0;
    uStack_50 = 0;
    local_48 = pvVar6;
    AudioProcessorParameterGroup::getParameters((long)pvVar6,(long *)&local_58);
    iVar1 = uStack_50._4_4_;
    lVar14 = (long)uStack_50._4_4_;
    iVar7 = *(int *)(lVar12 + 0x134) + uStack_50._4_4_;
    if ((int)*(uint *)(lVar12 + 0x130) < iVar7) {
      uVar11 = iVar7 + iVar7 / 2 + 8U & 0xfffffff8;
      if (*(uint *)(lVar12 + 0x130) != uVar11) {
        if ((int)uVar11 < 1) {
          free(*(void **)(lVar12 + 0x128));
          *(undefined8 *)(lVar12 + 0x128) = 0;
        }
        else {
          pvVar3 = realloc(*(void **)(lVar12 + 0x128),(ulong)uVar11 << 3);
          *(void **)(lVar12 + 0x128) = pvVar3;
        }
      }
      *(uint *)(lVar12 + 0x130) = uVar11;
    }
    if (iVar1 != 0) {
      uVar4 = (ulong)*(int *)(lVar12 + 0x134);
      lVar2 = uVar4 * 8;
      lVar8 = 0;
      do {
        *(undefined8 *)(lVar8 + *(long *)(lVar12 + 0x128) + lVar2) =
             *(undefined8 *)((long)local_58 + lVar8);
        lVar8 = lVar8 + 8;
        uVar11 = (int)uVar4 + 1;
        uVar4 = (ulong)uVar11;
      } while (lVar14 * 8 != lVar8);
      *(uint *)(lVar12 + 0x134) = uVar11;
    }
    free(local_58);
    iVar1 = *(int *)(lVar12 + 0x134);
    if (iVar9 < iVar1) {
      lVar2 = *(long *)(lVar12 + 0x128);
      lVar14 = lVar12 + 0x138;
      uVar4 = ~uVar10;
      uVar13 = (ulong)(uint)(iVar1 - iVar9) & 3;
      if ((iVar1 - iVar9 & 3U) != 0) {
        do {
          lVar8 = *(long *)(lVar2 + uVar10 * 8);
          *(long *)(lVar8 + 0x48) = lVar14;
          *(int *)(lVar8 + 8) = (int)uVar10;
          uVar10 = uVar10 + 1;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      if (2 < uVar4 + (long)iVar1) {
        do {
          lVar8 = *(long *)(lVar2 + uVar10 * 8);
          *(long *)(lVar8 + 0x48) = lVar14;
          iVar9 = (int)uVar10;
          *(int *)(lVar8 + 8) = iVar9;
          lVar8 = *(long *)(lVar2 + 8 + uVar10 * 8);
          *(long *)(lVar8 + 0x48) = lVar14;
          *(int *)(lVar8 + 8) = iVar9 + 1;
          lVar8 = *(long *)(lVar2 + 0x10 + uVar10 * 8);
          *(long *)(lVar8 + 0x48) = lVar14;
          *(int *)(lVar8 + 8) = iVar9 + 2;
          lVar8 = *(long *)(lVar2 + 0x18 + uVar10 * 8);
          *(long *)(lVar8 + 0x48) = lVar14;
          *(int *)(lVar8 + 8) = iVar9 + 3;
          uVar10 = uVar10 + 4;
        } while (uVar10 != (long)iVar1);
      }
    }
    local_48 = (void *)0x0;
    local_38 = 0;
    local_58 = pvVar6;
                    /* try { // try from 001c33f7 to 001c3400 has its CatchHandler @ 001c34d2 */
    plVar5 = operator_new(0x18);
    local_58 = (void *)0x0;
    *plVar5 = (long)pvVar6;
    plVar5[1] = 0;
    plVar5[2] = lVar12 + 0xf8;
    *(long *)((long)pvVar6 + 0x28) = lVar12 + 0xf8;
    iVar9 = *(int *)(lVar12 + 0x11c);
    if ((int)*(uint *)(lVar12 + 0x118) <= iVar9) {
      uVar11 = iVar9 + ((iVar9 - (iVar9 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
      if (*(uint *)(lVar12 + 0x118) != uVar11) {
        if ((int)uVar11 < 1) {
          free(*(void **)(lVar12 + 0x110));
          *(undefined8 *)(lVar12 + 0x110) = 0;
        }
        else {
          pvVar6 = realloc(*(void **)(lVar12 + 0x110),(ulong)uVar11 << 3);
          *(void **)(lVar12 + 0x110) = pvVar6;
        }
      }
      *(uint *)(lVar12 + 0x118) = uVar11;
      iVar9 = *(int *)(lVar12 + 0x11c);
    }
    *(int *)(lVar12 + 0x11c) = iVar9 + 1;
    *(long **)(*(long *)(lVar12 + 0x110) + (long)iVar9 * 8) = plVar5;
  }
  return;
}


