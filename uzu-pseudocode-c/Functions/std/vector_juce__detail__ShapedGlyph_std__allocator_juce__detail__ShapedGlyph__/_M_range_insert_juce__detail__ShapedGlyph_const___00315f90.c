// Function : _M_range_insert<juce::detail::ShapedGlyph_const*>
// Namespace: std:vector_juce__detail__ShapedGlyph_std__allocator_juce__detail__ShapedGlyph__
// Entry    : 00315f90
// Prototype: void _M_range_insert<juce::detail::ShapedGlyph_const*>(undefined8 * param_1, undefined8 * param_2, undefined8 * param_3, undefined8 * param_4)
// Body     : 00315f90 - 003162c2


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* void std::vector<juce::detail::ShapedGlyph, std::allocator<juce::detail::ShapedGlyph>
   >::_M_range_insert<juce::detail::ShapedGlyph
   const*>(__gnu_cxx::__normal_iterator<juce::detail::ShapedGlyph*,
   std::vector<juce::detail::ShapedGlyph, std::allocator<juce::detail::ShapedGlyph> > >,
   juce::detail::ShapedGlyph const*, juce::detail::ShapedGlyph const*, std::forward_iterator_tag) */

void __cdecl
std::vector<juce::detail::ShapedGlyph,std::allocator<juce::detail::ShapedGlyph>>::
_M_range_insert<juce::detail::ShapedGlyph_const*>
          (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  
  if (param_3 != param_4) {
    uVar5 = (long)param_4 - (long)param_3;
    uVar7 = (long)uVar5 >> 5;
    puVar1 = (undefined8 *)param_1[1];
    if ((ulong)(param_1[2] - (long)puVar1 >> 5) < uVar7) {
      puVar8 = (undefined8 *)*param_1;
      uVar5 = (long)puVar1 - (long)puVar8 >> 5;
      if (0x3ffffffffffffff - uVar5 < uVar7) {
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error("vector::_M_range_insert");
      }
      if (uVar7 <= uVar5) {
        uVar7 = uVar5;
      }
      uVar10 = uVar7 + uVar5;
      if (0x3ffffffffffffff < uVar10) {
        uVar10 = 0x3ffffffffffffff;
      }
      if (CARRY8(uVar7,uVar5)) {
        uVar10 = 0x3ffffffffffffff;
      }
      if (uVar10 == 0) {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        puVar6 = operator_new(uVar10 << 5);
      }
      puVar12 = puVar6;
      if (puVar8 != param_2) {
        puVar9 = puVar8;
        do {
          uVar2 = *puVar9;
          uVar3 = puVar9[1];
          uVar4 = puVar9[3];
          puVar12[2] = puVar9[2];
          puVar12[3] = uVar4;
          *puVar12 = uVar2;
          puVar12[1] = uVar3;
          puVar9 = puVar9 + 4;
          puVar12 = puVar12 + 4;
        } while (puVar9 != param_2);
      }
      do {
        uVar2 = *param_3;
        uVar3 = param_3[1];
        uVar4 = param_3[3];
        puVar12[2] = param_3[2];
        puVar12[3] = uVar4;
        *puVar12 = uVar2;
        puVar12[1] = uVar3;
        param_3 = param_3 + 4;
        puVar12 = puVar12 + 4;
      } while (param_3 != param_4);
      for (; puVar1 != param_2; param_2 = param_2 + 4) {
        uVar2 = *param_2;
        uVar3 = param_2[1];
        uVar4 = param_2[3];
        puVar12[2] = param_2[2];
        puVar12[3] = uVar4;
        *puVar12 = uVar2;
        puVar12[1] = uVar3;
        puVar12 = puVar12 + 4;
      }
      if (puVar8 != (undefined8 *)0x0) {
        operator_delete(puVar8);
      }
      *param_1 = puVar6;
      param_1[1] = puVar12;
      param_1[2] = puVar6 + uVar10 * 4;
    }
    else {
      uVar10 = (long)puVar1 - (long)param_2 >> 5;
      if (uVar7 < uVar10) {
        puVar8 = puVar1;
        if (uVar5 != 0) {
          lVar11 = 0;
          do {
            puVar8 = (undefined8 *)((long)puVar1 + lVar11 + uVar7 * -0x20);
            uVar2 = *puVar8;
            uVar3 = puVar8[1];
            puVar8 = (undefined8 *)((long)puVar1 + lVar11 + uVar7 * -0x20 + 0x10);
            uVar4 = puVar8[1];
            puVar6 = (undefined8 *)((long)puVar1 + lVar11 + 0x10);
            *puVar6 = *puVar8;
            puVar6[1] = uVar4;
            *(undefined8 *)((long)puVar1 + lVar11) = uVar2;
            ((undefined8 *)((long)puVar1 + lVar11))[1] = uVar3;
            lVar11 = lVar11 + 0x20;
          } while (uVar7 * -0x20 + lVar11 != 0);
          puVar8 = (undefined8 *)param_1[1];
        }
        param_1[1] = puVar8 + uVar7 * 4;
        uVar10 = (long)puVar1 + (uVar7 * -0x20 - (long)param_2);
        if (0 < (long)uVar10) {
          uVar10 = (uVar10 >> 5) + 1;
          do {
            puVar8 = puVar1 + -4;
            uVar2 = puVar8[uVar7 * -4];
            uVar3 = (puVar8 + uVar7 * -4)[1];
            uVar4 = (puVar1 + uVar7 * -4 + -2)[1];
            puVar1[-2] = puVar1[uVar7 * -4 + -2];
            puVar1[-1] = uVar4;
            *puVar8 = uVar2;
            puVar1[-3] = uVar3;
            uVar10 = uVar10 - 1;
            puVar1 = puVar8;
          } while (1 < uVar10);
        }
        if (0 < (long)uVar5) {
          uVar7 = (uVar5 >> 5) + 1;
          lVar11 = 0;
          do {
            uVar2 = *(undefined8 *)((long)param_3 + lVar11);
            uVar3 = ((undefined8 *)((long)param_3 + lVar11))[1];
            puVar1 = (undefined8 *)((long)param_3 + lVar11 + 0x10);
            uVar4 = puVar1[1];
            puVar8 = (undefined8 *)((long)param_2 + lVar11 + 0x10);
            *puVar8 = *puVar1;
            puVar8[1] = uVar4;
            *(undefined8 *)((long)param_2 + lVar11) = uVar2;
            ((undefined8 *)((long)param_2 + lVar11))[1] = uVar3;
            uVar7 = uVar7 - 1;
            lVar11 = lVar11 + 0x20;
          } while (1 < uVar7);
        }
      }
      else {
        puVar8 = param_3 + uVar10 * 4;
        puVar6 = puVar1;
        if (puVar8 != param_4) {
          do {
            uVar2 = *puVar8;
            uVar3 = puVar8[1];
            uVar4 = puVar8[3];
            puVar6[2] = puVar8[2];
            puVar6[3] = uVar4;
            *puVar6 = uVar2;
            puVar6[1] = uVar3;
            puVar8 = puVar8 + 4;
            puVar6 = puVar6 + 4;
          } while (puVar8 != param_4);
          puVar6 = (undefined8 *)param_1[1];
        }
        puVar6 = puVar6 + (uVar7 - uVar10) * 4;
        param_1[1] = puVar6;
        if (puVar1 != param_2) {
          puVar8 = param_2;
          do {
            uVar2 = *puVar8;
            uVar3 = puVar8[1];
            uVar4 = puVar8[3];
            puVar6[2] = puVar8[2];
            puVar6[3] = uVar4;
            *puVar6 = uVar2;
            puVar6[1] = uVar3;
            puVar8 = puVar8 + 4;
            puVar6 = puVar6 + 4;
          } while (puVar8 != puVar1);
          puVar6 = (undefined8 *)param_1[1];
        }
        param_1[1] = puVar6 + uVar10 * 4;
        if (0 < (long)puVar1 - (long)param_2) {
          uVar7 = (uVar10 & 0x7ffffffffffffff) + 1;
          lVar11 = 0;
          do {
            uVar2 = *(undefined8 *)((long)param_3 + lVar11);
            uVar3 = ((undefined8 *)((long)param_3 + lVar11))[1];
            puVar1 = (undefined8 *)((long)param_3 + lVar11 + 0x10);
            uVar4 = puVar1[1];
            puVar8 = (undefined8 *)((long)param_2 + lVar11 + 0x10);
            *puVar8 = *puVar1;
            puVar8[1] = uVar4;
            *(undefined8 *)((long)param_2 + lVar11) = uVar2;
            ((undefined8 *)((long)param_2 + lVar11))[1] = uVar3;
            uVar7 = uVar7 - 1;
            lVar11 = lVar11 + 0x20;
          } while (1 < uVar7);
        }
      }
    }
  }
  return;
}


