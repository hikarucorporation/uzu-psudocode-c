// Function : getParameterMap
// Namespace: juce:JuceAudioProcessor
// Entry    : 001b8530
// Prototype: _Rb_tree<unsigned_int,std::pair<unsigned_int_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>> * getParameterMap(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>> * param_1, long param_2, ulong * param_3)
// Body     : 001b8530 - 001b86bd


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::JuceAudioProcessor::getParameterMap(std::array<std::byte, 16ul> const&) const */

_Rb_tree<unsigned_int,std::pair<unsigned_int_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>
* __cdecl juce::JuceAudioProcessor::getParameterMap
                    (_Rb_tree<unsigned_int,std::pair<unsigned_int_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>
                     *param_1,long param_2,ulong *param_3)

{
  _Rb_tree<unsigned_int,std::pair<unsigned_int_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>
  *p_Var1;
  ulong uVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined4 *puVar5;
  ulong uVar6;
  int iVar7;
  undefined4 *puVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  _Rb_tree<unsigned_int,std::pair<unsigned_int_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>
  *local_20;
  
  lVar4 = *(long *)(param_2 + 0x80);
  if (lVar4 == 0) goto LAB_001b868e;
  lVar9 = param_2 + 0x78;
  lVar12 = lVar9;
  do {
    uVar11 = *(ulong *)(lVar4 + 0x20);
    uVar6 = uVar11 >> 0x38 | (uVar11 & 0xff000000000000) >> 0x28 | (uVar11 & 0xff0000000000) >> 0x18
            | (uVar11 & 0xff00000000) >> 8 | (uVar11 & 0xff000000) << 8 |
            (uVar11 & 0xff0000) << 0x18 | (uVar11 & 0xff00) << 0x28 | uVar11 << 0x38;
    uVar11 = *param_3;
    uVar11 = uVar11 >> 0x38 | (uVar11 & 0xff000000000000) >> 0x28 |
             (uVar11 & 0xff0000000000) >> 0x18 | (uVar11 & 0xff00000000) >> 8 |
             (uVar11 & 0xff000000) << 8 | (uVar11 & 0xff0000) << 0x18 | (uVar11 & 0xff00) << 0x28 |
             uVar11 << 0x38;
    if (uVar6 == uVar11) {
      uVar11 = *(ulong *)(lVar4 + 0x28);
      uVar2 = param_3[1];
      uVar6 = uVar11 >> 0x38 | (uVar11 & 0xff000000000000) >> 0x28 |
              (uVar11 & 0xff0000000000) >> 0x18 | (uVar11 & 0xff00000000) >> 8 |
              (uVar11 & 0xff000000) << 8 | (uVar11 & 0xff0000) << 0x18 | (uVar11 & 0xff00) << 0x28 |
              uVar11 << 0x38;
      uVar11 = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18
               | (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 |
               (uVar2 & 0xff0000) << 0x18 | (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
      iVar7 = 0;
      if (uVar6 != uVar11) goto LAB_001b8560;
    }
    else {
LAB_001b8560:
      iVar7 = (uint)(uVar11 <= uVar6) * 2 + -1;
    }
    plVar10 = (long *)(lVar4 + 0x18);
    if (-1 < iVar7) {
      plVar10 = (long *)(lVar4 + 0x10);
      lVar12 = lVar4;
    }
    lVar4 = *plVar10;
  } while (lVar4 != 0);
  if (lVar12 == lVar9) goto LAB_001b868e;
  uVar11 = *param_3;
  uVar6 = uVar11 >> 0x38 | (uVar11 & 0xff000000000000) >> 0x28 | (uVar11 & 0xff0000000000) >> 0x18 |
          (uVar11 & 0xff00000000) >> 8 | (uVar11 & 0xff000000) << 8 | (uVar11 & 0xff0000) << 0x18 |
          (uVar11 & 0xff00) << 0x28 | uVar11 << 0x38;
  uVar11 = *(ulong *)(lVar12 + 0x20);
  uVar11 = uVar11 >> 0x38 | (uVar11 & 0xff000000000000) >> 0x28 | (uVar11 & 0xff0000000000) >> 0x18
           | (uVar11 & 0xff00000000) >> 8 | (uVar11 & 0xff000000) << 8 | (uVar11 & 0xff0000) << 0x18
           | (uVar11 & 0xff00) << 0x28 | uVar11 << 0x38;
  if (uVar6 == uVar11) {
    uVar11 = param_3[1];
    uVar2 = *(ulong *)(lVar12 + 0x28);
    uVar6 = uVar11 >> 0x38 | (uVar11 & 0xff000000000000) >> 0x28 | (uVar11 & 0xff0000000000) >> 0x18
            | (uVar11 & 0xff00000000) >> 8 | (uVar11 & 0xff000000) << 8 |
            (uVar11 & 0xff0000) << 0x18 | (uVar11 & 0xff00) << 0x28 | uVar11 << 0x38;
    uVar11 = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18 |
             (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
             (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
    iVar7 = 0;
    if (uVar6 != uVar11) goto LAB_001b85e0;
  }
  else {
LAB_001b85e0:
    iVar7 = (uint)(uVar11 <= uVar6) * 2 + -1;
  }
  if (iVar7 < 0) {
    lVar12 = lVar9;
  }
  if (lVar12 != lVar9) {
    p_Var1 = param_1 + 8;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>
      **)(param_1 + 0x18) = p_Var1;
    *(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>
      **)(param_1 + 0x20) = p_Var1;
    *(undefined8 *)(param_1 + 0x28) = 0;
    if (*(undefined4 **)(lVar12 + 0x40) == (undefined4 *)0x0) {
      return param_1;
    }
    local_20 = param_1;
    puVar5 = std::
             _Rb_tree<unsigned_int,std::pair<unsigned_int_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>
             ::
             _M_copy<false,std::_Rb_tree<unsigned_int,std::pair<unsigned_int_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>::_Alloc_node>
                       (param_1,*(undefined4 **)(lVar12 + 0x40),p_Var1,&local_20);
    puVar3 = puVar5;
    do {
      puVar8 = puVar3;
      puVar3 = *(undefined4 **)(puVar8 + 4);
    } while (puVar3 != (undefined4 *)0x0);
    *(undefined4 **)(param_1 + 0x18) = puVar8;
    puVar3 = puVar5;
    do {
      puVar8 = puVar3;
      puVar3 = *(undefined4 **)(puVar8 + 6);
    } while (puVar3 != (undefined4 *)0x0);
    *(undefined4 **)(param_1 + 0x20) = puVar8;
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar12 + 0x58);
    *(undefined4 **)(param_1 + 0x10) = puVar5;
    return param_1;
  }
LAB_001b868e:
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>
    **)(param_1 + 0x18) = param_1 + 8;
  *(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>
    **)(param_1 + 0x20) = param_1 + 8;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return param_1;
}


