// Function : __introsort_loop<__gnu_cxx::__normal_iterator<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan*,std::vector<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan,std::allocator<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<juce::detail::getShapedGlyphSpansInVisualOrder(std::vector<juce::detail::WrappedGlyphsCursorRange,std::allocator<juce::detail::WrappedGlyphsCursorRange>>const&)::$_28>>
// Namespace: std
// Entry    : 0031f2c0
// Prototype: void __introsort_loop<__gnu_cxx::__normal_iterator<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan*,std::vector<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan,std::allocator<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<juce::detail::getShapedGlyphSpansInVisualOrder(std::vector<juce::detail::WrappedGlyphsCursorRange,std::allocator<juce::detail::WrappedGlyphsCursorRange>>const&)::$_28>>(long * param_1, long * param_2, long param_3)
// Body     : 0031f2c0 - 0031f840


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* void 
   std::__introsort_loop<__gnu_cxx::__normal_iterator<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan*,
   std::vector<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan,
   std::allocator<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan> > >, long,
   __gnu_cxx::__ops::_Iter_comp_iter<juce::detail::getShapedGlyphSpansInVisualOrder(std::vector<juce::detail::WrappedGlyphsCursorRange,
   std::allocator<juce::detail::WrappedGlyphsCursorRange> > const&)::$_28>
   >(__gnu_cxx::__normal_iterator<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan*,
   std::vector<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan,
   std::allocator<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan> > >,
   __gnu_cxx::__normal_iterator<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan*,
   std::vector<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan,
   std::allocator<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan> > >, long,
   __gnu_cxx::__ops::_Iter_comp_iter<juce::detail::getShapedGlyphSpansInVisualOrder(std::vector<juce::detail::WrappedGlyphsCursorRange,
   std::allocator<juce::detail::WrappedGlyphsCursorRange> > const&)::$_28>) */

void __cdecl
std::
__introsort_loop<__gnu_cxx::__normal_iterator<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan*,std::vector<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan,std::allocator<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<juce::detail::getShapedGlyphSpansInVisualOrder(std::vector<juce::detail::WrappedGlyphsCursorRange,std::allocator<juce::detail::WrappedGlyphsCursorRange>>const&)::__28>>
          (long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  bool bVar14;
  long local_b8;
  long lStack_b0;
  long local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long *local_90;
  long *local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  long local_60;
  long local_58;
  long lStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long local_38;
  
  uVar8 = (long)param_2 - (long)param_1;
  if (0x300 < (long)uVar8) {
    local_78 = param_1 + 6;
    local_80 = param_1 + 3;
    local_70 = param_1 + 9;
    do {
      lVar11 = param_3 + -1;
      if (param_3 == 0) {
        uVar9 = uVar8 / 0x30 - 2 >> 1;
        plVar10 = param_1 + uVar9 * 6 + 5;
        do {
          local_98 = plVar10[-1];
          local_b8 = plVar10[-5];
          lStack_b0 = plVar10[-4];
          local_a8 = plVar10[-3];
          uStack_a0 = plVar10[-2];
          local_90 = (long *)*plVar10;
          *plVar10 = 0;
                    /* try { // try from 0031f705 to 0031f715 has its CatchHandler @ 0031f843 */
          __adjust_heap<__gnu_cxx::__normal_iterator<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan*,std::vector<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan,std::allocator<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan>>>,long,juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan,__gnu_cxx::__ops::_Iter_comp_iter<juce::detail::getShapedGlyphSpansInVisualOrder(std::vector<juce::detail::WrappedGlyphsCursorRange,std::allocator<juce::detail::WrappedGlyphsCursorRange>>const&)::__28>>
                    ((long)param_1,uVar9,uVar8 / 0x30,&local_b8);
          if (local_90 != (long *)0x0) {
            LOCK();
            plVar13 = local_90 + 1;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)*plVar13 == 0) {
              (**(code **)(*local_90 + 8))();
            }
          }
          plVar10 = plVar10 + -6;
          bVar14 = uVar9 != 0;
          uVar9 = uVar9 - 1;
        } while (bVar14);
        plVar10 = param_2 + -1;
        lVar11 = (long)param_2 - (long)param_1;
        do {
          local_38 = plVar10[-1];
          local_58 = plVar10[-5];
          lStack_50 = plVar10[-4];
          local_48 = (undefined4)plVar10[-3];
          uStack_44 = *(undefined4 *)((long)plVar10 + -0x14);
          uStack_40 = (undefined4)plVar10[-2];
          uStack_3c = *(undefined4 *)((long)plVar10 + -0xc);
          plVar13 = (long *)*plVar10;
          *plVar10 = 0;
          plVar10[-3] = param_1[2];
          lVar4 = param_1[1];
          plVar10[-5] = *param_1;
          plVar10[-4] = lVar4;
          uVar6 = *(undefined4 *)((long)local_80 + 4);
          lVar4 = local_80[1];
          uVar7 = *(undefined4 *)((long)local_80 + 0xc);
          *(int *)(plVar10 + -2) = (int)*local_80;
          *(undefined4 *)((long)plVar10 + -0xc) = uVar6;
          *(int *)(plVar10 + -1) = (int)lVar4;
          *(undefined4 *)((long)plVar10 + -4) = uVar7;
          lVar4 = param_1[5];
          param_1[5] = 0;
          plVar12 = (long *)*plVar10;
          *plVar10 = lVar4;
          if (plVar12 != (long *)0x0) {
            LOCK();
            plVar5 = plVar12 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 == 0) {
              (**(code **)(*plVar12 + 8))();
            }
          }
          lVar11 = lVar11 + -0x30;
          local_98 = local_38;
          local_a8 = CONCAT44(uStack_44,local_48);
          uStack_a0 = CONCAT44(uStack_3c,uStack_40);
          local_b8 = local_58;
          lStack_b0 = lStack_50;
          local_90 = plVar13;
                    /* try { // try from 0031f7fe to 0031f80a has its CatchHandler @ 0031f841 */
          __adjust_heap<__gnu_cxx::__normal_iterator<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan*,std::vector<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan,std::allocator<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan>>>,long,juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan,__gnu_cxx::__ops::_Iter_comp_iter<juce::detail::getShapedGlyphSpansInVisualOrder(std::vector<juce::detail::WrappedGlyphsCursorRange,std::allocator<juce::detail::WrappedGlyphsCursorRange>>const&)::__28>>
                    ((long)param_1,0,(lVar11 >> 4) * -0x5555555555555555,&local_b8);
          if (local_90 != (long *)0x0) {
            LOCK();
            plVar13 = local_90 + 1;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)*plVar13 == 0) {
              (**(code **)(*local_90 + 8))();
            }
          }
          plVar10 = plVar10 + -6;
        } while (0x30 < lVar11);
        return;
      }
      uVar8 = uVar8 / 0x60;
      plVar10 = param_1 + uVar8 * 6;
      uVar9 = param_1[8];
      uVar2 = param_1[uVar8 * 6 + 2];
      uVar3 = param_2[-4];
      local_68 = param_2;
      local_60 = lVar11;
      if (uVar9 < uVar2) {
        if (uVar2 < uVar3) {
LAB_0031f4f0:
          local_98 = param_1[4];
          local_b8 = *param_1;
          lStack_b0 = param_1[1];
          local_a8 = param_1[2];
          uStack_a0 = param_1[3];
          lVar11 = param_1[5];
          param_1[5] = 0;
          param_1[2] = plVar10[2];
          lVar4 = plVar10[1];
          *param_1 = *plVar10;
          param_1[1] = lVar4;
          plVar13 = param_1 + uVar8 * 6 + 3;
          uVar6 = *(undefined4 *)((long)plVar13 + 4);
          lVar4 = plVar13[1];
          uVar7 = *(undefined4 *)((long)plVar13 + 0xc);
          *(int *)local_80 = (int)*plVar13;
          *(undefined4 *)((long)local_80 + 4) = uVar6;
          *(int *)(local_80 + 1) = (int)lVar4;
          *(undefined4 *)((long)local_80 + 0xc) = uVar7;
          lVar4 = param_1[uVar8 * 6 + 5];
          param_1[uVar8 * 6 + 5] = 0;
          plVar13 = (long *)param_1[5];
          param_1[5] = lVar4;
          if (plVar13 != (long *)0x0) {
            LOCK();
            plVar12 = plVar13 + 1;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)*plVar12 == 0) {
              (**(code **)(*plVar13 + 8))();
            }
          }
          plVar10[2] = local_a8;
          *plVar10 = local_b8;
          plVar10[1] = lStack_b0;
          *(undefined4 *)(param_1 + uVar8 * 6 + 3) = (undefined4)uStack_a0;
          *(undefined4 *)((long)param_1 + uVar8 * 0x30 + 0x1c) = uStack_a0._4_4_;
          *(undefined4 *)(param_1 + uVar8 * 6 + 4) = (undefined4)local_98;
          *(undefined4 *)((long)param_1 + uVar8 * 0x30 + 0x24) = local_98._4_4_;
          plVar10 = (long *)param_1[uVar8 * 6 + 5];
          param_1[uVar8 * 6 + 5] = lVar11;
        }
        else {
          if (uVar3 <= uVar9) goto LAB_0031f3b5;
LAB_0031f439:
          local_98 = param_1[4];
          local_b8 = *param_1;
          lStack_b0 = param_1[1];
          local_a8 = param_1[2];
          uStack_a0 = param_1[3];
          lVar11 = param_1[5];
          param_1[5] = 0;
          param_1[2] = param_2[-4];
          lVar4 = param_2[-5];
          *param_1 = param_2[-6];
          param_1[1] = lVar4;
          uVar6 = *(undefined4 *)((long)param_2 + -0x14);
          lVar4 = param_2[-2];
          uVar7 = *(undefined4 *)((long)param_2 + -0xc);
          *(int *)local_80 = (int)param_2[-3];
          *(undefined4 *)((long)local_80 + 4) = uVar6;
          *(int *)(local_80 + 1) = (int)lVar4;
          *(undefined4 *)((long)local_80 + 0xc) = uVar7;
          lVar4 = param_2[-1];
          param_2[-1] = 0;
          plVar10 = (long *)param_1[5];
          param_1[5] = lVar4;
          if (plVar10 != (long *)0x0) {
            LOCK();
            plVar13 = plVar10 + 1;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)*plVar13 == 0) {
              (**(code **)(*plVar10 + 8))();
            }
          }
          param_2[-4] = local_a8;
          param_2[-6] = local_b8;
          param_2[-5] = lStack_b0;
          *(undefined4 *)(param_2 + -3) = (undefined4)uStack_a0;
          *(undefined4 *)((long)param_2 + -0x14) = uStack_a0._4_4_;
          *(undefined4 *)(param_2 + -2) = (undefined4)local_98;
          *(undefined4 *)((long)param_2 + -0xc) = local_98._4_4_;
          plVar10 = (long *)param_2[-1];
          param_2[-1] = lVar11;
        }
        if (plVar10 != (long *)0x0) {
          LOCK();
          plVar13 = plVar10 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
            (**(code **)(*plVar10 + 8))();
          }
        }
      }
      else {
        if (uVar3 <= uVar9) {
          if (uVar2 < uVar3) goto LAB_0031f439;
          goto LAB_0031f4f0;
        }
LAB_0031f3b5:
        local_98 = param_1[4];
        local_b8 = *param_1;
        lStack_b0 = param_1[1];
        local_a8 = param_1[2];
        uStack_a0 = param_1[3];
        lVar11 = param_1[5];
        param_1[2] = local_78[2];
        lVar4 = local_78[1];
        *param_1 = *local_78;
        param_1[1] = lVar4;
        lVar4 = local_70[1];
        *local_80 = *local_70;
        local_80[1] = lVar4;
        param_1[5] = param_1[0xb];
        *local_78 = local_b8;
        local_78[1] = lStack_b0;
        local_78[2] = local_a8;
        *local_70 = uStack_a0;
        local_70[1] = local_98;
        param_1[0xb] = lVar11;
      }
      plVar10 = local_68;
      plVar13 = local_78;
      while( true ) {
        param_3 = local_60;
        uVar8 = (-0x30 - (long)param_1) + (long)plVar13;
        do {
          param_2 = plVar13;
          plVar13 = param_2 + 6;
          uVar8 = uVar8 + 0x30;
        } while ((ulong)param_2[2] < (ulong)param_1[2]);
        do {
          plVar12 = plVar10;
          plVar10 = plVar12 + -6;
        } while ((ulong)param_1[2] < (ulong)plVar12[-4]);
        if (plVar10 <= param_2) break;
        local_98 = param_2[4];
        local_b8 = *param_2;
        lStack_b0 = param_2[1];
        local_a8 = param_2[2];
        uStack_a0 = param_2[3];
        lVar11 = param_2[5];
        param_2[5] = 0;
        param_2[2] = plVar12[-4];
        lVar4 = plVar12[-5];
        *param_2 = *plVar10;
        param_2[1] = lVar4;
        uVar6 = *(undefined4 *)((long)plVar12 + -0x14);
        lVar4 = plVar12[-2];
        uVar7 = *(undefined4 *)((long)plVar12 + -0xc);
        *(int *)(param_2 + 3) = (int)plVar12[-3];
        *(undefined4 *)((long)param_2 + 0x1c) = uVar6;
        *(int *)(param_2 + 4) = (int)lVar4;
        *(undefined4 *)((long)param_2 + 0x24) = uVar7;
        lVar4 = plVar12[-1];
        plVar12[-1] = 0;
        plVar5 = (long *)param_2[5];
        param_2[5] = lVar4;
        if (plVar5 != (long *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar5 + 8))();
          }
        }
        plVar12[-4] = local_a8;
        *plVar10 = local_b8;
        plVar12[-5] = lStack_b0;
        *(undefined4 *)(plVar12 + -3) = (undefined4)uStack_a0;
        *(undefined4 *)((long)plVar12 + -0x14) = uStack_a0._4_4_;
        *(undefined4 *)(plVar12 + -2) = (undefined4)local_98;
        *(undefined4 *)((long)plVar12 + -0xc) = local_98._4_4_;
        plVar5 = (long *)plVar12[-1];
        plVar12[-1] = lVar11;
        if (plVar5 != (long *)0x0) {
          LOCK();
          plVar12 = plVar5 + 1;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)*plVar12 == 0) {
            (**(code **)(*plVar5 + 8))();
          }
        }
      }
      __introsort_loop<__gnu_cxx::__normal_iterator<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan*,std::vector<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan,std::allocator<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<juce::detail::getShapedGlyphSpansInVisualOrder(std::vector<juce::detail::WrappedGlyphsCursorRange,std::allocator<juce::detail::WrappedGlyphsCursorRange>>const&)::__28>>
                (param_2,local_68,local_60);
    } while (0x300 < (long)uVar8);
  }
  return;
}


