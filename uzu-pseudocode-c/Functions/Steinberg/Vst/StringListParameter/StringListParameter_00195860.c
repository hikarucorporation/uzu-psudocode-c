// Function : StringListParameter
// Namespace: Steinberg:Vst:StringListParameter
// Entry    : 00195860
// Prototype: undefined StringListParameter(StringListParameter * this, long param_1, undefined4 param_2, long param_3, undefined4 param_4, undefined4 param_5, long param_6)
// Body     : 00195860 - 001959a5


/* Steinberg::Vst::StringListParameter::StringListParameter(char16_t const*, unsigned int, char16_t
   const*, int, int, char16_t const*) */

void __thiscall
Steinberg::Vst::StringListParameter::StringListParameter
          (StringListParameter *this,long param_1,undefined4 param_2,long param_3,undefined4 param_4
          ,undefined4 param_5,long param_6)

{
  ulong uVar1;
  bool bVar2;
  
  *(undefined4 *)(this + 8) = 1;
  memset(this + 0x10,0,800);
  *(undefined4 *)(this + 0x330) = 4;
  *(undefined ***)this = &PTR_queryInterface_00704170;
  *(undefined8 *)(this + 0x338) = 0;
  *(undefined8 *)(this + 0x340) = 0;
  *(undefined8 *)(this + 0x348) = 0;
  uVar1 = 0;
  do {
    *(undefined2 *)(this + uVar1 * 2 + 0x14) = *(undefined2 *)(param_1 + uVar1 * 2);
    if (*(short *)(param_1 + uVar1 * 2) == 0) break;
    bVar2 = uVar1 < 0x7f;
    uVar1 = uVar1 + 1;
  } while (bVar2);
  *(undefined2 *)(this + 0x112) = 0;
  if (param_3 != 0) {
    uVar1 = 0;
    do {
      *(undefined2 *)(this + uVar1 * 2 + 0x214) = *(undefined2 *)(param_3 + uVar1 * 2);
      if (*(short *)(param_3 + uVar1 * 2) == 0) break;
      bVar2 = uVar1 < 0x7f;
      uVar1 = uVar1 + 1;
    } while (bVar2);
    *(undefined2 *)(this + 0x312) = 0;
  }
  if (param_6 != 0) {
    uVar1 = 0;
    do {
      *(undefined2 *)(this + uVar1 * 2 + 0x114) = *(undefined2 *)(param_6 + uVar1 * 2);
      if (*(short *)(param_6 + uVar1 * 2) == 0) break;
      bVar2 = uVar1 < 0x7f;
      uVar1 = uVar1 + 1;
    } while (bVar2);
    *(undefined2 *)(this + 0x212) = 0;
  }
  *(undefined4 *)(this + 0x314) = 0xffffffff;
  *(undefined8 *)(this + 0x318) = 0;
  *(undefined4 *)(this + 0x324) = param_4;
  *(undefined4 *)(this + 0x10) = param_2;
  *(undefined4 *)(this + 800) = param_5;
  return;
}


