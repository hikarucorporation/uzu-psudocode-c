// Function : __adjust_heap<__gnu_cxx::__normal_iterator<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan*,std::vector<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan,std::allocator<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan>>>,long,juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan,__gnu_cxx::__ops::_Iter_comp_iter<juce::detail::getShapedGlyphSpansInVisualOrder(std::vector<juce::detail::WrappedGlyphsCursorRange,std::allocator<juce::detail::WrappedGlyphsCursorRange>>const&)::$_28>>
// Namespace: std
// Entry    : 0031fe00
// Prototype: void __adjust_heap<__gnu_cxx::__normal_iterator<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan*,std::vector<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan,std::allocator<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan>>>,long,juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan,__gnu_cxx::__ops::_Iter_comp_iter<juce::detail::getShapedGlyphSpansInVisualOrder(std::vector<juce::detail::WrappedGlyphsCursorRange,std::allocator<juce::detail::WrappedGlyphsCursorRange>>const&)::$_28>>(long param_1, long param_2, ulong param_3, undefined8 * param_4)
// Body     : 0031fe00 - 00320074


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* void 
   std::__adjust_heap<__gnu_cxx::__normal_iterator<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan*,
   std::vector<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan,
   std::allocator<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan> > >, long,
   juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan,
   __gnu_cxx::__ops::_Iter_comp_iter<juce::detail::getShapedGlyphSpansInVisualOrder(std::vector<juce::detail::WrappedGlyphsCursorRange,
   std::allocator<juce::detail::WrappedGlyphsCursorRange> > const&)::$_28>
   >(__gnu_cxx::__normal_iterator<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan*,
   std::vector<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan,
   std::allocator<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan> > >, long, long,
   juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan,
   __gnu_cxx::__ops::_Iter_comp_iter<juce::detail::getShapedGlyphSpansInVisualOrder(std::vector<juce::detail::WrappedGlyphsCursorRange,
   std::allocator<juce::detail::WrappedGlyphsCursorRange> > const&)::$_28>) */

void __cdecl
std::
__adjust_heap<__gnu_cxx::__normal_iterator<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan*,std::vector<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan,std::allocator<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan>>>,long,juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan,__gnu_cxx::__ops::_Iter_comp_iter<juce::detail::getShapedGlyphSpansInVisualOrder(std::vector<juce::detail::WrappedGlyphsCursorRange,std::allocator<juce::detail::WrappedGlyphsCursorRange>>const&)::__28>>
          (long param_1,long param_2,ulong param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  lVar17 = (long)((param_3 - ((long)(param_3 - 1) >> 0x3f)) + -1) >> 1;
  lVar18 = param_2;
  if (param_2 < lVar17) {
    lVar15 = param_2;
    do {
      lVar16 = lVar15 * 2 + 2;
      lVar18 = lVar15 * 2 + 1;
      if (*(ulong *)(param_1 + 0x10 + lVar18 * 0x30) <= *(ulong *)(param_1 + 0x10 + lVar16 * 0x30))
      {
        lVar18 = lVar16;
      }
      lVar16 = lVar18 * 0x30;
      lVar15 = lVar15 * 0x30;
      *(undefined8 *)(param_1 + 0x10 + lVar15) = *(undefined8 *)(param_1 + 0x10 + lVar16);
      uVar4 = ((undefined8 *)(param_1 + lVar16))[1];
      *(undefined8 *)(param_1 + lVar15) = *(undefined8 *)(param_1 + lVar16);
      ((undefined8 *)(param_1 + lVar15))[1] = uVar4;
      puVar2 = (undefined4 *)(param_1 + 0x18 + lVar16);
      uVar8 = puVar2[1];
      uVar9 = puVar2[2];
      uVar10 = puVar2[3];
      puVar3 = (undefined4 *)(param_1 + 0x18 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar8;
      puVar3[2] = uVar9;
      puVar3[3] = uVar10;
      uVar4 = *(undefined8 *)(param_1 + 0x28 + lVar16);
      *(undefined8 *)(param_1 + 0x28 + lVar16) = 0;
      plVar5 = *(long **)(param_1 + 0x28 + lVar15);
      *(undefined8 *)(param_1 + 0x28 + lVar15) = uVar4;
      if (plVar5 != (long *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
      lVar15 = lVar18;
    } while (lVar18 < lVar17);
  }
  if (((param_3 & 1) == 0) &&
     (lVar18 == (long)((param_3 - ((long)(param_3 - 2) >> 0x3f)) + -2) >> 1)) {
    lVar17 = lVar18 * 2 + 1;
    lVar15 = lVar17 * 0x30;
    lVar18 = lVar18 * 0x30;
    *(undefined8 *)(param_1 + 0x10 + lVar18) = *(undefined8 *)(param_1 + 0x10 + lVar15);
    uVar4 = ((undefined8 *)(param_1 + lVar15))[1];
    *(undefined8 *)(param_1 + lVar18) = *(undefined8 *)(param_1 + lVar15);
    ((undefined8 *)(param_1 + lVar18))[1] = uVar4;
    puVar2 = (undefined4 *)(param_1 + 0x18 + lVar15);
    uVar8 = puVar2[1];
    uVar9 = puVar2[2];
    uVar10 = puVar2[3];
    puVar3 = (undefined4 *)(param_1 + 0x18 + lVar18);
    *puVar3 = *puVar2;
    puVar3[1] = uVar8;
    puVar3[2] = uVar9;
    puVar3[3] = uVar10;
    uVar4 = *(undefined8 *)(param_1 + 0x28 + lVar15);
    *(undefined8 *)(param_1 + 0x28 + lVar15) = 0;
    plVar5 = *(long **)(param_1 + 0x28 + lVar18);
    *(undefined8 *)(param_1 + 0x28 + lVar18) = uVar4;
    lVar18 = lVar17;
    if (plVar5 != (long *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  uVar11 = *param_4;
  uVar12 = param_4[1];
  uVar6 = param_4[2];
  uVar13 = param_4[3];
  uVar14 = param_4[4];
  uVar4 = param_4[5];
  param_4[5] = 0;
  while (param_2 < lVar18) {
    lVar15 = (lVar18 - (lVar18 + -1 >> 0x3f)) + -1 >> 1;
    lVar17 = lVar15 * 0x30;
    if (uVar6 <= *(ulong *)(param_1 + 0x10 + lVar17)) break;
    lVar18 = lVar18 * 0x30;
    *(undefined8 *)(param_1 + 0x10 + lVar18) = *(undefined8 *)(param_1 + 0x10 + lVar17);
    uVar7 = ((undefined8 *)(param_1 + lVar17))[1];
    *(undefined8 *)(param_1 + lVar18) = *(undefined8 *)(param_1 + lVar17);
    ((undefined8 *)(param_1 + lVar18))[1] = uVar7;
    puVar2 = (undefined4 *)(param_1 + 0x18 + lVar17);
    uVar8 = puVar2[1];
    uVar9 = puVar2[2];
    uVar10 = puVar2[3];
    puVar3 = (undefined4 *)(param_1 + 0x18 + lVar18);
    *puVar3 = *puVar2;
    puVar3[1] = uVar8;
    puVar3[2] = uVar9;
    puVar3[3] = uVar10;
    uVar7 = *(undefined8 *)(param_1 + 0x28 + lVar17);
    *(undefined8 *)(param_1 + 0x28 + lVar17) = 0;
    plVar5 = *(long **)(param_1 + 0x28 + lVar18);
    *(undefined8 *)(param_1 + 0x28 + lVar18) = uVar7;
    lVar18 = lVar15;
    if (plVar5 != (long *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  lVar18 = lVar18 * 0x30;
  *(undefined8 *)(param_1 + lVar18) = uVar11;
  ((undefined8 *)(param_1 + lVar18))[1] = uVar12;
  *(ulong *)(param_1 + 0x10 + lVar18) = uVar6;
  local_58 = (undefined4)uVar13;
  uStack_54 = (undefined4)((ulong)uVar13 >> 0x20);
  uStack_50 = (undefined4)uVar14;
  uStack_4c = (undefined4)((ulong)uVar14 >> 0x20);
  puVar2 = (undefined4 *)(param_1 + 0x18 + lVar18);
  *puVar2 = local_58;
  puVar2[1] = uStack_54;
  puVar2[2] = uStack_50;
  puVar2[3] = uStack_4c;
  plVar5 = *(long **)(param_1 + 0x28 + lVar18);
  *(undefined8 *)(param_1 + 0x28 + lVar18) = uVar4;
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00320063. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 8))();
      return;
    }
  }
  return;
}


