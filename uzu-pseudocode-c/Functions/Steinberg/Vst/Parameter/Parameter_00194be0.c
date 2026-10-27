// Function : Parameter
// Namespace: Steinberg:Vst:Parameter
// Entry    : 00194be0
// Prototype: undefined Parameter(undefined8 param_1, Parameter * this, long param_3, undefined4 param_4, long param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, long param_9)
// Body     : 00194be0 - 00194d31


/* Steinberg::Vst::Parameter::Parameter(char16_t const*, unsigned int, char16_t const*, double, int,
   int, int, char16_t const*) */

void __thiscall
Steinberg::Vst::Parameter::Parameter
          (undefined8 param_1,Parameter *this,long param_3,undefined4 param_4,long param_5,
          undefined4 param_6,undefined4 param_7,undefined4 param_8,long param_9)

{
  ulong uVar1;
  bool bVar2;
  
  *(undefined4 *)(this + 8) = 1;
  *(undefined ***)this = &PTR_queryInterface_00703f90;
  memset(this + 0x10,0,800);
  *(undefined4 *)(this + 0x330) = 4;
  uVar1 = 0;
  do {
    *(undefined2 *)(this + uVar1 * 2 + 0x14) = *(undefined2 *)(param_3 + uVar1 * 2);
    if (*(short *)(param_3 + uVar1 * 2) == 0) break;
    bVar2 = uVar1 < 0x7f;
    uVar1 = uVar1 + 1;
  } while (bVar2);
  *(undefined2 *)(this + 0x112) = 0;
  if (param_5 != 0) {
    uVar1 = 0;
    do {
      *(undefined2 *)(this + uVar1 * 2 + 0x214) = *(undefined2 *)(param_5 + uVar1 * 2);
      if (*(short *)(param_5 + uVar1 * 2) == 0) break;
      bVar2 = uVar1 < 0x7f;
      uVar1 = uVar1 + 1;
    } while (bVar2);
    *(undefined2 *)(this + 0x312) = 0;
  }
  if (param_9 != 0) {
    uVar1 = 0;
    do {
      *(undefined2 *)(this + uVar1 * 2 + 0x114) = *(undefined2 *)(param_9 + uVar1 * 2);
      if (*(short *)(param_9 + uVar1 * 2) == 0) break;
      bVar2 = uVar1 < 0x7f;
      uVar1 = uVar1 + 1;
    } while (bVar2);
    *(undefined2 *)(this + 0x212) = 0;
  }
  *(undefined4 *)(this + 0x314) = param_6;
  *(undefined8 *)(this + 0x328) = param_1;
  *(undefined8 *)(this + 0x318) = param_1;
  *(undefined4 *)(this + 0x324) = param_7;
  *(undefined4 *)(this + 0x10) = param_4;
  *(undefined4 *)(this + 800) = param_8;
  return;
}


