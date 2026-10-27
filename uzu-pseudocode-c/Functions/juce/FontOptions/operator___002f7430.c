// Function : operator==
// Namespace: juce:FontOptions
// Entry    : 002f7430
// Prototype: ulong operator==(FontOptions * this, undefined8 * param_1)
// Body     : 002f7430 - 002f789b


/* juce::FontOptions::TEMPNAMEPLACEHOLDERVALUE(juce::FontOptions const&) const */

ulong __thiscall juce::FontOptions::operator==(FontOptions *this,undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  byte *pbVar5;
  int *piVar6;
  long *plVar7;
  long *plVar8;
  int *piVar9;
  byte *pbVar10;
  long *plVar11;
  _Tuple_impl<3ul,std::vector<juce::String,std::allocator<juce::String>>,std::vector<juce::FontFeatureSetting,std::allocator<juce::FontFeatureSetting>>,juce::TypefaceMetricsKind,float,float,float,float,float,float,bool,bool>
  local_f8;
  char local_f7;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  int local_dc;
  int *local_d8;
  int *local_d0;
  long *local_c0;
  long *local_b8;
  long local_a8;
  byte *local_a0;
  byte *local_98;
  _Tuple_impl<3ul,std::vector<juce::String,std::allocator<juce::String>>,std::vector<juce::FontFeatureSetting,std::allocator<juce::FontFeatureSetting>>,juce::TypefaceMetricsKind,float,float,float,float,float,float,bool,bool>
  local_90;
  char local_8f;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  int local_74;
  void *local_70;
  long local_68;
  long *local_58;
  long *local_50;
  long local_40;
  byte *local_38;
  byte *local_30;
  
  lVar2 = *(long *)(this + 0x10);
  std::
  _Tuple_impl<3ul,std::vector<juce::String,std::allocator<juce::String>>,std::vector<juce::FontFeatureSetting,std::allocator<juce::FontFeatureSetting>>,juce::TypefaceMetricsKind,float,float,float,float,float,float,bool,bool>
  ::_Tuple_impl(*(undefined4 *)(this + 0x58),&local_f8,(long *)(this + 0x18),(ulong *)(this + 0x30),
                *(undefined4 *)(this + 0x48),(undefined4 *)(this + 0x5c),(undefined4 *)(this + 0x60)
                ,(undefined4 *)(this + 0x4c),(undefined4 *)(this + 0x50),(undefined4 *)(this + 0x54)
                ,(_Tuple_impl<3ul,std::vector<juce::String,std::allocator<juce::String>>,std::vector<juce::FontFeatureSetting,std::allocator<juce::FontFeatureSetting>>,juce::TypefaceMetricsKind,float,float,float,float,float,float,bool,bool>
                  *)(this + 100),
                *(_Tuple_impl<3ul,std::vector<juce::String,std::allocator<juce::String>>,std::vector<juce::FontFeatureSetting,std::allocator<juce::FontFeatureSetting>>,juce::TypefaceMetricsKind,float,float,float,float,float,float,bool,bool>
                  *)(this + 0x65));
  local_a0 = *(byte **)(this + 8);
  pbVar5 = local_a0 + -0x10;
  if (pbVar5 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar5 = *(int *)pbVar5 + 1;
    UNLOCK();
  }
  local_98 = *(byte **)this;
  pbVar5 = local_98 + -0x10;
  if (pbVar5 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar5 = *(int *)pbVar5 + 1;
    UNLOCK();
  }
  lVar3 = param_1[2];
                    /* try { // try from 002f74f8 to 002f7511 has its CatchHandler @ 002f789c */
  local_a8 = lVar2;
  std::
  _Tuple_impl<3ul,std::vector<juce::String,std::allocator<juce::String>>,std::vector<juce::FontFeatureSetting,std::allocator<juce::FontFeatureSetting>>,juce::TypefaceMetricsKind,float,float,float,float,float,float,bool,bool>
  ::_Tuple_impl(*(undefined4 *)(param_1 + 0xb),&local_90,param_1 + 3,param_1 + 6,
                *(undefined4 *)(param_1 + 9),(undefined4 *)((long)param_1 + 0x5c),
                (undefined4 *)(param_1 + 0xc),(undefined4 *)((long)param_1 + 0x4c),
                (undefined4 *)(param_1 + 10),(undefined4 *)((long)param_1 + 0x54),
                (_Tuple_impl<3ul,std::vector<juce::String,std::allocator<juce::String>>,std::vector<juce::FontFeatureSetting,std::allocator<juce::FontFeatureSetting>>,juce::TypefaceMetricsKind,float,float,float,float,float,float,bool,bool>
                 *)((long)param_1 + 100),
                *(_Tuple_impl<3ul,std::vector<juce::String,std::allocator<juce::String>>,std::vector<juce::FontFeatureSetting,std::allocator<juce::FontFeatureSetting>>,juce::TypefaceMetricsKind,float,float,float,float,float,float,bool,bool>
                  *)((long)param_1 + 0x65));
  local_38 = (byte *)param_1[1];
  pbVar5 = local_38 + -0x10;
  if (pbVar5 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar5 = *(int *)pbVar5 + 1;
    UNLOCK();
  }
  pbVar10 = (byte *)*param_1;
  pbVar5 = pbVar10 + -0x10;
  if (pbVar5 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar5 = *(int *)pbVar5 + 1;
    UNLOCK();
  }
  local_40 = lVar3;
  local_30 = pbVar10;
  if ((((local_98 == pbVar10) ||
       (uVar4 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                          (local_98,pbVar10), uVar4 == 0)) &&
      ((local_a0 == local_38 ||
       (uVar4 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                          (local_a0,local_38), uVar4 == 0)))) &&
     ((plVar11 = local_b8, local_a8 == local_40 &&
      (plVar7 = local_58, plVar8 = local_c0,
      (long)local_b8 - (long)local_c0 == (long)local_50 - (long)local_58)))) {
    for (; plVar8 != plVar11; plVar8 = plVar8 + 1) {
      if (((byte *)*plVar8 != (byte *)*plVar7) &&
         (uVar4 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                            ((byte *)*plVar8,(byte *)*plVar7), uVar4 != 0)) goto LAB_002f76d4;
      plVar7 = plVar7 + 1;
    }
    if ((long)local_d0 - (long)local_d8 != local_68 - (long)local_70) goto LAB_002f76d4;
    if (local_d8 != local_d0) {
      piVar6 = (int *)((long)local_70 + 4);
      plVar11 = (long *)0x0;
      piVar9 = local_d8;
      do {
        if ((*piVar9 != piVar6[-1]) || (piVar9[1] != *piVar6)) goto LAB_002f76d7;
        piVar9 = piVar9 + 2;
        piVar6 = piVar6 + 2;
      } while (piVar9 != local_d0);
    }
    if (((((local_dc != local_74) || (local_e0 != local_78)) || (NAN(local_e0) || NAN(local_78))) ||
        (((local_e4 != local_7c || (NAN(local_e4) || NAN(local_7c))) ||
         ((local_e8 != local_80 || ((NAN(local_e8) || NAN(local_80) || (local_ec != local_84))))))))
       || ((NAN(local_ec) || NAN(local_84) ||
           ((((local_f0 != local_88 || (NAN(local_f0) || NAN(local_88))) || (local_f4 != local_8c))
            || (NAN(local_f4) || NAN(local_8c))))))) goto LAB_002f76d4;
    plVar11 = (long *)CONCAT71((int7)((ulong)plVar11 >> 8),
                               local_f8 == local_90 && local_f7 == local_8f);
  }
  else {
LAB_002f76d4:
    plVar11 = (long *)0x0;
  }
LAB_002f76d7:
  pbVar10 = pbVar10 + -0x10;
  if (pbVar10 != (byte *)&emptyString) {
    LOCK();
    iVar1 = *(int *)pbVar10;
    *(int *)pbVar10 = *(int *)pbVar10 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(pbVar10);
    }
  }
  pbVar5 = local_38 + -0x10;
  if (pbVar5 == (byte *)&emptyString) {
LAB_002f7719:
    plVar7 = local_58;
    if (local_58 != local_50) {
LAB_002f7809:
      do {
        piVar9 = (int *)(*plVar7 + -0x10);
        if (piVar9 != &emptyString) {
          LOCK();
          iVar1 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            operator_delete__(piVar9);
          }
        }
        plVar7 = plVar7 + 1;
      } while (plVar7 != local_50);
    }
  }
  else {
    LOCK();
    iVar1 = *(int *)pbVar5;
    *(int *)pbVar5 = *(int *)pbVar5 + -1;
    UNLOCK();
    if (iVar1 != 0) goto LAB_002f7719;
    operator_delete__(pbVar5);
    plVar7 = local_58;
    if (local_58 != local_50) goto LAB_002f7809;
  }
  if (local_58 != (long *)0x0) {
    operator_delete(local_58);
  }
  if (local_70 != (void *)0x0) {
    operator_delete(local_70);
  }
  pbVar5 = local_98 + -0x10;
  if (pbVar5 != (byte *)&emptyString) {
    LOCK();
    iVar1 = *(int *)pbVar5;
    *(int *)pbVar5 = *(int *)pbVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(pbVar5);
    }
  }
  pbVar5 = local_a0 + -0x10;
  if (pbVar5 == (byte *)&emptyString) {
LAB_002f7790:
    plVar7 = local_c0;
    if (local_c0 == local_b8) goto joined_r0x002f7891;
  }
  else {
    LOCK();
    iVar1 = *(int *)pbVar5;
    *(int *)pbVar5 = *(int *)pbVar5 + -1;
    UNLOCK();
    if (iVar1 != 0) goto LAB_002f7790;
    operator_delete__(pbVar5);
    plVar7 = local_c0;
    if (local_c0 == local_b8) goto joined_r0x002f7891;
  }
  do {
    piVar9 = (int *)(*plVar7 + -0x10);
    if (piVar9 != &emptyString) {
      LOCK();
      iVar1 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar9);
      }
    }
    plVar7 = plVar7 + 1;
  } while (plVar7 != local_b8);
joined_r0x002f7891:
  if (local_c0 != (long *)0x0) {
    operator_delete(local_c0);
  }
  if (local_d8 != (int *)0x0) {
    operator_delete(local_d8);
  }
  return (ulong)plVar11 & 0xffffffff;
}


