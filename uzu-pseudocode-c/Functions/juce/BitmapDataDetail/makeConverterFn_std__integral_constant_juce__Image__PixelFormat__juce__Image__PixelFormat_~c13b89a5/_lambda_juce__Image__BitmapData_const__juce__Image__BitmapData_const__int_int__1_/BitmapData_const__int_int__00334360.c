// Function : BitmapData_const&,int,int)
// Namespace: juce:BitmapDataDetail:makeConverterFn_std__integral_constant_juce__Image__PixelFormat__juce__Image__PixelFormat_~c13b89a5:_lambda_juce__Image__BitmapData_const__juce__Image__BitmapData_const__int_int__1_
// Entry    : 00334360
// Prototype: undefined BitmapData_const&,int,int)(long * param_1, long * param_2, uint param_3, uint param_4)
// Body     : 00334360 - 003344ad


/* juce::BitmapDataDetail::makeConverterFn<std::integral_constant<juce::Image::PixelFormat,
   (juce::Image::PixelFormat)1>, std::integral_constant<juce::Image::PixelFormat,
   (juce::Image::PixelFormat)2> >(std::integral_constant<juce::Image::PixelFormat,
   (juce::Image::PixelFormat)1>, std::integral_constant<juce::Image::PixelFormat,
   (juce::Image::PixelFormat)2>)::{lambda(juce::Image::BitmapData const&, juce::Image::BitmapData
   const&, int, int)#1}::__invoke(juce::Image::BitmapData const&, juce::Image::BitmapData const&,
   int, int) */

void juce::BitmapDataDetail::
     makeConverterFn<std::integral_constant<juce::Image::PixelFormat,(juce::Image::PixelFormat)1>,std::integral_constant<juce::Image::PixelFormat,(juce::Image::PixelFormat)2>>(std::integral_constant<juce::Image::PixelFormat,(juce::Image::PixelFormat)1>,std::integral_constant<juce::Image::PixelFormat,(juce::Image::PixelFormat)2>)
     ::{lambda(juce::Image::BitmapData_const&,juce::Image::BitmapData_const&,int,int)#1}::
     BitmapData_const__int_int_(long *param_1,long *param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint3 *puVar3;
  uint *puVar4;
  long lVar5;
  uint *puVar6;
  long lVar7;
  ulong uVar8;
  uint3 *puVar9;
  long lVar10;
  uint *puVar11;
  ulong uVar12;
  uint3 *puVar13;
  
  if ((0 < (int)param_3) && (0 < (int)param_4)) {
    puVar3 = (uint3 *)*param_1;
    iVar1 = *(int *)((long)param_1 + 0x14);
    lVar7 = (long)(int)param_1[3];
    puVar4 = (uint *)*param_2;
    iVar2 = *(int *)((long)param_2 + 0x14);
    lVar10 = (long)(int)param_2[3];
    uVar12 = 0;
    puVar9 = puVar3;
    puVar11 = puVar4;
    do {
      if (param_3 == 1) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        puVar6 = puVar11;
        puVar13 = puVar9;
        do {
          *puVar6 = *puVar13 | 0xff000000;
          *(uint *)((long)puVar6 + lVar10) =
               CONCAT12(*(undefined1 *)((long)puVar13 + lVar7 + 2),
                        *(undefined2 *)((long)puVar13 + lVar7)) | 0xff000000;
          uVar8 = uVar8 + 2;
          puVar6 = (uint *)((long)puVar6 + lVar10 * 2);
          puVar13 = (uint3 *)((long)puVar13 + lVar7 * 2);
        } while ((param_3 & 0xfffffffe) != uVar8);
      }
      if ((param_3 & 1) != 0) {
        lVar5 = uVar12 * (long)iVar1;
        *(uint *)((long)puVar4 + uVar8 * lVar10 + uVar12 * (long)iVar2) =
             CONCAT12(*(undefined1 *)((long)puVar3 + uVar8 * lVar7 + lVar5 + 2),
                      *(undefined2 *)((long)puVar3 + uVar8 * lVar7 + lVar5)) | 0xff000000;
      }
      uVar12 = uVar12 + 1;
      puVar11 = (uint *)((long)puVar11 + (long)iVar2);
      puVar9 = (uint3 *)((long)puVar9 + (long)iVar1);
    } while (uVar12 != param_4);
  }
  return;
}


