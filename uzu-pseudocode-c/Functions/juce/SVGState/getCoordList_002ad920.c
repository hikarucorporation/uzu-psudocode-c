// Function : getCoordList
// Namespace: juce:SVGState
// Entry    : 002ad920
// Prototype: undefined getCoordList(undefined8 param_1_00, undefined8 param_2, undefined8 param_3, undefined8 * param_4, long param_5, long param_6, int param_7)
// Body     : 002ad920 - 002adc7f


/* WARNING: Unknown calling convention: __cdecl */
/* juce::SVGState::getCoordList(juce::XmlElement const&, juce::SVGState::Axis) const */

void __cdecl
juce::SVGState::getCoordList
          (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
          long param_5,long param_6,int param_7)

{
  int iVar1;
  ulong uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  void *__ptr;
  undefined8 uVar8;
  byte *pbVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  byte *pbVar15;
  long *plVar16;
  int *piVar17;
  uint uVar18;
  undefined1 *local_58;
  int local_4c;
  byte *local_48;
  long local_40;
  long local_38;
  
  pbVar15 = &DAT_006558e1;
  if (param_7 == 0) {
    pbVar15 = &DAT_005db3a7;
  }
  bVar3 = *pbVar15;
  local_4c = param_7;
  local_40 = param_5;
  if (bVar3 == 0) {
    pbVar9 = &DAT_0061ac58;
    plVar16 = *(long **)(param_6 + 0x10);
  }
  else {
    lVar12 = 0;
    pbVar9 = pbVar15;
    do {
      pbVar9 = pbVar9 + 1;
      lVar11 = lVar12 + (ulong)(bVar3 >> 7);
      lVar12 = lVar11 + 1;
      bVar3 = *pbVar9;
    } while (bVar3 != 0);
    uVar13 = lVar11 + 5U & 0xfffffffffffffffc;
    puVar6 = operator_new__(uVar13 + 0x17);
    LOCK();
    *puVar6 = 0;
    UNLOCK();
    *(ulong *)(puVar6 + 2) = uVar13;
    pbVar9 = (byte *)(puVar6 + 4);
    bVar3 = *pbVar15;
    pbVar7 = pbVar9;
    if (bVar3 != 0) {
      do {
        pbVar15 = pbVar15 + 1;
        if ((char)bVar3 < '\0') {
          *pbVar7 = bVar3 >> 6 | 0xc0;
          pbVar7[1] = bVar3 & 0x3f | 0x80;
          pbVar7 = pbVar7 + 1;
        }
        else {
          *pbVar7 = bVar3;
        }
        pbVar7 = pbVar7 + 1;
        bVar3 = *pbVar15;
      } while (bVar3 != 0);
    }
    *pbVar7 = 0;
    plVar16 = *(long **)(param_6 + 0x10);
  }
  if (plVar16 != (long *)0x0) {
    plVar14 = plVar16;
    do {
      uVar4 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                        ((byte *)plVar14[1],pbVar9);
      if (uVar4 == 0) {
        local_48 = pbVar9;
        goto LAB_002ada60;
      }
      plVar14 = (long *)*plVar14;
    } while (plVar14 != (long *)0x0);
  }
  *param_4 = 0;
  param_4[1] = 0;
  pbVar9 = pbVar9 + -0x10;
  if (pbVar9 == (byte *)&emptyString) {
    return;
  }
  goto LAB_002adc5b;
  while (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0) {
LAB_002ada60:
    uVar4 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                      ((byte *)plVar16[1],pbVar9);
    if (uVar4 == 0) {
      plVar16 = plVar16 + 2;
      goto LAB_002adad7;
    }
  }
  plVar16 = (long *)&getEmptyStringRef()::empty;
  if ((getEmptyStringRef()::empty == '\0') &&
     (iVar5 = __cxa_guard_acquire(&getEmptyStringRef()::empty), iVar5 != 0)) {
    getEmptyStringRef()::empty = &DAT_0061ac58;
    plVar16 = (long *)&getEmptyStringRef()::empty;
    __cxa_atexit(juce::String::~String,&getEmptyStringRef()::empty,&__dso_handle);
    __cxa_guard_release(&getEmptyStringRef()::empty);
  }
LAB_002adad7:
  local_38 = *plVar16;
  *param_4 = 0;
  param_4[1] = 0;
  iVar5 = 9;
  uVar4 = 1;
  __ptr = (void *)0x0;
  uVar13 = 0;
  lVar12 = 0;
  while( true ) {
    local_58 = &DAT_0061ac58;
                    /* try { // try from 002adb4e to 002adb61 has its CatchHandler @ 002adc80 */
    uVar8 = parseNextNumber(&local_38,(long *)&local_58,'\x01');
    if ((char)uVar8 == '\0') break;
    uVar2 = getCoordLength(*(float *)(local_40 + 0x20 + (ulong)(local_4c != 0) * 4),param_2,param_3,
                           (String *)&local_58);
    piVar17 = (int *)(local_58 + -0x10);
    uVar18 = (uint)uVar13;
    if (piVar17 != &emptyString) {
      LOCK();
      iVar1 = *piVar17;
      *piVar17 = *piVar17 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar17);
      }
    }
    if ((int)uVar18 <= lVar12) {
      uVar10 = (uVar4 >> 1) + iVar5 & 0xfffffff8;
      uVar13 = (ulong)uVar10;
      if (uVar18 != uVar10) {
        if ((int)uVar10 < 1) {
          free(__ptr);
          *param_4 = 0;
          __ptr = (void *)0x0;
        }
        else {
          __ptr = realloc(__ptr,uVar13 << 2);
          *param_4 = __ptr;
        }
      }
      *(uint *)(param_4 + 1) = uVar10;
    }
    *(int *)((long)param_4 + 0xc) = (int)(lVar12 + 1);
    *(int *)((long)__ptr + lVar12 * 4) = (int)uVar2;
    iVar5 = iVar5 + 1;
    uVar4 = uVar4 + 1;
    lVar12 = lVar12 + 1;
  }
  piVar17 = (int *)(local_58 + -0x10);
  if (piVar17 != &emptyString) {
    LOCK();
    iVar5 = *piVar17;
    *piVar17 = *piVar17 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      operator_delete__(piVar17);
    }
  }
  pbVar9 = local_48 + -0x10;
  if (pbVar9 == (byte *)&emptyString) {
    return;
  }
LAB_002adc5b:
  LOCK();
  iVar5 = *(int *)pbVar9;
  *(int *)pbVar9 = *(int *)pbVar9 + -1;
  UNLOCK();
  if (iVar5 == 0) {
    operator_delete__(pbVar9);
  }
  return;
}


