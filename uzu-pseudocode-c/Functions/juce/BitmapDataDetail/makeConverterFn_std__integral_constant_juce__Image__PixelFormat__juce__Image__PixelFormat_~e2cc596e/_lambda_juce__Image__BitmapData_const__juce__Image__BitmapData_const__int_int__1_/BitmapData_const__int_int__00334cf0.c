// Function : BitmapData_const&,int,int)
// Namespace: juce:BitmapDataDetail:makeConverterFn_std__integral_constant_juce__Image__PixelFormat__juce__Image__PixelFormat_~e2cc596e:_lambda_juce__Image__BitmapData_const__juce__Image__BitmapData_const__int_int__1_
// Entry    : 00334cf0
// Prototype: undefined BitmapData_const&,int,int)(undefined8 * param_1, long * param_2, uint param_3, uint param_4)
// Body     : 00334cf0 - 00334dd7


/* juce::BitmapDataDetail::makeConverterFn<std::integral_constant<juce::Image::PixelFormat,
   (juce::Image::PixelFormat)3>, std::integral_constant<juce::Image::PixelFormat,
   (juce::Image::PixelFormat)1> >(std::integral_constant<juce::Image::PixelFormat,
   (juce::Image::PixelFormat)3>, std::integral_constant<juce::Image::PixelFormat,
   (juce::Image::PixelFormat)1>)::{lambda(juce::Image::BitmapData const&, juce::Image::BitmapData
   const&, int, int)#1}::__invoke(juce::Image::BitmapData const&, juce::Image::BitmapData const&,
   int, int) */

void juce::BitmapDataDetail::
     makeConverterFn<std::integral_constant<juce::Image::PixelFormat,(juce::Image::PixelFormat)3>,std::integral_constant<juce::Image::PixelFormat,(juce::Image::PixelFormat)1>>(std::integral_constant<juce::Image::PixelFormat,(juce::Image::PixelFormat)3>,std::integral_constant<juce::Image::PixelFormat,(juce::Image::PixelFormat)1>)
     ::{lambda(juce::Image::BitmapData_const&,juce::Image::BitmapData_const&,int,int)#1}::
     BitmapData_const__int_int_(undefined8 *param_1,long *param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  uint uVar7;
  ulong uVar8;
  byte *pbVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  undefined1 uVar13;
  uint uVar14;
  byte *pbVar15;
  ulong uVar16;
  undefined1 *puVar17;
  
  if ((0 < (int)param_3) && (0 < (int)param_4)) {
    pbVar15 = (byte *)*param_1;
    iVar1 = *(int *)((long)param_1 + 0x14);
    iVar2 = *(int *)(param_1 + 3);
    iVar3 = *(int *)((long)param_2 + 0x14);
    lVar4 = param_2[3];
    puVar17 = (undefined1 *)(*param_2 + 2);
    uVar16 = 0;
    do {
      puVar5 = puVar17;
      uVar8 = (ulong)param_3;
      pbVar9 = pbVar15;
      do {
        uVar12 = (uint)*pbVar9 * 0x1010101;
        uVar7 = uVar12 >> 8;
        uVar6 = (undefined1)(uVar12 >> 8);
        uVar14 = uVar12 >> 0x10;
        uVar13 = (undefined1)(uVar12 >> 0x10);
        uVar11 = uVar12 >> 0x18;
        cVar10 = (char)(uVar12 >> 0x18);
        if (cVar10 != -1) {
          if (cVar10 == '\0') {
            uVar13 = 0;
            uVar6 = 0;
            uVar12 = 0;
          }
          else {
            uVar12 = (uVar12 & 0xff) * uVar11 + 0x7f >> 8;
            uVar6 = (undefined1)((uVar7 & 0xff) * uVar11 + 0x7f >> 8);
            uVar13 = (undefined1)((uVar14 & 0xff) * uVar11 + 0x7f >> 8);
          }
        }
        puVar5[-2] = (char)uVar12;
        puVar5[-1] = uVar6;
        *puVar5 = uVar13;
        puVar5 = puVar5 + (int)lVar4;
        pbVar9 = pbVar9 + iVar2;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
      uVar16 = uVar16 + 1;
      puVar17 = puVar17 + iVar3;
      pbVar15 = pbVar15 + iVar1;
    } while (uVar16 != param_4);
  }
  return;
}


