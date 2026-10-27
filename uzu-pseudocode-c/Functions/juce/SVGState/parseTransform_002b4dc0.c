// Function : parseTransform
// Namespace: juce:SVGState
// Entry    : 002b4dc0
// Prototype: undefined parseTransform(undefined8 param_1, undefined8 param_2, undefined8 param_3, float * param_4, long * param_5, undefined8 param_6, char * param_7, undefined8 param_8, undefined8 param_9)
// Body     : 002b4dc0 - 002b590e


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl */
/* juce::SVGState::parseTransform(juce::String) */

void __cdecl
juce::SVGState::parseTransform
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,float *param_4,long *param_5,
          undefined8 param_6,char *param_7,undefined8 param_8,undefined8 param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  long *plVar10;
  long lVar11;
  int *piVar12;
  byte *pbVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  long local_c0;
  long *local_b8;
  undefined8 uStack_b0;
  long local_a0;
  undefined1 local_98 [8];
  undefined8 uStack_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  uint local_58;
  uint local_54;
  float local_48;
  
  fVar14 = (float)((ulong)param_3 >> 0x20);
  *(undefined1 (*) [16])param_4 = ZEXT416((uint)DAT_005d9038);
  param_4[4] = 1.0;
  param_4[5] = 0.0;
  if (*(char *)*param_5 == '\0') {
    return;
  }
LAB_002b4e2c:
  local_b8 = (long *)0x0;
  uStack_b0 = 0;
                    /* try { // try from 002b4e34 to 002b4e45 has its CatchHandler @ 002b5965 */
  juce::String::fromFirstOccurrenceOf(&local_c0,param_5,&DAT_00653fc2,param_7,param_8,param_9);
                    /* try { // try from 002b4e46 to 002b4e55 has its CatchHandler @ 002b5940 */
  juce::String::upToFirstOccurrenceOf
            ((undefined8 *)local_68,&local_c0,&DAT_00657c65,param_7,param_8,param_9);
  uVar16 = local_68._0_8_;
                    /* try { // try from 002b4e5b to 002b4e75 has its CatchHandler @ 002b591b */
  StringArray::addTokens
            ((StringArray *)&local_b8,(byte *)local_68._0_8_,&DAT_006577ab,&DAT_005e2ee7);
  pbVar13 = (byte *)(uVar16 + -0x10);
  if (pbVar13 == (byte *)&emptyString) {
LAB_002b4e8e:
    piVar12 = (int *)(local_c0 + -0x10);
    if (piVar12 == &emptyString) goto LAB_002b4ed0;
  }
  else {
    LOCK();
    iVar8 = *(int *)pbVar13;
    *(int *)pbVar13 = *(int *)pbVar13 + -1;
    UNLOCK();
    if (iVar8 != 0) goto LAB_002b4e8e;
    operator_delete__(pbVar13);
    piVar12 = (int *)(local_c0 + -0x10);
    if (piVar12 == &emptyString) goto LAB_002b4ed0;
  }
  LOCK();
  iVar8 = *piVar12;
  *piVar12 = *piVar12 + -1;
  UNLOCK();
  if (iVar8 == 0) {
    operator_delete__(piVar12);
  }
LAB_002b4ed0:
  StringArray::removeEmptyStrings((Array<juce::String,juce::DummyCriticalSection,0> *)&local_b8);
  if (uStack_b0._4_4_ == 0) {
    plVar10 = (long *)&StringArray::operator[](int)::empty;
    if (StringArray::operator[](int)::empty == '\0') {
      iVar8 = __cxa_guard_acquire(&StringArray::operator[](int)::empty);
      plVar10 = (long *)&StringArray::operator[](int)::empty;
      if (iVar8 != 0) {
        StringArray::operator[](int)::empty = &DAT_0061ac58;
        __cxa_atexit(juce::String::~String,&StringArray::operator[](int)::empty,&__dso_handle);
        __cxa_guard_release(&StringArray::operator[](int)::empty);
        plVar10 = (long *)&StringArray::operator[](int)::empty;
      }
    }
  }
  else {
    plVar10 = local_b8;
  }
  local_c0 = *plVar10;
  uVar16 = CharacterFunctions::readDoubleValue<juce::CharPointer_UTF8>(&local_c0);
  local_98 = (undefined1  [8])uVar16;
  if (uStack_b0._4_4_ < 2) {
    plVar10 = (long *)&StringArray::operator[](int)::empty;
    if (StringArray::operator[](int)::empty == '\0') {
      iVar8 = __cxa_guard_acquire(&StringArray::operator[](int)::empty);
      plVar10 = (long *)&StringArray::operator[](int)::empty;
      if (iVar8 != 0) {
        StringArray::operator[](int)::empty = &DAT_0061ac58;
        __cxa_atexit(juce::String::~String,&StringArray::operator[](int)::empty,&__dso_handle);
        __cxa_guard_release(&StringArray::operator[](int)::empty);
        plVar10 = (long *)&StringArray::operator[](int)::empty;
      }
    }
  }
  else {
    plVar10 = local_b8 + 1;
  }
  local_c0 = *plVar10;
  uVar16 = CharacterFunctions::readDoubleValue<juce::CharPointer_UTF8>(&local_c0);
  local_88._0_8_ = uVar16;
  if (uStack_b0._4_4_ < 3) {
    plVar10 = (long *)&StringArray::operator[](int)::empty;
    if (StringArray::operator[](int)::empty == '\0') {
      iVar8 = __cxa_guard_acquire(&StringArray::operator[](int)::empty);
      plVar10 = (long *)&StringArray::operator[](int)::empty;
      if (iVar8 != 0) {
        StringArray::operator[](int)::empty = &DAT_0061ac58;
        __cxa_atexit(juce::String::~String,&StringArray::operator[](int)::empty,&__dso_handle);
        __cxa_guard_release(&StringArray::operator[](int)::empty);
        plVar10 = (long *)&StringArray::operator[](int)::empty;
      }
    }
  }
  else {
    plVar10 = local_b8 + 2;
  }
  local_c0 = *plVar10;
  dVar17 = (double)CharacterFunctions::readDoubleValue<juce::CharPointer_UTF8>(&local_c0);
  if (uStack_b0._4_4_ < 4) {
    plVar10 = (long *)&StringArray::operator[](int)::empty;
    if (StringArray::operator[](int)::empty == '\0') {
      local_78._0_8_ = dVar17;
      iVar8 = __cxa_guard_acquire(&StringArray::operator[](int)::empty);
      plVar10 = (long *)&StringArray::operator[](int)::empty;
      dVar17 = (double)local_78._0_8_;
      if (iVar8 != 0) {
        StringArray::operator[](int)::empty = &DAT_0061ac58;
        __cxa_atexit(juce::String::~String,&StringArray::operator[](int)::empty,&__dso_handle);
        __cxa_guard_release(&StringArray::operator[](int)::empty);
        plVar10 = (long *)&StringArray::operator[](int)::empty;
        dVar17 = (double)local_78._0_8_;
      }
    }
  }
  else {
    plVar10 = local_b8 + 3;
  }
  local_98._0_4_ = (BADTYPE)(double)local_98;
  local_98._4_4_ = (float)(double)local_88._0_8_;
  uStack_90._0_4_ = fVar14;
  uStack_90._4_4_ = (float)local_88._4_4_;
  local_88 = ZEXT416((uint)(float)dVar17);
  local_c0 = *plVar10;
  dVar17 = (double)CharacterFunctions::readDoubleValue<juce::CharPointer_UTF8>(&local_c0);
  fVar14 = (float)dVar17;
  local_98._0_4_ =
       ~-(uint)((NAN((float)local_98._0_4_) || NAN(DAT_005d9480)) ||
               (float)(local_98._0_4_ & _DAT_005d91c0) == _DAT_005dd260) & local_98._0_4_;
  local_98._4_4_ =
       ~-(uint)((NAN((float)local_98._4_4_) || NAN(DAT_005d9484)) ||
               (float)(local_98._4_4_ & _UNK_005d91c4) == _UNK_005dd264) & local_98._4_4_;
  uStack_90._0_4_ =
       (float)(~-(uint)((NAN((float)local_88._0_4_) || NAN(DAT_005d9488)) ||
                       (float)(local_88._0_4_ & _UNK_005d91c8) == _UNK_005dd268) & local_88._0_4_);
  uStack_90._4_4_ =
       (float)(~-(uint)((NAN(fVar14) || NAN(DAT_005d948c)) ||
                       (float)((uint)fVar14 & _UNK_005d91cc) == _UNK_005dd26c) & (uint)fVar14);
  local_68 = _local_98;
  if (uStack_b0._4_4_ < 5) {
    plVar10 = (long *)&StringArray::operator[](int)::empty;
    if (StringArray::operator[](int)::empty == '\0') {
      iVar8 = __cxa_guard_acquire(&StringArray::operator[](int)::empty);
      plVar10 = (long *)&StringArray::operator[](int)::empty;
      if (iVar8 != 0) {
        StringArray::operator[](int)::empty = &DAT_0061ac58;
        __cxa_atexit(juce::String::~String,&StringArray::operator[](int)::empty,&__dso_handle);
        __cxa_guard_release(&StringArray::operator[](int)::empty);
        plVar10 = (long *)&StringArray::operator[](int)::empty;
      }
    }
  }
  else {
    plVar10 = local_b8 + 4;
  }
  local_c0 = *plVar10;
  dVar17 = (double)CharacterFunctions::readDoubleValue<juce::CharPointer_UTF8>(&local_c0);
  fVar14 = (float)dVar17;
  local_58 = ~-(uint)NAN(fVar14) &
             ~-(uint)(DAT_005d94c8 <= (float)((uint)fVar14 & _DAT_005d91c0)) & (uint)fVar14;
  local_78 = ZEXT416(local_58);
  if (uStack_b0._4_4_ < 6) {
    plVar10 = (long *)&StringArray::operator[](int)::empty;
    if (StringArray::operator[](int)::empty == '\0') {
      iVar8 = __cxa_guard_acquire(&StringArray::operator[](int)::empty);
      plVar10 = (long *)&StringArray::operator[](int)::empty;
      if (iVar8 != 0) {
        StringArray::operator[](int)::empty = &DAT_0061ac58;
        __cxa_atexit(juce::String::~String,&StringArray::operator[](int)::empty,&__dso_handle);
        __cxa_guard_release(&StringArray::operator[](int)::empty);
        plVar10 = (long *)&StringArray::operator[](int)::empty;
      }
    }
  }
  else {
    plVar10 = local_b8 + 5;
  }
  local_c0 = *plVar10;
  dVar17 = (double)CharacterFunctions::readDoubleValue<juce::CharPointer_UTF8>(&local_c0);
  fVar14 = (float)dVar17;
  local_54 = ~-(uint)NAN(fVar14) &
             ~-(uint)(DAT_005d94c8 <= (float)((uint)fVar14 & _DAT_005d91c0)) & (uint)fVar14;
  iVar8 = 0;
  param_7 = "matrix";
  do {
    if (*param_7 < '\0') {
      do {
        pbVar13 = (byte *)(param_7 + 1);
        param_7 = param_7 + 1;
        pcVar9 = param_7;
      } while ((*pbVar13 & 0xc0) == 0x80);
    }
    else {
      pcVar9 = param_7 + 1;
      if (*param_7 == '\0') break;
    }
    iVar8 = iVar8 + 1;
    param_7 = pcVar9;
  } while( true );
  local_88 = ZEXT416(local_54);
  uVar7 = CharacterFunctions::compareIgnoreCaseUpTo<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                    ((byte *)*param_5,(byte *)"matrix",iVar8);
  if (uVar7 != 0) {
    iVar8 = 0;
    param_7 = "translate";
    do {
      if (*param_7 < '\0') {
        do {
          pbVar13 = (byte *)(param_7 + 1);
          param_7 = param_7 + 1;
          pcVar9 = param_7;
        } while ((*pbVar13 & 0xc0) == 0x80);
      }
      else {
        pcVar9 = param_7 + 1;
        if (*param_7 == '\0') goto LAB_002b51d0;
      }
      iVar8 = iVar8 + 1;
      param_7 = pcVar9;
    } while( true );
  }
  fVar20 = (float)local_88._0_4_;
  fVar21 = uStack_90._4_4_;
  fVar18 = (float)local_98._0_4_;
  fVar14 = (float)uStack_90;
  fVar19 = (float)local_78._0_4_;
  fVar15 = (float)local_98._4_4_;
  goto LAB_002b5519;
LAB_002b51d0:
  uVar7 = CharacterFunctions::compareIgnoreCaseUpTo<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                    ((byte *)*param_5,(byte *)"translate",iVar8);
  if (uVar7 != 0) {
    iVar8 = 0;
    param_7 = "scale";
    do {
      if (*param_7 < '\0') {
        do {
          pbVar13 = (byte *)(param_7 + 1);
          param_7 = param_7 + 1;
          pcVar9 = param_7;
        } while ((*pbVar13 & 0xc0) == 0x80);
      }
      else {
        pcVar9 = param_7 + 1;
        if (*param_7 == '\0') goto LAB_002b5240;
      }
      iVar8 = iVar8 + 1;
      param_7 = pcVar9;
    } while( true );
  }
  fVar14 = 0.0;
  fVar15 = 0.0;
  fVar20 = (float)local_98._4_4_;
  fVar18 = DAT_005d9038;
  fVar19 = (float)local_98._0_4_;
  goto LAB_002b5510;
LAB_002b5240:
  uVar7 = CharacterFunctions::compareIgnoreCaseUpTo<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                    ((byte *)*param_5,(byte *)0x65f01a,iVar8);
  if (uVar7 != 0) {
    iVar8 = 0;
    param_7 = "rotate";
    do {
      if (*param_7 < '\0') {
        do {
          pbVar13 = (byte *)(param_7 + 1);
          param_7 = param_7 + 1;
          pcVar9 = param_7;
        } while ((*pbVar13 & 0xc0) == 0x80);
      }
      else {
        pcVar9 = param_7 + 1;
        if (*param_7 == '\0') goto LAB_002b52e0;
      }
      iVar8 = iVar8 + 1;
      param_7 = pcVar9;
    } while( true );
  }
  fVar21 = *(float *)(local_68 + (ulong)(1 < (int)uStack_b0._4_4_) * 4);
  fVar20 = 0.0;
  fVar18 = (float)local_98._0_4_;
  fVar14 = 0.0;
  fVar19 = 0.0;
  fVar15 = 0.0;
  goto LAB_002b5519;
LAB_002b52e0:
  uVar7 = CharacterFunctions::compareIgnoreCaseUpTo<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                    ((byte *)*param_5,(byte *)"rotate",iVar8);
  if (uVar7 != 0) {
    iVar8 = 0;
    param_7 = "skewX";
    do {
      if (*param_7 < '\0') {
        do {
          pbVar13 = (byte *)(param_7 + 1);
          param_7 = param_7 + 1;
          pcVar9 = param_7;
        } while ((*pbVar13 & 0xc0) == 0x80);
      }
      else {
        pcVar9 = param_7 + 1;
        if (*param_7 == '\0') goto LAB_002b5376;
      }
      iVar8 = iVar8 + 1;
      param_7 = pcVar9;
    } while( true );
  }
  uVar5 = (float)uStack_90;
  uVar6 = uStack_90._4_4_;
  fVar14 = (float)local_98._0_4_ * DAT_005de504;
  local_78._0_4_ = fVar14;
  local_88._4_4_ = local_98._4_4_;
  local_88._0_4_ = local_98._4_4_;
  local_88._8_4_ = local_98._4_4_;
  local_88._12_4_ = local_98._4_4_;
  local_98 = (undefined1  [8])uStack_90;
  _local_98 = CONCAT48(uVar5,local_98);
  _local_98 = CONCAT412(uVar6,_local_98);
  local_48 = cosf(fVar14);
  fVar15 = sinf((float)local_78._0_4_);
  fVar20 = ((float)local_88._0_4_ * (float)((uint)fVar15 ^ _DAT_006524b0) -
           (float)local_98._0_4_ * local_48) + (float)local_98._0_4_;
  fVar21 = local_48;
  fVar18 = local_48;
  fVar14 = (float)((uint)fVar15 ^ _DAT_006524b0);
  fVar19 = (fVar15 * (float)local_98._0_4_ - local_48 * (float)local_88._0_4_) +
           (float)local_88._0_4_;
  goto LAB_002b5519;
LAB_002b5376:
  uVar7 = CharacterFunctions::compareIgnoreCaseUpTo<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                    ((byte *)*param_5,&DAT_005e3a74,iVar8);
  if (uVar7 != 0) {
    iVar8 = 0;
    param_7 = "skewY";
    do {
      if (*param_7 < '\0') {
        do {
          pbVar13 = (byte *)(param_7 + 1);
          param_7 = param_7 + 1;
          pcVar9 = param_7;
        } while ((*pbVar13 & 0xc0) == 0x80);
      }
      else {
        pcVar9 = param_7 + 1;
        if (*param_7 == '\0') goto LAB_002b53fb;
      }
      iVar8 = iVar8 + 1;
      param_7 = pcVar9;
    } while( true );
  }
  fVar14 = tanf((float)local_98._0_4_ * DAT_005de504);
  fVar20 = 0.0;
  fVar18 = _DAT_005dd050;
  fVar19 = _UNK_005dd058;
  fVar15 = _UNK_005dd05c;
LAB_002b5510:
  fVar21 = DAT_005d9038;
LAB_002b5519:
  fVar1 = *param_4;
  fVar2 = param_4[1];
  fVar3 = param_4[3];
  fVar4 = param_4[4];
  *param_4 = fVar1 * fVar18 + fVar2 * fVar15;
  param_4[1] = fVar1 * fVar14 + fVar2 * fVar21;
  param_4[2] = fVar1 * fVar19 + fVar2 * fVar20 + param_4[2];
  param_4[3] = fVar18 * fVar3 + fVar15 * fVar4;
  param_4[4] = fVar14 * fVar3 + fVar21 * fVar4;
  param_4[5] = fVar19 * fVar3 + fVar20 * fVar4 + param_4[5];
                    /* try { // try from 002b55dd to 002b55ea has its CatchHandler @ 002b5919 */
  juce::String::fromFirstOccurrenceOf(&local_a0,param_5,&DAT_00657c65,param_7,param_8,param_9);
                    /* try { // try from 002b55eb to 002b55f5 has its CatchHandler @ 002b590f */
  juce::String::trimStart(&local_c0,&local_a0);
  lVar11 = *param_5;
  *param_5 = local_c0;
  piVar12 = (int *)(lVar11 + -0x10);
  local_c0 = lVar11;
  if (piVar12 != &emptyString) {
    LOCK();
    iVar8 = *piVar12;
    *piVar12 = *piVar12 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      operator_delete__(piVar12);
    }
  }
  piVar12 = (int *)(local_a0 + -0x10);
  if (piVar12 != &emptyString) {
    LOCK();
    iVar8 = *piVar12;
    *piVar12 = *piVar12 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      operator_delete__(piVar12);
      goto joined_r0x002b5647;
    }
  }
joined_r0x002b5647:
  if (0 < (int)uStack_b0._4_4_) {
    lVar11 = 0;
    do {
      piVar12 = (int *)(local_b8[lVar11] + -0x10);
      if (piVar12 != &emptyString) {
        LOCK();
        iVar8 = *piVar12;
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (iVar8 == 0) {
          operator_delete__(piVar12);
        }
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)uStack_b0._4_4_);
  }
  free(local_b8);
  if (*(char *)*param_5 == '\0') {
    return;
  }
  goto LAB_002b4e2c;
LAB_002b53fb:
  uVar7 = CharacterFunctions::compareIgnoreCaseUpTo<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                    ((byte *)*param_5,&DAT_005e3a7a,iVar8);
  if (uVar7 == 0) {
    fVar15 = tanf((float)local_98._0_4_ * DAT_005de504);
    fVar20 = 0.0;
    fVar18 = _DAT_005dd050;
    fVar14 = _UNK_005dd054;
    fVar19 = 0.0;
  }
  else {
    fVar20 = 0.0;
    fVar18 = DAT_005d9038;
    fVar14 = 0.0;
    fVar19 = 0.0;
    fVar15 = 0.0;
  }
  goto LAB_002b5510;
}


