// Function : BitmapData_const&,int,int)
// Namespace: juce:BitmapDataDetail:makeConverterFn_std__integral_constant_juce__Image__PixelFormat__juce__Image__PixelFormat_~ad8aa1b0:_lambda_juce__Image__BitmapData_const__juce__Image__BitmapData_const__int_int__1_
// Entry    : 00334220
// Prototype: undefined BitmapData_const&,int,int)(undefined8 * param_1, long * param_2, uint param_3, uint param_4)
// Body     : 00334220 - 00334358


/* juce::BitmapDataDetail::makeConverterFn<std::integral_constant<juce::Image::PixelFormat,
   (juce::Image::PixelFormat)1>, std::integral_constant<juce::Image::PixelFormat,
   (juce::Image::PixelFormat)1> >(std::integral_constant<juce::Image::PixelFormat,
   (juce::Image::PixelFormat)1>, std::integral_constant<juce::Image::PixelFormat,
   (juce::Image::PixelFormat)1>)::{lambda(juce::Image::BitmapData const&, juce::Image::BitmapData
   const&, int, int)#1}::__invoke(juce::Image::BitmapData const&, juce::Image::BitmapData const&,
   int, int) */

void juce::BitmapDataDetail::
     makeConverterFn<std::integral_constant<juce::Image::PixelFormat,(juce::Image::PixelFormat)1>,std::integral_constant<juce::Image::PixelFormat,(juce::Image::PixelFormat)1>>(std::integral_constant<juce::Image::PixelFormat,(juce::Image::PixelFormat)1>,std::integral_constant<juce::Image::PixelFormat,(juce::Image::PixelFormat)1>)
     ::{lambda(juce::Image::BitmapData_const&,juce::Image::BitmapData_const&,int,int)#1}::
     BitmapData_const__int_int_(undefined8 *param_1,long *param_2,uint param_3,uint param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  undefined1 *puVar15;
  ulong uVar16;
  
  if ((0 < (int)param_3) && (0 < (int)param_4)) {
    puVar5 = (undefined2 *)*param_1;
    iVar3 = *(int *)((long)param_1 + 0x14);
    lVar12 = (long)*(int *)(param_1 + 3);
    lVar6 = *param_2;
    iVar4 = *(int *)((long)param_2 + 0x14);
    lVar11 = (long)(int)param_2[3];
    puVar15 = (undefined1 *)(lVar6 + 2);
    uVar16 = 0;
    puVar14 = puVar5;
    do {
      if (param_3 == 1) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        puVar8 = puVar15;
        puVar13 = puVar14;
        do {
          uVar1 = *(undefined1 *)(puVar13 + 1);
          uVar2 = *puVar13;
          puVar8[-2] = (char)uVar2;
          puVar8[-1] = (char)((ushort)uVar2 >> 8);
          *puVar8 = uVar1;
          uVar1 = *(undefined1 *)((long)puVar13 + lVar12 + 2);
          uVar2 = *(undefined2 *)((long)puVar13 + lVar12);
          puVar8[lVar11 + -2] = (char)uVar2;
          puVar8[lVar11 + -1] = (char)((ushort)uVar2 >> 8);
          puVar8[lVar11] = uVar1;
          uVar10 = uVar10 + 2;
          puVar8 = puVar8 + lVar11 * 2;
          puVar13 = puVar13 + lVar12;
        } while ((param_3 & 0xfffffffe) != uVar10);
      }
      if ((param_3 & 1) != 0) {
        lVar7 = uVar16 * (long)iVar3;
        lVar9 = uVar16 * (long)iVar4 + lVar6;
        uVar1 = *(undefined1 *)((long)puVar5 + uVar10 * lVar12 + lVar7 + 2);
        uVar2 = *(undefined2 *)((long)puVar5 + uVar10 * lVar12 + lVar7);
        lVar7 = uVar10 * lVar11;
        *(char *)(lVar9 + lVar7) = (char)uVar2;
        *(char *)(lVar9 + 1 + lVar7) = (char)((ushort)uVar2 >> 8);
        *(undefined1 *)(lVar9 + 2 + lVar7) = uVar1;
      }
      uVar16 = uVar16 + 1;
      puVar15 = puVar15 + iVar4;
      puVar14 = (undefined2 *)((long)puVar14 + (long)iVar3);
    } while (uVar16 != param_4);
  }
  return;
}


