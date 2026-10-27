// Function : addParameter
// Namespace: Steinberg:Vst:ParameterContainer
// Entry    : 001964e0
// Prototype: undefined8 addParameter(undefined8 param_1, ParameterContainer * this, long param_3, long param_4, undefined4 param_5, undefined4 param_6, int param_7, undefined4 param_8, long param_9)
// Body     : 001964e0 - 00196636


/* Steinberg::Vst::ParameterContainer::addParameter(char16_t const*, char16_t const*, int, double,
   int, int, int, char16_t const*) */

undefined8 __thiscall
Steinberg::Vst::ParameterContainer::addParameter
          (undefined8 param_1,ParameterContainer *this,long param_3,long param_4,undefined4 param_5,
          undefined4 param_6,int param_7,undefined4 param_8,long param_9)

{
  short sVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  bool bVar5;
  int local_348;
  short asStack_344 [127];
  undefined2 local_246;
  short asStack_244 [127];
  undefined2 local_146;
  short asStack_144 [127];
  undefined2 local_46;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  
  if (param_3 == 0) {
    uVar4 = 0;
  }
  else {
    memset(&local_348,0,0x308);
    uVar3 = 0;
    do {
      sVar1 = *(short *)(param_3 + uVar3 * 2);
      asStack_344[uVar3] = sVar1;
      if (sVar1 == 0) break;
      bVar5 = uVar3 < 0x7f;
      uVar3 = uVar3 + 1;
    } while (bVar5);
    local_246 = 0;
    if (param_4 != 0) {
      uVar3 = 0;
      do {
        sVar1 = *(short *)(param_4 + uVar3 * 2);
        asStack_144[uVar3] = sVar1;
        if (sVar1 == 0) break;
        bVar5 = uVar3 < 0x7f;
        uVar3 = uVar3 + 1;
      } while (bVar5);
      local_46 = 0;
    }
    if (param_9 != 0) {
      uVar3 = 0;
      do {
        sVar1 = *(short *)(param_9 + uVar3 * 2);
        asStack_244[uVar3] = sVar1;
        if (sVar1 == 0) break;
        bVar5 = uVar3 < 0x7f;
        uVar3 = uVar3 + 1;
      } while (bVar5);
      local_146 = 0;
    }
    if (param_7 < 0) {
      plVar2 = *(long **)this;
      if (plVar2 == (long *)0x0) {
        param_7 = 0;
      }
      else {
        param_7 = (int)((ulong)(plVar2[1] - *plVar2) >> 3);
      }
    }
    local_38 = param_8;
    local_348 = param_7;
    local_44 = param_5;
    local_40 = param_1;
    local_34 = param_6;
    uVar4 = addParameter(this,&local_348);
  }
  return uVar4;
}


