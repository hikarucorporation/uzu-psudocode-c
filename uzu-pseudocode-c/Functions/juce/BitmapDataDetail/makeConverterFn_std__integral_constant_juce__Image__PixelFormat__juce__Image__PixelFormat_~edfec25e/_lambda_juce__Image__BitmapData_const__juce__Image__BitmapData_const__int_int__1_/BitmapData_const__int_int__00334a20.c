// Function : BitmapData_const&,int,int)
// Namespace: juce:BitmapDataDetail:makeConverterFn_std__integral_constant_juce__Image__PixelFormat__juce__Image__PixelFormat_~edfec25e:_lambda_juce__Image__BitmapData_const__juce__Image__BitmapData_const__int_int__1_
// Entry    : 00334a20
// Prototype: undefined BitmapData_const&,int,int)(undefined8 * param_1, long * param_2, uint param_3, uint param_4)
// Body     : 00334a20 - 00334beb


/* juce::BitmapDataDetail::makeConverterFn<std::integral_constant<juce::Image::PixelFormat,
   (juce::Image::PixelFormat)2>, std::integral_constant<juce::Image::PixelFormat,
   (juce::Image::PixelFormat)2> >(std::integral_constant<juce::Image::PixelFormat,
   (juce::Image::PixelFormat)2>, std::integral_constant<juce::Image::PixelFormat,
   (juce::Image::PixelFormat)2>)::{lambda(juce::Image::BitmapData const&, juce::Image::BitmapData
   const&, int, int)#1}::__invoke(juce::Image::BitmapData const&, juce::Image::BitmapData const&,
   int, int) */

void juce::BitmapDataDetail::
     makeConverterFn<std::integral_constant<juce::Image::PixelFormat,(juce::Image::PixelFormat)2>,std::integral_constant<juce::Image::PixelFormat,(juce::Image::PixelFormat)2>>(std::integral_constant<juce::Image::PixelFormat,(juce::Image::PixelFormat)2>,std::integral_constant<juce::Image::PixelFormat,(juce::Image::PixelFormat)2>)
     ::{lambda(juce::Image::BitmapData_const&,juce::Image::BitmapData_const&,int,int)#1}::
     BitmapData_const__int_int_(undefined8 *param_1,long *param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  ushort uVar17;
  long lVar18;
  uint *puVar19;
  uint *puVar20;
  long lVar21;
  ulong uVar22;
  
  if ((0 < (int)param_3) && (0 < (int)param_4)) {
    puVar15 = (uint *)*param_1;
    iVar1 = *(int *)((long)param_1 + 0x14);
    iVar2 = *(int *)(param_1 + 3);
    puVar5 = (uint *)*param_2;
    iVar3 = *(int *)((long)param_2 + 0x14);
    lVar18 = (long)(int)param_2[3];
    uVar12 = 0;
    puVar19 = puVar5;
    do {
      lVar13 = uVar12 * (long)iVar3;
      lVar21 = 0;
      puVar16 = puVar15;
      puVar20 = puVar19;
      uVar22 = (ulong)param_3;
      do {
        uVar4 = *puVar16;
        uVar11 = uVar4 >> 0x18;
        if (uVar11 == 0) {
          puVar14 = (uint *)((long)puVar5 + lVar21 * lVar18 + lVar13);
          bVar10 = 0;
          uVar8 = 0;
          uVar9 = 0;
        }
        else {
          bVar10 = (byte)(uVar4 >> 0x18);
          if (bVar10 == 0xff) {
            uVar8 = uVar4 & 0xffffff00;
            bVar10 = (byte)(uVar4 >> 0x10);
            puVar14 = (uint *)((long)puVar5 + lVar21 * lVar18 + lVar13);
            uVar9 = uVar4;
          }
          else {
            uVar9 = ((uVar4 & 0xff) * 0xff) / uVar11;
            uVar6 = (ushort)uVar9;
            if (0xfe < uVar9) {
              uVar6 = 0xff;
            }
            uVar9 = ((uVar4 >> 8 & 0xff) * 0xff) / (uint)(ushort)bVar10;
            uVar7 = (ushort)uVar9;
            if (0xfe < uVar9) {
              uVar7 = 0xff;
            }
            uVar9 = ((uVar4 >> 0x10 & 0xff) * 0xff) / (uint)(ushort)bVar10;
            uVar17 = 0xff;
            if (uVar9 < 0xff) {
              uVar17 = (ushort)uVar9;
            }
            uVar9 = uVar6 * uVar11 + 0x7f >> 8;
            uVar8 = uVar7 * uVar11 + 0x7f & 0x1ff00;
            bVar10 = (byte)(uVar17 * uVar11 + 0x7f >> 8);
            puVar14 = puVar20;
          }
        }
        *puVar14 = uVar9 & 0xff | uVar8 & 0xff00 | (uint)bVar10 << 0x10 | uVar4 & 0xff000000;
        lVar21 = lVar21 + 1;
        puVar20 = (uint *)((long)puVar20 + lVar18);
        puVar16 = (uint *)((long)puVar16 + (long)iVar2);
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
      uVar12 = uVar12 + 1;
      puVar19 = (uint *)((long)puVar19 + (long)iVar3);
      puVar15 = (uint *)((long)puVar15 + (long)iVar1);
    } while (uVar12 != param_4);
  }
  return;
}


