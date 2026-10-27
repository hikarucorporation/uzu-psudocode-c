// Function : BitmapData_const&,int,int)
// Namespace: juce:BitmapDataDetail:makeConverterFn_std__integral_constant_juce__Image__PixelFormat__juce__Image__PixelFormat_~2a5d797b:_lambda_juce__Image__BitmapData_const__juce__Image__BitmapData_const__int_int__1_
// Entry    : 003344b0
// Prototype: undefined BitmapData_const&,int,int)(undefined8 param_1, undefined8 * param_2, uint param_3, uint param_4)
// Body     : 003344b0 - 00334854


/* WARNING: Removing unreachable block (ram,0x00334845) */
/* juce::BitmapDataDetail::makeConverterFn<std::integral_constant<juce::Image::PixelFormat,
   (juce::Image::PixelFormat)1>, std::integral_constant<juce::Image::PixelFormat,
   (juce::Image::PixelFormat)3> >(std::integral_constant<juce::Image::PixelFormat,
   (juce::Image::PixelFormat)1>, std::integral_constant<juce::Image::PixelFormat,
   (juce::Image::PixelFormat)3>)::{lambda(juce::Image::BitmapData const&, juce::Image::BitmapData
   const&, int, int)#1}::__invoke(juce::Image::BitmapData const&, juce::Image::BitmapData const&,
   int, int) */

void juce::BitmapDataDetail::
     makeConverterFn<std::integral_constant<juce::Image::PixelFormat,(juce::Image::PixelFormat)1>,std::integral_constant<juce::Image::PixelFormat,(juce::Image::PixelFormat)3>>(std::integral_constant<juce::Image::PixelFormat,(juce::Image::PixelFormat)1>,std::integral_constant<juce::Image::PixelFormat,(juce::Image::PixelFormat)3>)
     ::{lambda(juce::Image::BitmapData_const&,juce::Image::BitmapData_const&,int,int)#1}::
     BitmapData_const__int_int_(undefined8 param_1,undefined8 *param_2,uint param_3,uint param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined4 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined4 *puVar19;
  ulong uVar20;
  
  if ((0 < (int)param_3) && (0 < (int)param_4)) {
    puVar4 = (undefined4 *)*param_2;
    iVar2 = *(int *)((long)param_2 + 0x14);
    iVar3 = *(int *)(param_2 + 3);
    lVar17 = (long)iVar3;
    uVar5 = (ulong)param_3;
    uVar6 = (ulong)(param_3 & 0xffffffe0);
    uVar14 = (uVar6 - 0x20 >> 5) + 1;
    uVar7 = (ulong)((uint)uVar14 & 3);
    uVar8 = (ulong)(param_3 & 0xfffffff8);
    uVar14 = (uVar14 & 0xfffffffffffffffc) - 4;
    uVar15 = (uVar14 >> 2) + 1;
    uVar20 = 0;
    puVar19 = puVar4;
    do {
      if (iVar3 == 1 && 7 < param_3) {
        if (param_3 < 0x20) {
          uVar18 = 0;
LAB_00334758:
          lVar9 = uVar18 - uVar8;
          puVar12 = (undefined8 *)(uVar18 * lVar17 + (long)puVar19);
          do {
            *puVar12 = 0xffffffffffffffff;
            puVar12 = puVar12 + lVar17;
            lVar9 = lVar9 + 8;
          } while (lVar9 != 0);
          uVar18 = uVar8;
          if (uVar8 != uVar5) goto LAB_00334793;
        }
        else {
          if (uVar6 - 0x20 < 0x60) {
            uVar18 = 0;
          }
          else {
            if (uVar14 == 0) {
              uVar18 = 0;
            }
            else {
              uVar18 = 0;
              uVar13 = uVar15 & 0xfffffffffffffffe;
              puVar10 = puVar19;
              do {
                puVar10[4] = 0xffffffff;
                puVar10[5] = 0xffffffff;
                puVar10[6] = 0xffffffff;
                puVar10[7] = 0xffffffff;
                *puVar10 = 0xffffffff;
                puVar10[1] = 0xffffffff;
                puVar10[2] = 0xffffffff;
                puVar10[3] = 0xffffffff;
                puVar1 = puVar10 + lVar17 * 8 + 4;
                *puVar1 = 0xffffffff;
                puVar1[1] = 0xffffffff;
                puVar1[2] = 0xffffffff;
                puVar1[3] = 0xffffffff;
                puVar1 = puVar10 + lVar17 * 8;
                *puVar1 = 0xffffffff;
                puVar1[1] = 0xffffffff;
                puVar1[2] = 0xffffffff;
                puVar1[3] = 0xffffffff;
                puVar1 = puVar10 + lVar17 * 0x10 + 4;
                *puVar1 = 0xffffffff;
                puVar1[1] = 0xffffffff;
                puVar1[2] = 0xffffffff;
                puVar1[3] = 0xffffffff;
                puVar1 = puVar10 + lVar17 * 0x10;
                *puVar1 = 0xffffffff;
                puVar1[1] = 0xffffffff;
                puVar1[2] = 0xffffffff;
                puVar1[3] = 0xffffffff;
                puVar1 = puVar10 + lVar17 * 0x18 + 4;
                *puVar1 = 0xffffffff;
                puVar1[1] = 0xffffffff;
                puVar1[2] = 0xffffffff;
                puVar1[3] = 0xffffffff;
                puVar1 = puVar10 + lVar17 * 0x18;
                *puVar1 = 0xffffffff;
                puVar1[1] = 0xffffffff;
                puVar1[2] = 0xffffffff;
                puVar1[3] = 0xffffffff;
                puVar1 = puVar10 + lVar17 * 0x20 + 4;
                *puVar1 = 0xffffffff;
                puVar1[1] = 0xffffffff;
                puVar1[2] = 0xffffffff;
                puVar1[3] = 0xffffffff;
                puVar1 = puVar10 + lVar17 * 0x20;
                *puVar1 = 0xffffffff;
                puVar1[1] = 0xffffffff;
                puVar1[2] = 0xffffffff;
                puVar1[3] = 0xffffffff;
                puVar1 = puVar10 + lVar17 * 0x28 + 4;
                *puVar1 = 0xffffffff;
                puVar1[1] = 0xffffffff;
                puVar1[2] = 0xffffffff;
                puVar1[3] = 0xffffffff;
                puVar1 = puVar10 + lVar17 * 0x28;
                *puVar1 = 0xffffffff;
                puVar1[1] = 0xffffffff;
                puVar1[2] = 0xffffffff;
                puVar1[3] = 0xffffffff;
                puVar1 = puVar10 + lVar17 * 0x30 + 4;
                *puVar1 = 0xffffffff;
                puVar1[1] = 0xffffffff;
                puVar1[2] = 0xffffffff;
                puVar1[3] = 0xffffffff;
                puVar1 = puVar10 + lVar17 * 0x30;
                *puVar1 = 0xffffffff;
                puVar1[1] = 0xffffffff;
                puVar1[2] = 0xffffffff;
                puVar1[3] = 0xffffffff;
                uVar18 = uVar18 + 0x100;
                puVar1 = puVar10 + lVar17 * 0x38 + 4;
                *puVar1 = 0xffffffff;
                puVar1[1] = 0xffffffff;
                puVar1[2] = 0xffffffff;
                puVar1[3] = 0xffffffff;
                puVar1 = puVar10 + lVar17 * 0x38;
                *puVar1 = 0xffffffff;
                puVar1[1] = 0xffffffff;
                puVar1[2] = 0xffffffff;
                puVar1[3] = 0xffffffff;
                puVar10 = puVar10 + lVar17 * 0x40;
                uVar13 = uVar13 - 2;
              } while (uVar13 != 0);
              if ((uVar15 & 1) == 0) goto LAB_00334707;
            }
            lVar9 = uVar20 * (long)iVar2;
            lVar16 = (uVar18 | 0x20) * lVar17;
            puVar10 = (undefined4 *)((long)puVar4 + uVar18 * lVar17 + lVar9 + 0x10);
            *puVar10 = 0xffffffff;
            puVar10[1] = 0xffffffff;
            puVar10[2] = 0xffffffff;
            puVar10[3] = 0xffffffff;
            puVar10 = (undefined4 *)((long)puVar4 + uVar18 * lVar17 + lVar9);
            *puVar10 = 0xffffffff;
            puVar10[1] = 0xffffffff;
            puVar10[2] = 0xffffffff;
            puVar10[3] = 0xffffffff;
            lVar11 = (uVar18 | 0x40) * lVar17;
            puVar10 = (undefined4 *)((long)puVar4 + lVar16 + lVar9 + 0x10);
            *puVar10 = 0xffffffff;
            puVar10[1] = 0xffffffff;
            puVar10[2] = 0xffffffff;
            puVar10[3] = 0xffffffff;
            puVar10 = (undefined4 *)((long)puVar4 + lVar16 + lVar9);
            *puVar10 = 0xffffffff;
            puVar10[1] = 0xffffffff;
            puVar10[2] = 0xffffffff;
            puVar10[3] = 0xffffffff;
            lVar16 = (uVar18 | 0x60) * lVar17;
            puVar10 = (undefined4 *)((long)puVar4 + lVar11 + lVar9 + 0x10);
            *puVar10 = 0xffffffff;
            puVar10[1] = 0xffffffff;
            puVar10[2] = 0xffffffff;
            puVar10[3] = 0xffffffff;
            puVar10 = (undefined4 *)((long)puVar4 + lVar11 + lVar9);
            *puVar10 = 0xffffffff;
            puVar10[1] = 0xffffffff;
            puVar10[2] = 0xffffffff;
            puVar10[3] = 0xffffffff;
            uVar18 = uVar18 + 0x80;
            puVar10 = (undefined4 *)((long)puVar4 + lVar16 + lVar9 + 0x10);
            *puVar10 = 0xffffffff;
            puVar10[1] = 0xffffffff;
            puVar10[2] = 0xffffffff;
            puVar10[3] = 0xffffffff;
            puVar10 = (undefined4 *)((long)puVar4 + lVar16 + lVar9);
            *puVar10 = 0xffffffff;
            puVar10[1] = 0xffffffff;
            puVar10[2] = 0xffffffff;
            puVar10[3] = 0xffffffff;
          }
LAB_00334707:
          if (uVar7 != 0) {
            puVar10 = (undefined4 *)(uVar18 * lVar17 + (long)puVar19);
            uVar18 = uVar7;
            do {
              puVar10[4] = 0xffffffff;
              puVar10[5] = 0xffffffff;
              puVar10[6] = 0xffffffff;
              puVar10[7] = 0xffffffff;
              *puVar10 = 0xffffffff;
              puVar10[1] = 0xffffffff;
              puVar10[2] = 0xffffffff;
              puVar10[3] = 0xffffffff;
              puVar10 = puVar10 + lVar17 * 8;
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if (uVar6 != uVar5) {
            uVar18 = uVar6;
            if ((param_3 & 0x18) == 0) goto LAB_00334793;
            goto LAB_00334758;
          }
        }
      }
      else {
        uVar18 = 0;
LAB_00334793:
        uVar13 = ~uVar18;
        if ((ulong)(param_3 & 3) != 0) {
          puVar10 = (undefined4 *)(lVar17 * uVar18 + (long)puVar19);
          lVar9 = 0;
          do {
            *(undefined1 *)puVar10 = 0xff;
            lVar9 = lVar9 + -1;
            puVar10 = (undefined4 *)((long)puVar10 + lVar17);
          } while (-lVar9 != (ulong)(param_3 & 3));
          uVar18 = uVar18 - lVar9;
        }
        if (2 < uVar13 + uVar5) {
          lVar9 = uVar5 - uVar18;
          puVar10 = puVar19;
          do {
            *(undefined1 *)((long)puVar10 + uVar18 * lVar17) = 0xff;
            *(undefined1 *)((long)puVar10 + (uVar18 + 1) * lVar17) = 0xff;
            *(undefined1 *)((long)puVar10 + (uVar18 + 2) * lVar17) = 0xff;
            *(undefined1 *)((long)puVar10 + (uVar18 + 3) * lVar17) = 0xff;
            puVar10 = puVar10 + lVar17;
            lVar9 = lVar9 + -4;
          } while (lVar9 != 0);
        }
      }
      uVar20 = uVar20 + 1;
      puVar19 = (undefined4 *)((long)puVar19 + (long)iVar2);
    } while (uVar20 != param_4);
  }
  return;
}


