// Function : writeFloatArray
// Namespace: Steinberg:FStreamer
// Entry    : 00179550
// Prototype: ulong writeFloatArray(FStreamer * this, long param_1, uint param_2)
// Body     : 00179550 - 001795eb


/* Steinberg::FStreamer::writeFloatArray(float const*, int) */

ulong __thiscall Steinberg::FStreamer::writeFloatArray(FStreamer *this,long param_1,uint param_2)

{
  uint uVar1;
  undefined8 in_RAX;
  long lVar2;
  undefined8 unaff_RBP;
  undefined7 uVar3;
  ulong uVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uStack_38;
  
  if ((int)param_2 < 1) {
    bVar5 = false;
    uVar3 = 0;
  }
  else {
    uVar3 = (undefined7)((ulong)unaff_RBP >> 8);
    bVar5 = true;
    uVar4 = 1;
    uStack_38 = in_RAX;
    do {
      uVar1 = *(uint *)(param_1 + -4 + uVar4 * 4);
      if (*(short *)(this + 8) != 0) {
        uVar1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
      }
      uStack_38 = CONCAT44(uVar1,(undefined4)uStack_38);
      lVar2 = (**(code **)(*(long *)this + 0x18))(this,(long)&uStack_38 + 4,4);
      if (lVar2 != 4) break;
      bVar5 = uVar4 < param_2;
      bVar6 = uVar4 != param_2;
      uVar4 = uVar4 + 1;
    } while (bVar6);
  }
  return CONCAT71(uVar3,~bVar5) & 0xffffff01;
}


