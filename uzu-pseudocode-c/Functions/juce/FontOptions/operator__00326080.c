// Function : operator<
// Namespace: juce:FontOptions
// Entry    : 00326080
// Prototype: bool operator<(FontOptions * this, undefined8 * param_1)
// Body     : 00326080 - 0032657f


/* juce::FontOptions::TEMPNAMEPLACEHOLDERVALUE(juce::FontOptions const&) const */

bool __thiscall juce::FontOptions::operator<(FontOptions *this,undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  uint *puVar8;
  uint *puVar9;
  long *plVar10;
  char cVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  char cVar15;
  long *plVar16;
  int *piVar17;
  byte *pbVar18;
  _Tuple_impl<3ul,std::vector<juce::String,std::allocator<juce::String>>,std::vector<juce::FontFeatureSetting,std::allocator<juce::FontFeatureSetting>>,juce::TypefaceMetricsKind,float,float,float,float,float,float,bool,bool>
  local_100 [24];
  float local_e8;
  int local_e4;
  uint *local_e0;
  uint *local_d8;
  long *local_c8;
  long *local_c0;
  ulong local_b0;
  byte *local_a8;
  byte *local_a0;
  _Tuple_impl<3ul,std::vector<juce::String,std::allocator<juce::String>>,std::vector<juce::FontFeatureSetting,std::allocator<juce::FontFeatureSetting>>,juce::TypefaceMetricsKind,float,float,float,float,float,float,bool,bool>
  local_98 [24];
  float local_80;
  int local_7c;
  uint *local_78;
  uint *local_70;
  long *local_60;
  long *local_58;
  ulong local_48;
  byte *local_40;
  byte *local_38;
  
  uVar3 = *(ulong *)(this + 0x10);
  std::
  _Tuple_impl<3ul,std::vector<juce::String,std::allocator<juce::String>>,std::vector<juce::FontFeatureSetting,std::allocator<juce::FontFeatureSetting>>,juce::TypefaceMetricsKind,float,float,float,float,float,float,bool,bool>
  ::_Tuple_impl(*(undefined4 *)(this + 0x58),local_100,(long *)(this + 0x18),(ulong *)(this + 0x30),
                *(undefined4 *)(this + 0x48),(undefined4 *)(this + 0x5c),(undefined4 *)(this + 0x60)
                ,(undefined4 *)(this + 0x4c),(undefined4 *)(this + 0x50),(undefined4 *)(this + 0x54)
                ,(_Tuple_impl<3ul,std::vector<juce::String,std::allocator<juce::String>>,std::vector<juce::FontFeatureSetting,std::allocator<juce::FontFeatureSetting>>,juce::TypefaceMetricsKind,float,float,float,float,float,float,bool,bool>
                  *)(this + 100),
                *(_Tuple_impl<3ul,std::vector<juce::String,std::allocator<juce::String>>,std::vector<juce::FontFeatureSetting,std::allocator<juce::FontFeatureSetting>>,juce::TypefaceMetricsKind,float,float,float,float,float,float,bool,bool>
                  *)(this + 0x65));
  local_a8 = *(byte **)(this + 8);
  pbVar13 = local_a8 + -0x10;
  if (pbVar13 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar13 = *(int *)pbVar13 + 1;
    UNLOCK();
  }
  local_a0 = *(byte **)this;
  pbVar13 = local_a0 + -0x10;
  if (pbVar13 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar13 = *(int *)pbVar13 + 1;
    UNLOCK();
  }
  uVar4 = param_1[2];
                    /* try { // try from 0032614a to 00326166 has its CatchHandler @ 00326580 */
  local_b0 = uVar3;
  std::
  _Tuple_impl<3ul,std::vector<juce::String,std::allocator<juce::String>>,std::vector<juce::FontFeatureSetting,std::allocator<juce::FontFeatureSetting>>,juce::TypefaceMetricsKind,float,float,float,float,float,float,bool,bool>
  ::_Tuple_impl(*(undefined4 *)(param_1 + 0xb),local_98,param_1 + 3,param_1 + 6,
                *(undefined4 *)(param_1 + 9),(undefined4 *)((long)param_1 + 0x5c),
                (undefined4 *)(param_1 + 0xc),(undefined4 *)((long)param_1 + 0x4c),
                (undefined4 *)(param_1 + 10),(undefined4 *)((long)param_1 + 0x54),
                (_Tuple_impl<3ul,std::vector<juce::String,std::allocator<juce::String>>,std::vector<juce::FontFeatureSetting,std::allocator<juce::FontFeatureSetting>>,juce::TypefaceMetricsKind,float,float,float,float,float,float,bool,bool>
                 *)((long)param_1 + 100),
                *(_Tuple_impl<3ul,std::vector<juce::String,std::allocator<juce::String>>,std::vector<juce::FontFeatureSetting,std::allocator<juce::FontFeatureSetting>>,juce::TypefaceMetricsKind,float,float,float,float,float,float,bool,bool>
                  *)((long)param_1 + 0x65));
  pbVar13 = local_a0;
  local_40 = (byte *)param_1[1];
  pbVar14 = local_40 + -0x10;
  if (pbVar14 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar14 = *(int *)pbVar14 + 1;
    UNLOCK();
  }
  pbVar18 = (byte *)*param_1;
  pbVar14 = pbVar18 + -0x10;
  if (pbVar14 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar14 = *(int *)pbVar14 + 1;
    UNLOCK();
  }
  local_48 = uVar4;
  local_38 = pbVar18;
  uVar12 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                     (local_a0,pbVar18);
  cVar11 = -1;
  if (-1 < (int)uVar12) {
    uVar12 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                       (pbVar18,pbVar13);
    pbVar14 = local_40;
    pbVar13 = local_a8;
    if ((int)uVar12 < 0) {
LAB_003263a7:
      cVar11 = '\x01';
    }
    else {
      uVar12 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                         (local_a8,local_40);
      if (-1 < (int)uVar12) {
        uVar12 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                           (pbVar14,pbVar13);
        plVar10 = local_58;
        plVar16 = local_c0;
        if ((int)uVar12 < 0) goto LAB_003263a7;
        plVar6 = local_c8;
        plVar7 = local_60;
        if (local_b0 == local_48) {
          for (; plVar6 != plVar16; plVar6 = plVar6 + 1) {
            if (plVar7 == plVar10) goto LAB_003263a7;
            pbVar13 = (byte *)*plVar7;
            pbVar14 = (byte *)*plVar6;
            uVar12 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                               (pbVar14,pbVar13);
            if ((int)uVar12 < 0) {
              cVar11 = -1;
              goto LAB_003263aa;
            }
            uVar12 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                               (pbVar13,pbVar14);
            if ((int)uVar12 < 0) goto LAB_003263a7;
            plVar7 = plVar7 + 1;
          }
          cVar11 = -1;
          puVar8 = local_e0;
          puVar9 = local_78;
          if (plVar7 == plVar10) {
            for (; puVar8 != local_d8; puVar8 = puVar8 + 2) {
              if (puVar9 == local_70) goto LAB_003263a7;
              uVar12 = *puVar8;
              uVar2 = *puVar9;
              cVar11 = uVar2 < uVar12;
              bVar5 = uVar12 < uVar2;
              if (uVar2 == uVar12) {
                cVar11 = puVar9[1] < puVar8[1];
                bVar5 = puVar8[1] < puVar9[1];
              }
              if (bVar5) {
                cVar11 = -1;
              }
              if (cVar11 != '\0') goto LAB_00326338;
              puVar9 = puVar9 + 2;
            }
            cVar11 = -(puVar9 != local_70);
LAB_00326338:
            if (cVar11 == '\0') {
              if (local_e4 == local_7c) {
                cVar15 = '\x01';
                if (local_e8 <= local_80) {
                  cVar15 = (local_e8 != local_80) * '\x02';
                }
                cVar11 = -1;
                if (local_80 <= local_e8) {
                  cVar11 = cVar15;
                }
                if (cVar11 == '\0') {
                  cVar11 = std::
                           __tuple_cmp<std::partial_ordering,std::tuple<juce::String,juce::String,juce::Typeface*,std::vector<juce::String,std::allocator<juce::String>>,std::vector<juce::FontFeatureSetting,std::allocator<juce::FontFeatureSetting>>,juce::TypefaceMetricsKind,float,float,float,float,float,float,bool,bool>,std::tuple<juce::String,juce::String,juce::Typeface*,std::vector<juce::String,std::allocator<juce::String>>,std::vector<juce::FontFeatureSetting,std::allocator<juce::FontFeatureSetting>>,juce::TypefaceMetricsKind,float,float,float,float,float,float,bool,bool>,7ul,8ul,9ul,10ul,11ul,12ul,13ul>
                                     ((byte *)local_100,(byte *)local_98);
                }
              }
              else {
                cVar11 = (local_7c <= local_e4) * '\x02' + -1;
              }
            }
          }
        }
        else {
          cVar11 = (local_48 <= local_b0) * '\x02' + -1;
        }
      }
    }
  }
LAB_003263aa:
  pbVar18 = pbVar18 + -0x10;
  if (pbVar18 != (byte *)&emptyString) {
    LOCK();
    iVar1 = *(int *)pbVar18;
    *(int *)pbVar18 = *(int *)pbVar18 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(pbVar18);
    }
  }
  pbVar13 = local_40 + -0x10;
  if (pbVar13 == (byte *)&emptyString) {
LAB_003263ec:
    plVar16 = local_60;
    if (local_60 != local_58) {
LAB_003264d9:
      do {
        piVar17 = (int *)(*plVar16 + -0x10);
        if (piVar17 != &emptyString) {
          LOCK();
          iVar1 = *piVar17;
          *piVar17 = *piVar17 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            operator_delete__(piVar17);
          }
        }
        plVar16 = plVar16 + 1;
      } while (plVar16 != local_58);
    }
  }
  else {
    LOCK();
    iVar1 = *(int *)pbVar13;
    *(int *)pbVar13 = *(int *)pbVar13 + -1;
    UNLOCK();
    if (iVar1 != 0) goto LAB_003263ec;
    operator_delete__(pbVar13);
    plVar16 = local_60;
    if (local_60 != local_58) goto LAB_003264d9;
  }
  if (local_60 != (long *)0x0) {
    operator_delete(local_60);
  }
  if (local_78 != (uint *)0x0) {
    operator_delete(local_78);
  }
  pbVar13 = local_a0 + -0x10;
  if (pbVar13 != (byte *)&emptyString) {
    LOCK();
    iVar1 = *(int *)pbVar13;
    *(int *)pbVar13 = *(int *)pbVar13 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(pbVar13);
    }
  }
  pbVar13 = local_a8 + -0x10;
  if (pbVar13 == (byte *)&emptyString) {
LAB_00326463:
    plVar16 = local_c8;
    if (local_c8 == local_c0) goto joined_r0x00326561;
  }
  else {
    LOCK();
    iVar1 = *(int *)pbVar13;
    *(int *)pbVar13 = *(int *)pbVar13 + -1;
    UNLOCK();
    if (iVar1 != 0) goto LAB_00326463;
    operator_delete__(pbVar13);
    plVar16 = local_c8;
    if (local_c8 == local_c0) goto joined_r0x00326561;
  }
  do {
    piVar17 = (int *)(*plVar16 + -0x10);
    if (piVar17 != &emptyString) {
      LOCK();
      iVar1 = *piVar17;
      *piVar17 = *piVar17 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar17);
      }
    }
    plVar16 = plVar16 + 1;
  } while (plVar16 != local_c0);
joined_r0x00326561:
  if (local_c8 != (long *)0x0) {
    operator_delete(local_c8);
  }
  if (local_e0 != (uint *)0x0) {
    operator_delete(local_e0);
  }
  return cVar11 == -1;
}


