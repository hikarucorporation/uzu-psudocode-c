// Function : BitmapData_const&,int,int)
// Namespace: juce:BitmapDataDetail:makeConverterFn_std__integral_constant_juce__Image__PixelFormat__juce__Image__PixelFormat_~6704d1aa:_lambda_juce__Image__BitmapData_const__juce__Image__BitmapData_const__int_int__1_
// Entry    : 00334860
// Prototype: undefined BitmapData_const&,int,int)(undefined8 * param_1, long * param_2, uint param_3, uint param_4)
// Body     : 00334860 - 00334a18


/* juce::BitmapDataDetail::makeConverterFn<std::integral_constant<juce::Image::PixelFormat,
   (juce::Image::PixelFormat)2>, std::integral_constant<juce::Image::PixelFormat,
   (juce::Image::PixelFormat)1> >(std::integral_constant<juce::Image::PixelFormat,
   (juce::Image::PixelFormat)2>, std::integral_constant<juce::Image::PixelFormat,
   (juce::Image::PixelFormat)1>)::{lambda(juce::Image::BitmapData const&, juce::Image::BitmapData
   const&, int, int)#1}::__invoke(juce::Image::BitmapData const&, juce::Image::BitmapData const&,
   int, int) */

void juce::BitmapDataDetail::
     makeConverterFn<std::integral_constant<juce::Image::PixelFormat,(juce::Image::PixelFormat)2>,std::integral_constant<juce::Image::PixelFormat,(juce::Image::PixelFormat)1>>(std::integral_constant<juce::Image::PixelFormat,(juce::Image::PixelFormat)2>,std::integral_constant<juce::Image::PixelFormat,(juce::Image::PixelFormat)1>)
     ::{lambda(juce::Image::BitmapData_const&,juce::Image::BitmapData_const&,int,int)#1}::
     BitmapData_const__int_int_(undefined8 *param_1,long *param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined1 uVar7;
  ushort uVar8;
  ushort uVar9;
  undefined1 uVar10;
  undefined1 *puVar11;
  ulong uVar12;
  long lVar13;
  undefined1 uVar14;
  uint *puVar15;
  uint *puVar16;
  ushort uVar17;
  long lVar18;
  byte bVar19;
  uint uVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  long lVar23;
  ulong uVar24;
  
  if ((0 < (int)param_3) && (0 < (int)param_4)) {
    puVar15 = (uint *)*param_1;
    iVar1 = *(int *)((long)param_1 + 0x14);
    iVar2 = *(int *)(param_1 + 3);
    puVar5 = (undefined1 *)*param_2;
    iVar3 = *(int *)((long)param_2 + 0x14);
    lVar18 = (long)(int)param_2[3];
    uVar12 = 0;
    puVar21 = puVar5;
    do {
      lVar13 = uVar12 * (long)iVar3;
      lVar23 = 0;
      puVar16 = puVar15;
      puVar22 = puVar21;
      uVar24 = (ulong)param_3;
      do {
        uVar4 = *puVar16;
        uVar20 = uVar4 >> 0x18;
        if (uVar20 == 0) {
          puVar11 = puVar5 + lVar23 * lVar18 + lVar13;
          uVar10 = 0;
          uVar14 = 0;
          uVar7 = 0;
        }
        else {
          bVar19 = (byte)(uVar4 >> 0x18);
          if (bVar19 == 0xff) {
            uVar7 = (undefined1)uVar4;
            uVar14 = (undefined1)(uVar4 >> 8);
            uVar10 = (undefined1)(uVar4 >> 0x10);
            puVar11 = puVar5 + lVar23 * lVar18 + lVar13;
          }
          else {
            uVar6 = ((uVar4 & 0xff) * 0xff) / uVar20;
            uVar8 = (ushort)uVar6;
            if (0xfe < uVar6) {
              uVar8 = 0xff;
            }
            uVar6 = ((uVar4 >> 8 & 0xff) * 0xff) / (uint)(ushort)bVar19;
            uVar9 = (ushort)uVar6;
            if (0xfe < uVar6) {
              uVar9 = 0xff;
            }
            uVar4 = ((uVar4 >> 0x10 & 0xff) * 0xff) / (uint)(ushort)bVar19;
            uVar17 = 0xff;
            if (uVar4 < 0xff) {
              uVar17 = (ushort)uVar4;
            }
            uVar7 = (undefined1)(uVar8 * uVar20 + 0x7f >> 8);
            uVar14 = (undefined1)(uVar9 * uVar20 + 0x7f >> 8);
            uVar10 = (undefined1)(uVar17 * uVar20 + 0x7f >> 8);
            puVar11 = puVar22;
          }
        }
        *puVar11 = uVar7;
        puVar11[1] = uVar14;
        puVar11[2] = uVar10;
        lVar23 = lVar23 + 1;
        puVar22 = puVar22 + lVar18;
        puVar16 = (uint *)((long)puVar16 + (long)iVar2);
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
      uVar12 = uVar12 + 1;
      puVar21 = puVar21 + iVar3;
      puVar15 = (uint *)((long)puVar15 + (long)iVar1);
    } while (uVar12 != param_4);
  }
  return;
}


