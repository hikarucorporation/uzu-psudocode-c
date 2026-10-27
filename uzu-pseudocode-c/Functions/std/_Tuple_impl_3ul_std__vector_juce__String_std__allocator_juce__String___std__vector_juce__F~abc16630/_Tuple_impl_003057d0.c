// Function : _Tuple_impl
// Namespace: std:_Tuple_impl_3ul_std__vector_juce__String_std__allocator_juce__String___std__vector_juce__F~abc16630
// Entry    : 003057d0
// Prototype: undefined _Tuple_impl(undefined4 param_1_00, _Tuple_impl<3ul,std::vector<juce::String,std::allocator<juce::String>>,std::vector<juce::FontFeatureSetting,std::allocator<juce::FontFeatureSetting>>,juce::TypefaceMetricsKind,float,float,float,float,float,float,bool,bool> * this, long * param_3, ulong * param_4, undefined4 param_5_00, undefined4 * param_6, undefined4 * param_7, undefined4 * param_8, undefined4 * param_9, undefined4 * param_10, _Tuple_impl<3ul,std::vector<juce::String,std::allocator<juce::String>>,std::vector<juce::FontFeatureSetting,std::allocator<juce::FontFeatureSetting>>,juce::TypefaceMetricsKind,float,float,float,float,float,float,bool,bool> * param_11, _Tuple_impl<3ul,std::vector<juce::String,std::allocator<juce::String>>,std::vector<juce::FontFeatureSetting,std::allocator<juce::FontFeatureSetting>>,juce::TypefaceMetricsKind,float,float,float,float,float,float,bool,bool> param_12)
// Body     : 003057d0 - 00305a8c


/* std::_Tuple_impl<3ul, std::vector<juce::String, std::allocator<juce::String> >,
   std::vector<juce::FontFeatureSetting, std::allocator<juce::FontFeatureSetting> >,
   juce::TypefaceMetricsKind, float, float, float, float, float, float, bool,
   bool>::_Tuple_impl(std::vector<juce::String, std::allocator<juce::String> > const&,
   std::vector<juce::FontFeatureSetting, std::allocator<juce::FontFeatureSetting> > const&,
   juce::TypefaceMetricsKind const&, float const&, float const&, float const&, float const&, float
   const&, float const&, bool const&, bool const&) */

void __thiscall
std::
_Tuple_impl<3ul,std::vector<juce::String,std::allocator<juce::String>>,std::vector<juce::FontFeatureSetting,std::allocator<juce::FontFeatureSetting>>,juce::TypefaceMetricsKind,float,float,float,float,float,float,bool,bool>
::_Tuple_impl(undefined4 param_1_00,
             _Tuple_impl<3ul,std::vector<juce::String,std::allocator<juce::String>>,std::vector<juce::FontFeatureSetting,std::allocator<juce::FontFeatureSetting>>,juce::TypefaceMetricsKind,float,float,float,float,float,float,bool,bool>
             *this,long *param_3,ulong *param_4,undefined4 param_5_00,undefined4 *param_6,
             undefined4 *param_7,undefined4 *param_8,undefined4 *param_9,undefined4 *param_10,
             _Tuple_impl<3ul,std::vector<juce::String,std::allocator<juce::String>>,std::vector<juce::FontFeatureSetting,std::allocator<juce::FontFeatureSetting>>,juce::TypefaceMetricsKind,float,float,float,float,float,float,bool,bool>
             *param_11,
             _Tuple_impl<3ul,std::vector<juce::String,std::allocator<juce::String>>,std::vector<juce::FontFeatureSetting,std::allocator<juce::FontFeatureSetting>>,juce::TypefaceMetricsKind,float,float,float,float,float,float,bool,bool>
             param_12)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined8 *puVar17;
  long *plVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  int *piVar23;
  ulong uVar24;
  ulong uVar25;
  
  *this = param_12;
  this[1] = *param_11;
  *(undefined4 *)(this + 4) = param_1_00;
  *(undefined4 *)(this + 8) = *param_10;
  *(undefined4 *)(this + 0xc) = *param_9;
  *(undefined4 *)(this + 0x10) = *param_8;
  *(undefined4 *)(this + 0x14) = *param_7;
  *(undefined4 *)(this + 0x18) = *param_6;
  *(undefined4 *)(this + 0x1c) = param_5_00;
  uVar25 = param_4[1];
  uVar20 = *param_4;
  uVar19 = (long)(uVar25 - uVar20) >> 3;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  if (uVar25 - uVar20 == 0) {
    puVar15 = (undefined8 *)0x0;
  }
  else {
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar19;
    if (SUB168(auVar7 * ZEXT816(8),8) != 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_bad_array_new_length();
    }
    puVar15 = operator_new(SUB168(auVar7 * ZEXT816(8),0));
  }
  *(undefined8 **)(this + 0x20) = puVar15;
  *(undefined8 **)(this + 0x28) = puVar15;
  *(undefined8 **)(this + 0x30) = puVar15 + uVar19;
  puVar17 = (undefined8 *)*param_4;
  puVar5 = (undefined8 *)param_4[1];
  if (puVar17 != puVar5) {
    uVar25 = (long)puVar5 + (-8 - (long)puVar17);
    if ((0x17 < uVar25) &&
       ((uVar25 = (uVar25 >> 3) + 1, puVar17 + uVar25 <= puVar15 || (puVar15 + uVar25 <= puVar17))))
    {
      uVar19 = uVar25 & 0xfffffffffffffffc;
      uVar20 = (uVar19 - 4 >> 2) + 1;
      uVar24 = (ulong)((uint)uVar20 & 3);
      if (uVar19 - 4 < 0xc) {
        lVar22 = 0;
      }
      else {
        uVar20 = uVar20 & 0xfffffffffffffffc;
        lVar22 = 0;
        do {
          uVar12 = (puVar17 + lVar22)[1];
          uVar13 = puVar17[lVar22 + 2];
          uVar14 = (puVar17 + lVar22 + 2)[1];
          puVar15[lVar22] = puVar17[lVar22];
          (puVar15 + lVar22)[1] = uVar12;
          puVar15[lVar22 + 2] = uVar13;
          (puVar15 + lVar22 + 2)[1] = uVar14;
          uVar12 = (puVar17 + lVar22 + 4)[1];
          uVar13 = puVar17[lVar22 + 6];
          uVar14 = (puVar17 + lVar22 + 6)[1];
          puVar15[lVar22 + 4] = puVar17[lVar22 + 4];
          (puVar15 + lVar22 + 4)[1] = uVar12;
          puVar15[lVar22 + 6] = uVar13;
          (puVar15 + lVar22 + 6)[1] = uVar14;
          uVar12 = (puVar17 + lVar22 + 8)[1];
          uVar13 = puVar17[lVar22 + 10];
          uVar14 = (puVar17 + lVar22 + 10)[1];
          puVar15[lVar22 + 8] = puVar17[lVar22 + 8];
          (puVar15 + lVar22 + 8)[1] = uVar12;
          puVar15[lVar22 + 10] = uVar13;
          (puVar15 + lVar22 + 10)[1] = uVar14;
          puVar1 = puVar17 + lVar22 + 0xc;
          uVar9 = *(undefined4 *)((long)puVar1 + 4);
          uVar10 = *(undefined4 *)(puVar1 + 1);
          uVar11 = *(undefined4 *)((long)puVar1 + 0xc);
          uVar12 = puVar17[lVar22 + 0xe];
          uVar13 = (puVar17 + lVar22 + 0xe)[1];
          puVar2 = puVar15 + lVar22 + 0xc;
          *(undefined4 *)puVar2 = *(undefined4 *)puVar1;
          *(undefined4 *)((long)puVar2 + 4) = uVar9;
          *(undefined4 *)(puVar2 + 1) = uVar10;
          *(undefined4 *)((long)puVar2 + 0xc) = uVar11;
          puVar15[lVar22 + 0xe] = uVar12;
          (puVar15 + lVar22 + 0xe)[1] = uVar13;
          lVar22 = lVar22 + 0x10;
          uVar20 = uVar20 - 4;
        } while (uVar20 != 0);
      }
      if (uVar24 != 0) {
        lVar21 = 0;
        do {
          puVar3 = (undefined4 *)((long)puVar17 + lVar21 + lVar22 * 8);
          uVar9 = puVar3[1];
          uVar10 = puVar3[2];
          uVar11 = puVar3[3];
          puVar1 = (undefined8 *)((long)puVar17 + lVar21 + lVar22 * 8 + 0x10);
          uVar12 = *puVar1;
          uVar13 = puVar1[1];
          puVar4 = (undefined4 *)((long)puVar15 + lVar21 + lVar22 * 8);
          *puVar4 = *puVar3;
          puVar4[1] = uVar9;
          puVar4[2] = uVar10;
          puVar4[3] = uVar11;
          puVar1 = (undefined8 *)((long)puVar15 + lVar21 + lVar22 * 8 + 0x10);
          *puVar1 = uVar12;
          puVar1[1] = uVar13;
          lVar21 = lVar21 + 0x20;
        } while (uVar24 * 0x20 != lVar21);
      }
      puVar15 = puVar15 + uVar19;
      if (uVar25 == uVar19) goto LAB_003059d3;
      puVar17 = puVar17 + uVar19;
    }
    do {
      *puVar15 = *puVar17;
      puVar17 = puVar17 + 1;
      puVar15 = puVar15 + 1;
    } while (puVar17 != puVar5);
  }
LAB_003059d3:
  *(undefined8 **)(this + 0x28) = puVar15;
  lVar22 = param_3[1];
  lVar21 = *param_3;
  uVar25 = lVar22 - lVar21 >> 3;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  if (lVar22 - lVar21 == 0) {
    plVar16 = (long *)0x0;
  }
  else {
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar25;
    if (SUB168(auVar8 * ZEXT816(8),8) != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00305a88 to 00305a8c has its CatchHandler @ 00305a8d */
      std::__throw_bad_array_new_length();
    }
                    /* try { // try from 00305a0f to 00305a16 has its CatchHandler @ 00305a8d */
    plVar16 = operator_new(SUB168(auVar8 * ZEXT816(8),0));
  }
  *(long **)(this + 0x38) = plVar16;
  *(long **)(this + 0x40) = plVar16;
  *(long **)(this + 0x48) = plVar16 + uVar25;
  plVar6 = (long *)param_3[1];
  for (plVar18 = (long *)*param_3; plVar18 != plVar6; plVar18 = plVar18 + 1) {
    lVar22 = *plVar18;
    *plVar16 = lVar22;
    piVar23 = (int *)(lVar22 + -0x10);
    if (piVar23 != &juce::emptyString) {
      LOCK();
      *piVar23 = *piVar23 + 1;
      UNLOCK();
    }
    plVar16 = plVar16 + 1;
  }
  *(long **)(this + 0x40) = plVar16;
  return;
}


