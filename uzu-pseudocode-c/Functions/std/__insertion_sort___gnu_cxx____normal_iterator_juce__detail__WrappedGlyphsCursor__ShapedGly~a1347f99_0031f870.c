// Function : __insertion_sort<__gnu_cxx::__normal_iterator<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan*,std::vector<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan,std::allocator<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan>>>,__gnu_cxx::__ops::_Iter_comp_iter<juce::detail::getShapedGlyphSpansInVisualOrder(std::vector<juce::detail::WrappedGlyphsCursorRange,std::allocator<juce::detail::WrappedGlyphsCursorRange>>const&)::$_28>>
// Namespace: std
// Entry    : 0031f870
// Prototype: void __insertion_sort<__gnu_cxx::__normal_iterator<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan*,std::vector<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan,std::allocator<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan>>>,__gnu_cxx::__ops::_Iter_comp_iter<juce::detail::getShapedGlyphSpansInVisualOrder(std::vector<juce::detail::WrappedGlyphsCursorRange,std::allocator<juce::detail::WrappedGlyphsCursorRange>>const&)::$_28>>(undefined8 * param_1, undefined8 * param_2)
// Body     : 0031f870 - 0031faeb


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* void 
   std::__insertion_sort<__gnu_cxx::__normal_iterator<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan*,
   std::vector<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan,
   std::allocator<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan> > >,
   __gnu_cxx::__ops::_Iter_comp_iter<juce::detail::getShapedGlyphSpansInVisualOrder(std::vector<juce::detail::WrappedGlyphsCursorRange,
   std::allocator<juce::detail::WrappedGlyphsCursorRange> > const&)::$_28>
   >(__gnu_cxx::__normal_iterator<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan*,
   std::vector<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan,
   std::allocator<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan> > >,
   __gnu_cxx::__normal_iterator<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan*,
   std::vector<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan,
   std::allocator<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan> > >,
   __gnu_cxx::__ops::_Iter_comp_iter<juce::detail::getShapedGlyphSpansInVisualOrder(std::vector<juce::detail::WrappedGlyphsCursorRange,
   std::allocator<juce::detail::WrappedGlyphsCursorRange> > const&)::$_28>) */

void __cdecl
std::
__insertion_sort<__gnu_cxx::__normal_iterator<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan*,std::vector<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan,std::allocator<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan>>>,__gnu_cxx::__ops::_Iter_comp_iter<juce::detail::getShapedGlyphSpansInVisualOrder(std::vector<juce::detail::WrappedGlyphsCursorRange,std::allocator<juce::detail::WrappedGlyphsCursorRange>>const&)::__28>>
          (undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if ((param_1 != param_2) && (param_1 + 6 != param_2)) {
    plVar18 = param_1 + 0xb;
    uVar17 = 0x30;
    puVar13 = param_1 + 6;
    puVar12 = param_1;
    do {
      puVar14 = puVar13;
      uVar3 = puVar12[8];
      if (uVar3 < (ulong)param_1[2]) {
        uVar4 = puVar14[4];
        uVar9 = *puVar14;
        uVar10 = puVar14[1];
        uVar11 = puVar14[2];
        uVar8 = puVar14[3];
        uVar5 = puVar12[0xb];
        puVar12[0xb] = 0;
        if (0 < (long)puVar14 - (long)param_1) {
          lVar15 = uVar17 / 0x30 + 1;
          plVar16 = plVar18;
          do {
            plVar16[-3] = plVar16[-9];
            plVar16[-5] = plVar16[-0xb];
            plVar16[-4] = plVar16[-10];
            *(int *)(plVar16 + -2) = (int)plVar16[-8];
            *(undefined4 *)((long)plVar16 + -0xc) = *(undefined4 *)((long)plVar16 + -0x3c);
            *(int *)(plVar16 + -1) = (int)plVar16[-7];
            *(undefined4 *)((long)plVar16 + -4) = *(undefined4 *)((long)plVar16 + -0x34);
            lVar6 = plVar16[-6];
            plVar16[-6] = 0;
            plVar7 = (long *)*plVar16;
            *plVar16 = lVar6;
            if (plVar7 != (long *)0x0) {
              LOCK();
              plVar1 = plVar7 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)(*plVar7 + 8))();
              }
            }
            lVar15 = lVar15 + -1;
            plVar16 = plVar16 + -6;
          } while (1 < lVar15);
        }
        param_1[2] = uVar11;
        *param_1 = uVar9;
        param_1[1] = uVar10;
        uStack_60 = (undefined4)uVar8;
        uStack_5c = (undefined4)((ulong)uVar8 >> 0x20);
        local_58 = (undefined4)uVar4;
        uStack_54 = (undefined4)((ulong)uVar4 >> 0x20);
        *(undefined4 *)(param_1 + 3) = uStack_60;
        *(undefined4 *)((long)param_1 + 0x1c) = uStack_5c;
        *(undefined4 *)(param_1 + 4) = local_58;
        *(undefined4 *)((long)param_1 + 0x24) = uStack_54;
        plVar16 = (long *)param_1[5];
        param_1[5] = uVar5;
      }
      else {
        uVar5 = *puVar14;
        uVar9 = puVar14[1];
        uVar10 = puVar12[9];
        uVar11 = puVar12[10];
        uVar4 = puVar12[0xb];
        puVar12[0xb] = 0;
        if (uVar3 < (ulong)puVar12[2]) {
          plVar16 = (long *)0x0;
          puVar12 = puVar14;
          do {
            puVar12[2] = puVar12[-4];
            *puVar12 = puVar12[-6];
            puVar12[1] = puVar12[-5];
            *(undefined4 *)(puVar12 + 3) = *(undefined4 *)(puVar12 + -3);
            *(undefined4 *)((long)puVar12 + 0x1c) = *(undefined4 *)((long)puVar12 + -0x14);
            *(undefined4 *)(puVar12 + 4) = *(undefined4 *)(puVar12 + -2);
            *(undefined4 *)((long)puVar12 + 0x24) = *(undefined4 *)((long)puVar12 + -0xc);
            uVar8 = puVar12[-1];
            puVar12[-1] = 0;
            puVar12[5] = uVar8;
            if (plVar16 != (long *)0x0) {
              LOCK();
              plVar7 = plVar16 + 1;
              *(int *)plVar7 = (int)*plVar7 + -1;
              UNLOCK();
              if ((int)*plVar7 == 0) {
                (**(code **)(*plVar16 + 8))();
              }
            }
            puVar13 = puVar12 + -6;
            plVar16 = (long *)puVar12[-1];
            puVar2 = puVar12 + -10;
            puVar12 = puVar13;
          } while (uVar3 < *puVar2);
        }
        else {
          plVar16 = (long *)0x0;
          puVar13 = puVar14;
        }
        *puVar13 = uVar5;
        puVar13[1] = uVar9;
        puVar13[2] = uVar3;
        local_48 = (undefined4)uVar10;
        uStack_44 = (undefined4)((ulong)uVar10 >> 0x20);
        uStack_40 = (undefined4)uVar11;
        uStack_3c = (undefined4)((ulong)uVar11 >> 0x20);
        *(undefined4 *)(puVar13 + 3) = local_48;
        *(undefined4 *)((long)puVar13 + 0x1c) = uStack_44;
        *(undefined4 *)(puVar13 + 4) = uStack_40;
        *(undefined4 *)((long)puVar13 + 0x24) = uStack_3c;
        puVar13[5] = uVar4;
      }
      if (plVar16 != (long *)0x0) {
        LOCK();
        plVar7 = plVar16 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)(*plVar16 + 8))();
        }
      }
      uVar17 = uVar17 + 0x30;
      plVar18 = plVar18 + 6;
      puVar13 = puVar14 + 6;
      puVar12 = puVar14;
    } while (puVar14 + 6 != param_2);
  }
  return;
}


