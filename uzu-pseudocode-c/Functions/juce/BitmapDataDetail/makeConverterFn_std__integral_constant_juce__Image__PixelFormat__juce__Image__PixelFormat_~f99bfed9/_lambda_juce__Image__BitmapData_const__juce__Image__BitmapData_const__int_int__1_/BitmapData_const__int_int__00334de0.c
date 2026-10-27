// Function : BitmapData_const&,int,int)
// Namespace: juce:BitmapDataDetail:makeConverterFn_std__integral_constant_juce__Image__PixelFormat__juce__Image__PixelFormat_~f99bfed9:_lambda_juce__Image__BitmapData_const__juce__Image__BitmapData_const__int_int__1_
// Entry    : 00334de0
// Prototype: undefined BitmapData_const&,int,int)(undefined8 * param_1, undefined8 * param_2, uint param_3, uint param_4)
// Body     : 00334de0 - 00334eff


/* juce::BitmapDataDetail::makeConverterFn<std::integral_constant<juce::Image::PixelFormat,
   (juce::Image::PixelFormat)3>, std::integral_constant<juce::Image::PixelFormat,
   (juce::Image::PixelFormat)2> >(std::integral_constant<juce::Image::PixelFormat,
   (juce::Image::PixelFormat)3>, std::integral_constant<juce::Image::PixelFormat,
   (juce::Image::PixelFormat)2>)::{lambda(juce::Image::BitmapData const&, juce::Image::BitmapData
   const&, int, int)#1}::__invoke(juce::Image::BitmapData const&, juce::Image::BitmapData const&,
   int, int) */

void juce::BitmapDataDetail::
     makeConverterFn<std::integral_constant<juce::Image::PixelFormat,(juce::Image::PixelFormat)3>,std::integral_constant<juce::Image::PixelFormat,(juce::Image::PixelFormat)2>>(std::integral_constant<juce::Image::PixelFormat,(juce::Image::PixelFormat)3>,std::integral_constant<juce::Image::PixelFormat,(juce::Image::PixelFormat)2>)
     ::{lambda(juce::Image::BitmapData_const&,juce::Image::BitmapData_const&,int,int)#1}::
     BitmapData_const__int_int_(undefined8 *param_1,undefined8 *param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  uint uVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  ulong uVar14;
  uint *puVar15;
  
  if ((0 < (int)param_3) && (0 < (int)param_4)) {
    pbVar13 = (byte *)*param_1;
    iVar1 = *(int *)((long)param_1 + 0x14);
    iVar2 = *(int *)(param_1 + 3);
    puVar15 = (uint *)*param_2;
    iVar3 = *(int *)((long)param_2 + 0x14);
    iVar4 = *(int *)(param_2 + 3);
    uVar14 = 0;
    do {
      puVar5 = puVar15;
      uVar7 = (ulong)param_3;
      pbVar8 = pbVar13;
      do {
        uVar12 = (uint)*pbVar8 * 0x1010101;
        uVar9 = uVar12 >> 8;
        uVar6 = uVar12 >> 0x10;
        uVar11 = uVar12 >> 0x18;
        cVar10 = (char)(uVar12 >> 0x18);
        if (cVar10 == -1) {
          uVar11 = uVar12;
        }
        else if (cVar10 == '\0') {
          uVar6 = 0;
          uVar9 = 0;
          uVar11 = 0;
        }
        else {
          uVar9 = (uVar9 & 0xff) * uVar11 + 0x7f >> 8;
          uVar6 = (uVar6 & 0xff) * uVar11 + 0x7f >> 8;
          uVar11 = (uVar12 & 0xff) * uVar11 + 0x7f >> 8;
        }
        *puVar5 = uVar11 & 0xff | (uVar9 & 0xff) << 8 | (uVar6 & 0xff) << 0x10 | uVar12 & 0xff000000
        ;
        puVar5 = (uint *)((long)puVar5 + (long)iVar4);
        pbVar8 = pbVar8 + iVar2;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      uVar14 = uVar14 + 1;
      puVar15 = (uint *)((long)puVar15 + (long)iVar3);
      pbVar13 = pbVar13 + iVar1;
    } while (uVar14 != param_4);
  }
  return;
}


