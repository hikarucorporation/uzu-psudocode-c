// Function : RangeParameter
// Namespace: Steinberg:Vst:RangeParameter
// Entry    : 001950c0
// Prototype: undefined RangeParameter(double param_1, double param_2, double param_3, RangeParameter * this, long param_5, undefined4 param_6, long param_7, int param_8, undefined4 param_9, undefined4 param_10, long param_11)
// Body     : 001950c0 - 0019525d


/* Steinberg::Vst::RangeParameter::RangeParameter(char16_t const*, unsigned int, char16_t const*,
   double, double, double, int, int, int, char16_t const*) */

void __thiscall
Steinberg::Vst::RangeParameter::RangeParameter
          (double param_1,double param_2,double param_3,RangeParameter *this,long param_5,
          undefined4 param_6,long param_7,int param_8,undefined4 param_9,undefined4 param_10,
          long param_11)

{
  ulong uVar1;
  bool bVar2;
  double dVar3;
  
  *(undefined4 *)(this + 8) = 1;
  memset(this + 0x10,0,800);
  *(undefined4 *)(this + 0x330) = 4;
  *(undefined ***)this = &PTR_queryInterface_00704070;
  *(double *)(this + 0x338) = param_1;
  *(double *)(this + 0x340) = param_2;
  uVar1 = 0;
  do {
    *(undefined2 *)(this + uVar1 * 2 + 0x14) = *(undefined2 *)(param_5 + uVar1 * 2);
    if (*(short *)(param_5 + uVar1 * 2) == 0) break;
    bVar2 = uVar1 < 0x7f;
    uVar1 = uVar1 + 1;
  } while (bVar2);
  *(undefined2 *)(this + 0x112) = 0;
  if (param_7 != 0) {
    uVar1 = 0;
    do {
      *(undefined2 *)(this + uVar1 * 2 + 0x214) = *(undefined2 *)(param_7 + uVar1 * 2);
      if (*(short *)(param_7 + uVar1 * 2) == 0) break;
      bVar2 = uVar1 < 0x7f;
      uVar1 = uVar1 + 1;
    } while (bVar2);
    *(undefined2 *)(this + 0x312) = 0;
  }
  if (param_11 != 0) {
    uVar1 = 0;
    do {
      *(undefined2 *)(this + uVar1 * 2 + 0x114) = *(undefined2 *)(param_11 + uVar1 * 2);
      if (*(short *)(param_11 + uVar1 * 2) == 0) break;
      bVar2 = uVar1 < 0x7f;
      uVar1 = uVar1 + 1;
    } while (bVar2);
    *(undefined2 *)(this + 0x212) = 0;
  }
  *(int *)(this + 0x314) = param_8;
  if (param_8 < 2) {
    dVar3 = param_2 - param_1;
  }
  else {
    dVar3 = (double)param_8;
  }
  dVar3 = (param_3 - param_1) / dVar3;
  *(double *)(this + 0x328) = dVar3;
  *(double *)(this + 0x318) = dVar3;
  *(undefined4 *)(this + 0x324) = param_9;
  *(undefined4 *)(this + 0x10) = param_6;
  *(undefined4 *)(this + 800) = param_10;
  return;
}


