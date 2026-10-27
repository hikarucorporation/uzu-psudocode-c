// Function : writeInt64uArray
// Namespace: Steinberg:FStreamer
// Entry    : 00179360
// Prototype: ulong writeInt64uArray(FStreamer * this, long param_1, uint param_2)
// Body     : 00179360 - 001793f2


/* Steinberg::FStreamer::writeInt64uArray(unsigned long const*, int) */

ulong __thiscall Steinberg::FStreamer::writeInt64uArray(FStreamer *this,long param_1,uint param_2)

{
  long lVar1;
  undefined8 unaff_RBP;
  undefined7 uVar2;
  ulong uVar3;
  bool bVar4;
  bool bVar5;
  ulong local_38;
  
  if ((int)param_2 < 1) {
    bVar4 = false;
    uVar2 = 0;
  }
  else {
    uVar2 = (undefined7)((ulong)unaff_RBP >> 8);
    bVar4 = true;
    uVar3 = 1;
    do {
      local_38 = *(ulong *)(param_1 + -8 + uVar3 * 8);
      if (*(short *)(this + 8) != 0) {
        local_38 = local_38 >> 0x38 | (local_38 & 0xff000000000000) >> 0x28 |
                   (local_38 & 0xff0000000000) >> 0x18 | (local_38 & 0xff00000000) >> 8 |
                   (local_38 & 0xff000000) << 8 | (local_38 & 0xff0000) << 0x18 |
                   (local_38 & 0xff00) << 0x28 | local_38 << 0x38;
      }
      lVar1 = (**(code **)(*(long *)this + 0x18))(this,&local_38,8);
      if (lVar1 != 8) break;
      bVar4 = uVar3 < param_2;
      bVar5 = uVar3 != param_2;
      uVar3 = uVar3 + 1;
    } while (bVar5);
  }
  return CONCAT71(uVar2,~bVar4) & 0xffffff01;
}


