// Function : _M_realloc_insert<std::unique_ptr<juce::JuceVST3EditController::OwnedParameterListener,std::default_delete<juce::JuceVST3EditController::OwnedParameterListener>>>
// Namespace: std:vector_std__unique_ptr_juce__JuceVST3EditController__OwnedParameterListener_std__default_d~e15538dc
// Entry    : 001af5e0
// Prototype: void _M_realloc_insert<std::unique_ptr<juce::JuceVST3EditController::OwnedParameterListener,std::default_delete<juce::JuceVST3EditController::OwnedParameterListener>>>(vector<std::unique_ptr<juce::JuceVST3EditController::OwnedParameterListener,std::default_delete<juce::JuceVST3EditController::OwnedParameterListener>>,std::allocator<std::unique_ptr<juce::JuceVST3EditController::OwnedParameterListener,std::default_delete<juce::JuceVST3EditController::OwnedParameterListener>>>> * this, undefined8 * param_1, undefined8 * param_2)
// Body     : 001af5e0 - 001af8eb


/* WARNING: Removing unreachable block (ram,0x001af8ca) */
/* WARNING: Removing unreachable block (ram,0x001af8db) */
/* void std::vector<std::unique_ptr<juce::JuceVST3EditController::OwnedParameterListener,
   std::default_delete<juce::JuceVST3EditController::OwnedParameterListener> >,
   std::allocator<std::unique_ptr<juce::JuceVST3EditController::OwnedParameterListener,
   std::default_delete<juce::JuceVST3EditController::OwnedParameterListener> > >
   >::_M_realloc_insert<std::unique_ptr<juce::JuceVST3EditController::OwnedParameterListener,
   std::default_delete<juce::JuceVST3EditController::OwnedParameterListener> >
   >(__gnu_cxx::__normal_iterator<std::unique_ptr<juce::JuceVST3EditController::OwnedParameterListener,
   std::default_delete<juce::JuceVST3EditController::OwnedParameterListener> >*,
   std::vector<std::unique_ptr<juce::JuceVST3EditController::OwnedParameterListener,
   std::default_delete<juce::JuceVST3EditController::OwnedParameterListener> >,
   std::allocator<std::unique_ptr<juce::JuceVST3EditController::OwnedParameterListener,
   std::default_delete<juce::JuceVST3EditController::OwnedParameterListener> > > > >,
   std::unique_ptr<juce::JuceVST3EditController::OwnedParameterListener,
   std::default_delete<juce::JuceVST3EditController::OwnedParameterListener> >&&) */

void __thiscall
std::
vector<std::unique_ptr<juce::JuceVST3EditController::OwnedParameterListener,std::default_delete<juce::JuceVST3EditController::OwnedParameterListener>>,std::allocator<std::unique_ptr<juce::JuceVST3EditController::OwnedParameterListener,std::default_delete<juce::JuceVST3EditController::OwnedParameterListener>>>>
::
_M_realloc_insert<std::unique_ptr<juce::JuceVST3EditController::OwnedParameterListener,std::default_delete<juce::JuceVST3EditController::OwnedParameterListener>>>
          (vector<std::unique_ptr<juce::JuceVST3EditController::OwnedParameterListener,std::default_delete<juce::JuceVST3EditController::OwnedParameterListener>>,std::allocator<std::unique_ptr<juce::JuceVST3EditController::OwnedParameterListener,std::default_delete<juce::JuceVST3EditController::OwnedParameterListener>>>>
           *this,undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  puVar1 = *(undefined8 **)this;
  puVar2 = *(undefined8 **)(this + 8);
  lVar6 = (long)puVar2 - (long)puVar1;
  if (lVar6 == 0x7ffffffffffffff8) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  uVar9 = lVar6 >> 3;
  uVar13 = 1;
  if (lVar6 != 0) {
    uVar13 = uVar9;
  }
  uVar11 = uVar13 + uVar9;
  if (uVar11 >> 0x3c != 0) {
    uVar11 = 0xfffffffffffffff;
  }
  if (CARRY8(uVar13,uVar9)) {
    uVar11 = 0xfffffffffffffff;
  }
  if (uVar11 == 0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    puVar7 = operator_new(uVar11 * 8);
  }
  puVar7[(long)param_1 - (long)puVar1 >> 3] = *param_2;
  *param_2 = 0;
  puVar8 = puVar7;
  if (puVar1 != param_1) {
    uVar13 = ((long)param_1 - (long)puVar1) - 8;
    puVar10 = puVar1;
    if (0x17 < uVar13) {
      uVar14 = (uVar13 >> 3) + 1;
      uVar9 = uVar14 & 0xfffffffffffffffc;
      uVar13 = (uVar9 - 4 >> 2) + 1;
      if (uVar9 - 4 == 0) {
        lVar6 = 0;
LAB_001af743:
        uVar3 = (puVar1 + lVar6)[1];
        uVar4 = puVar1[lVar6 + 2];
        uVar5 = (puVar1 + lVar6 + 2)[1];
        puVar7[lVar6] = puVar1[lVar6];
        (puVar7 + lVar6)[1] = uVar3;
        puVar7[lVar6 + 2] = uVar4;
        (puVar7 + lVar6 + 2)[1] = uVar5;
        puVar1[lVar6] = 0;
        (puVar1 + lVar6)[1] = 0;
        puVar1[lVar6 + 2] = 0;
        (puVar1 + lVar6 + 2)[1] = 0;
      }
      else {
        uVar12 = uVar13 & 0x7ffffffffffffffe;
        lVar6 = 0;
        do {
          uVar3 = (puVar1 + lVar6)[1];
          uVar4 = puVar1[lVar6 + 2];
          uVar5 = (puVar1 + lVar6 + 2)[1];
          puVar7[lVar6] = puVar1[lVar6];
          (puVar7 + lVar6)[1] = uVar3;
          puVar7[lVar6 + 2] = uVar4;
          (puVar7 + lVar6 + 2)[1] = uVar5;
          puVar1[lVar6] = 0;
          (puVar1 + lVar6)[1] = 0;
          puVar1[lVar6 + 2] = 0;
          (puVar1 + lVar6 + 2)[1] = 0;
          uVar3 = (puVar1 + lVar6 + 4)[1];
          uVar4 = puVar1[lVar6 + 6];
          uVar5 = (puVar1 + lVar6 + 6)[1];
          puVar7[lVar6 + 4] = puVar1[lVar6 + 4];
          (puVar7 + lVar6 + 4)[1] = uVar3;
          puVar7[lVar6 + 6] = uVar4;
          (puVar7 + lVar6 + 6)[1] = uVar5;
          puVar1[lVar6 + 4] = 0;
          (puVar1 + lVar6 + 4)[1] = 0;
          puVar1[lVar6 + 6] = 0;
          (puVar1 + lVar6 + 6)[1] = 0;
          lVar6 = lVar6 + 8;
          uVar12 = uVar12 - 2;
        } while (uVar12 != 0);
        if ((uVar13 & 1) != 0) goto LAB_001af743;
      }
      puVar8 = puVar7 + uVar9;
      if (uVar14 == uVar9) goto LAB_001af79a;
      puVar10 = puVar1 + uVar9;
    }
    do {
      *puVar8 = *puVar10;
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
      puVar8 = puVar8 + 1;
    } while (puVar10 != param_1);
  }
LAB_001af79a:
  puVar10 = puVar8 + 1;
  if ((long)puVar2 - (long)param_1 == 0) goto LAB_001af88b;
  uVar13 = ((long)puVar2 - (long)param_1) - 8;
  if (0x17 < uVar13) {
    uVar13 = (uVar13 >> 3) + 1;
    uVar9 = uVar13 & 0xfffffffffffffffc;
    uVar14 = (uVar9 - 4 >> 2) + 1;
    if (uVar9 - 4 == 0) {
      lVar6 = 0;
LAB_001af83a:
      uVar3 = (param_1 + lVar6)[1];
      uVar4 = param_1[lVar6 + 2];
      uVar5 = (param_1 + lVar6 + 2)[1];
      puVar10[lVar6] = param_1[lVar6];
      (puVar10 + lVar6)[1] = uVar3;
      puVar8[lVar6 + 3] = uVar4;
      (puVar8 + lVar6 + 3)[1] = uVar5;
      param_1[lVar6] = 0;
      (param_1 + lVar6)[1] = 0;
      param_1[lVar6 + 2] = 0;
      (param_1 + lVar6 + 2)[1] = 0;
    }
    else {
      uVar12 = uVar14 & 0x7ffffffffffffffe;
      lVar6 = 0;
      do {
        uVar3 = (param_1 + lVar6)[1];
        uVar4 = param_1[lVar6 + 2];
        uVar5 = (param_1 + lVar6 + 2)[1];
        puVar8[lVar6 + 1] = param_1[lVar6];
        (puVar8 + lVar6 + 1)[1] = uVar3;
        puVar8[lVar6 + 3] = uVar4;
        (puVar8 + lVar6 + 3)[1] = uVar5;
        param_1[lVar6] = 0;
        (param_1 + lVar6)[1] = 0;
        param_1[lVar6 + 2] = 0;
        (param_1 + lVar6 + 2)[1] = 0;
        uVar3 = (param_1 + lVar6 + 4)[1];
        uVar4 = param_1[lVar6 + 6];
        uVar5 = (param_1 + lVar6 + 6)[1];
        puVar8[lVar6 + 5] = param_1[lVar6 + 4];
        (puVar8 + lVar6 + 5)[1] = uVar3;
        puVar8[lVar6 + 7] = uVar4;
        (puVar8 + lVar6 + 7)[1] = uVar5;
        param_1[lVar6 + 4] = 0;
        (param_1 + lVar6 + 4)[1] = 0;
        param_1[lVar6 + 6] = 0;
        (param_1 + lVar6 + 6)[1] = 0;
        lVar6 = lVar6 + 8;
        uVar12 = uVar12 - 2;
      } while (uVar12 != 0);
      if ((uVar14 & 1) != 0) goto LAB_001af83a;
    }
    puVar10 = puVar10 + uVar9;
    if (uVar13 == uVar9) goto LAB_001af88b;
    param_1 = param_1 + uVar9;
  }
  do {
    *puVar10 = *param_1;
    *param_1 = 0;
    param_1 = param_1 + 1;
    puVar10 = puVar10 + 1;
  } while (param_1 != puVar2);
LAB_001af88b:
  if (puVar1 != (undefined8 *)0x0) {
    operator_delete(puVar1);
  }
  *(undefined8 **)this = puVar7;
  *(undefined8 **)(this + 8) = puVar10;
  *(undefined8 **)(this + 0x10) = puVar7 + uVar11;
  return;
}


