// Function : getPitchName
// Namespace: Steinberg:Vst:ProgramListWithPitchNames
// Entry    : 00194a20
// Prototype: undefined8 getPitchName(ProgramListWithPitchNames * this, uint param_1, short param_2, undefined8 * param_3)
// Body     : 00194a20 - 00194b41


/* Steinberg::Vst::ProgramListWithPitchNames::getPitchName(int, short, char16_t*) */

undefined8 __thiscall
Steinberg::Vst::ProgramListWithPitchNames::getPitchName
          (ProgramListWithPitchNames *this,uint param_1,short param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar6 = 1;
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)(this + 0x110))) {
    lVar5 = *(long *)(*(long *)(this + 0x150) + 0x10 + (ulong)param_1 * 0x30);
    if (lVar5 != 0) {
      lVar4 = (ulong)param_1 * 0x30 + *(long *)(this + 0x150) + 8;
      lVar1 = lVar4;
      do {
        plVar3 = (long *)(lVar5 + 0x18);
        if (param_2 <= *(short *)(lVar5 + 0x20)) {
          plVar3 = (long *)(lVar5 + 0x10);
          lVar1 = lVar5;
        }
        lVar5 = *plVar3;
      } while (lVar5 != 0);
      if (lVar1 != lVar4) {
        if (param_2 < *(short *)(lVar1 + 0x20)) {
          lVar1 = lVar4;
        }
        if (lVar1 != lVar4) {
          param_3[0x1e] = 0;
          param_3[0x1f] = 0;
          param_3[0x1c] = 0;
          param_3[0x1d] = 0;
          param_3[0x1a] = 0;
          param_3[0x1b] = 0;
          param_3[0x18] = 0;
          param_3[0x19] = 0;
          param_3[0x16] = 0;
          param_3[0x17] = 0;
          param_3[0x14] = 0;
          param_3[0x15] = 0;
          param_3[0x12] = 0;
          param_3[0x13] = 0;
          param_3[0x10] = 0;
          param_3[0x11] = 0;
          param_3[0xe] = 0;
          param_3[0xf] = 0;
          param_3[0xc] = 0;
          param_3[0xd] = 0;
          param_3[10] = 0;
          param_3[0xb] = 0;
          param_3[8] = 0;
          param_3[9] = 0;
          param_3[6] = 0;
          param_3[7] = 0;
          param_3[4] = 0;
          param_3[5] = 0;
          param_3[2] = 0;
          param_3[3] = 0;
          *param_3 = 0;
          param_3[1] = 0;
          uVar2 = 0x80;
          if (*(ulong *)(lVar1 + 0x30) < 0x80) {
            uVar2 = *(ulong *)(lVar1 + 0x30);
          }
          uVar6 = 0;
          if (uVar2 != 0) {
            if (uVar2 == 1) {
              *(undefined2 *)param_3 = **(undefined2 **)(lVar1 + 0x28);
            }
            else {
              memcpy(param_3,*(undefined2 **)(lVar1 + 0x28),uVar2 * 2);
            }
          }
        }
      }
    }
  }
  return uVar6;
}


