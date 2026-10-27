// Function : BitmapData_const&,int,int)
// Namespace: juce:BitmapDataDetail:makeConverterFn_std__integral_constant_juce__Image__PixelFormat__juce__Image__PixelFormat_~09a727c4:_lambda_juce__Image__BitmapData_const__juce__Image__BitmapData_const__int_int__1_
// Entry    : 00334bf0
// Prototype: undefined BitmapData_const&,int,int)(long * param_1, undefined8 * param_2, uint param_3, uint param_4)
// Body     : 00334bf0 - 00334ce2


/* juce::BitmapDataDetail::makeConverterFn<std::integral_constant<juce::Image::PixelFormat,
   (juce::Image::PixelFormat)2>, std::integral_constant<juce::Image::PixelFormat,
   (juce::Image::PixelFormat)3> >(std::integral_constant<juce::Image::PixelFormat,
   (juce::Image::PixelFormat)2>, std::integral_constant<juce::Image::PixelFormat,
   (juce::Image::PixelFormat)3>)::{lambda(juce::Image::BitmapData const&, juce::Image::BitmapData
   const&, int, int)#1}::__invoke(juce::Image::BitmapData const&, juce::Image::BitmapData const&,
   int, int) */

void juce::BitmapDataDetail::
     makeConverterFn<std::integral_constant<juce::Image::PixelFormat,(juce::Image::PixelFormat)2>,std::integral_constant<juce::Image::PixelFormat,(juce::Image::PixelFormat)3>>(std::integral_constant<juce::Image::PixelFormat,(juce::Image::PixelFormat)2>,std::integral_constant<juce::Image::PixelFormat,(juce::Image::PixelFormat)3>)
     ::{lambda(juce::Image::BitmapData_const&,juce::Image::BitmapData_const&,int,int)#1}::
     BitmapData_const__int_int_(long *param_1,undefined8 *param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  long lVar12;
  
  if ((0 < (int)param_3) && (0 < (int)param_4)) {
    lVar3 = *param_1;
    iVar1 = *(int *)((long)param_1 + 0x14);
    lVar7 = (long)(int)param_1[3];
    puVar4 = (undefined1 *)*param_2;
    iVar2 = *(int *)((long)param_2 + 0x14);
    lVar6 = (long)*(int *)(param_2 + 3);
    uVar11 = 0;
    lVar9 = lVar3;
    puVar10 = puVar4;
    do {
      if (param_3 == 1) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        puVar5 = puVar10;
        lVar12 = lVar9;
        do {
          *puVar5 = *(undefined1 *)(lVar12 + 3);
          puVar5[lVar6] = *(undefined1 *)(lVar12 + 3 + lVar7);
          uVar8 = uVar8 + 2;
          puVar5 = puVar5 + lVar6 * 2;
          lVar12 = lVar12 + lVar7 * 2;
        } while ((param_3 & 0xfffffffe) != uVar8);
      }
      if ((param_3 & 1) != 0) {
        puVar4[uVar8 * lVar6 + uVar11 * (long)iVar2] =
             *(undefined1 *)(uVar11 * (long)iVar1 + lVar3 + 3 + uVar8 * lVar7);
      }
      uVar11 = uVar11 + 1;
      puVar10 = puVar10 + iVar2;
      lVar9 = lVar9 + iVar1;
    } while (uVar11 != param_4);
  }
  return;
}


