// Function : parsePolygon
// Namespace: juce:SVGState
// Entry    : 002b5980
// Prototype: undefined parsePolygon(undefined8 param_1_00, undefined8 param_2_00, undefined8 param_3_00, SVGState * this, long * param_5, char param_6, Path * param_7)
// Body     : 002b5980 - 002b5bd7


/* juce::SVGState::parsePolygon(juce::SVGState::XmlPath const&, bool, juce::Path&) const */

void __thiscall
juce::SVGState::parsePolygon
          (undefined8 param_1_00,undefined8 param_2_00,undefined8 param_3_00,SVGState *this,
          long *param_5,char param_6,Path *param_7)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  void *pvVar5;
  long *plVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  float fVar8;
  undefined8 uVar7;
  float fVar9;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  if (param_5 != (long *)0x0) {
    do {
      uVar2 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                        ((byte *)param_5[1],(byte *)0x65d7f1);
      param_1_00 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
      if (uVar2 == 0) {
        plVar6 = param_5 + 2;
        goto LAB_002b5a26;
      }
      param_5 = (long *)*param_5;
    } while (param_5 != (long *)0x0);
  }
  plVar6 = (long *)&getEmptyStringRef()::empty;
  if (getEmptyStringRef()::empty == '\0') {
    iVar3 = __cxa_guard_acquire(&getEmptyStringRef()::empty);
    param_1_00 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
    if (iVar3 != 0) {
      getEmptyStringRef()::empty = &DAT_0061ac58;
      plVar6 = (long *)&getEmptyStringRef()::empty;
      __cxa_atexit(juce::String::~String,&getEmptyStringRef()::empty,&__dso_handle);
      param_1_00 = __cxa_guard_release(&getEmptyStringRef()::empty);
    }
  }
LAB_002b5a26:
  local_60 = *plVar6;
  piVar1 = (int *)(local_60 + -0x10);
  if (piVar1 != &emptyString) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_68 = 0;
                    /* try { // try from 002b5a4b to 002b5a5f has its CatchHandler @ 002b5bd8 */
  uVar4 = parseCoords(param_1_00,param_2_00,param_3_00,this,&local_60,(undefined4 *)&local_68,'\x01'
                     );
  if ((char)uVar4 == '\0') goto LAB_002b5ba0;
  fVar8 = (float)((ulong)local_68 >> 0x20);
  local_48 = local_68;
  uStack_40 = 0;
  fVar9 = fVar8;
  Path::startNewSubPath((float)local_68,fVar8,param_7);
  uVar7 = 0;
  local_58 = 0;
  uStack_50 = 0;
                    /* try { // try from 002b5aa0 to 002b5ab2 has its CatchHandler @ 002b5bda */
  while (uVar4 = parseCoords(uVar7,CONCAT44(fVar9,fVar8),param_3_00,this,&local_60,
                             (undefined4 *)&local_68,'\x01'), (char)uVar4 != '\0') {
    fVar8 = (float)((ulong)local_68 >> 0x20);
    local_58 = local_68;
    uStack_50 = 0;
    fVar9 = fVar8;
    uVar7 = Path::lineTo((float)local_68,fVar8,param_7);
  }
  if (param_6 != '\0') {
    if (((float)local_48 != (float)local_58) || (!(!NAN((float)local_48) && !NAN((float)local_58))))
    goto LAB_002b5ba0;
    if (local_48._4_4_ != local_58._4_4_) goto LAB_002b5ba0;
  }
  iVar3 = *(int *)(param_7 + 0xc);
  if (iVar3 != 0) {
    if (0 < iVar3) {
      fVar9 = *(float *)(*(long *)param_7 + (ulong)(iVar3 - 1) * 4);
      if ((fVar9 == DAT_005de41c) && (!NAN(fVar9) && !NAN(DAT_005de41c))) goto LAB_002b5ba0;
    }
    if ((int)*(uint *)(param_7 + 8) <= iVar3) {
      uVar2 = iVar3 + ((iVar3 - (iVar3 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
      if (*(uint *)(param_7 + 8) != uVar2) {
        if ((int)uVar2 < 1) {
          free(*(void **)param_7);
          *(undefined8 *)param_7 = 0;
        }
        else {
          pvVar5 = realloc(*(void **)param_7,(ulong)uVar2 << 2);
          *(void **)param_7 = pvVar5;
        }
      }
      *(uint *)(param_7 + 8) = uVar2;
      iVar3 = *(int *)(param_7 + 0xc);
    }
    *(int *)(param_7 + 0xc) = iVar3 + 1;
    *(undefined4 *)(*(long *)param_7 + (long)iVar3 * 4) = 0x47c35280;
  }
LAB_002b5ba0:
  if (piVar1 != &emptyString) {
    LOCK();
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      operator_delete__(piVar1);
      return;
    }
  }
  return;
}


