// Function : addTransform
// Namespace: juce:SVGState
// Entry    : 002a0380
// Prototype: undefined addTransform(undefined8 param_1_00, undefined8 param_2, undefined8 param_3, SVGState * this, long * param_5, undefined8 param_6, char * param_7, undefined8 param_8, undefined8 param_9)
// Body     : 002a0380 - 002a0530


/* juce::SVGState::addTransform(juce::SVGState::XmlPath const&) */

void __thiscall
juce::SVGState::addTransform
          (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,SVGState *this,long *param_5,
          undefined8 param_6,char *param_7,undefined8 param_8,undefined8 param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  long *plVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  long local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  
  if (param_5 != (long *)0x0) {
    do {
      uVar5 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                        ((byte *)param_5[1],(byte *)"transform");
      param_1_00 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
      param_6 = extraout_RDX;
      if (uVar5 == 0) {
        plVar8 = param_5 + 2;
        goto LAB_002a0416;
      }
      param_5 = (long *)*param_5;
    } while (param_5 != (long *)0x0);
  }
  plVar8 = (long *)&getEmptyStringRef()::empty;
  if (getEmptyStringRef()::empty == '\0') {
    iVar6 = __cxa_guard_acquire(&getEmptyStringRef()::empty);
    param_1_00 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
    param_6 = extraout_RDX_00;
    if (iVar6 != 0) {
      getEmptyStringRef()::empty = &DAT_0061ac58;
      plVar8 = (long *)&getEmptyStringRef()::empty;
      __cxa_atexit(juce::String::~String,&getEmptyStringRef()::empty,&__dso_handle);
      param_1_00 = __cxa_guard_release(&getEmptyStringRef()::empty);
      param_6 = extraout_RDX_01;
    }
  }
LAB_002a0416:
  local_38 = *plVar8;
  piVar7 = (int *)(local_38 + -0x10);
  if (piVar7 != &emptyString) {
    LOCK();
    *piVar7 = *piVar7 + 1;
    UNLOCK();
  }
                    /* try { // try from 002a0431 to 002a043d has its CatchHandler @ 002a0531 */
  parseTransform(param_1_00,param_2,param_3,&local_30,&local_38,param_6,param_7,param_8,param_9);
  fVar1 = *(float *)(this + 0x28);
  fVar2 = *(float *)(this + 0x2c);
  fVar3 = *(float *)(this + 0x34);
  fVar4 = *(float *)(this + 0x38);
  *(float *)(this + 0x28) = fVar1 * local_30 + fVar2 * local_24;
  *(float *)(this + 0x2c) = fVar1 * local_2c + fVar2 * local_20;
  *(float *)(this + 0x30) = fVar1 * local_28 + fVar2 * local_1c + *(float *)(this + 0x30);
  *(float *)(this + 0x34) = local_30 * fVar3 + local_24 * fVar4;
  *(float *)(this + 0x38) = local_2c * fVar3 + local_20 * fVar4;
  *(float *)(this + 0x3c) = fVar3 * local_28 + local_1c * fVar4 + *(float *)(this + 0x3c);
  piVar7 = (int *)(local_38 + -0x10);
  if (piVar7 != &emptyString) {
    LOCK();
    iVar6 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      operator_delete__(piVar7);
    }
  }
  return;
}


