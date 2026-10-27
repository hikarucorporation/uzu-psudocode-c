// Function : readInt32uArray
// Namespace: Steinberg:FStreamer
// Entry    : 00179010
// Prototype: ulong readInt32uArray(FStreamer * this, undefined4 * param_1, uint param_2)
// Body     : 00179010 - 001790b2


/* Steinberg::FStreamer::readInt32uArray(unsigned int*, int) */

ulong __thiscall
Steinberg::FStreamer::readInt32uArray(FStreamer *this,undefined4 *param_1,uint param_2)

{
  ushort *puVar1;
  undefined1 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if ((int)param_2 < 1) {
    uVar4 = 0;
  }
  else {
    lVar3 = (**(code **)(*(long *)this + 0x10))(this,param_1,4);
    uVar4 = CONCAT71((int7)((ulong)lVar3 >> 8),1);
    if (lVar3 == 4) {
      uVar6 = (ulong)param_2;
      lVar3 = 0;
      uVar4 = 1;
      do {
        uVar5 = uVar4;
        if (*(short *)(this + 8) != 0) {
          uVar2 = *(undefined1 *)param_1;
          lVar3 = 0;
          *(undefined1 *)param_1 = *(undefined1 *)((long)param_1 + 3);
          *(undefined1 *)((long)param_1 + 3) = uVar2;
          puVar1 = (ushort *)((long)param_1 + 1);
          *puVar1 = *puVar1 << 8 | *puVar1 >> 8;
        }
        if (uVar6 == uVar5) {
          uVar4 = CONCAT71((int7)((ulong)lVar3 >> 8),uVar5 < uVar6);
          goto LAB_001790a6;
        }
        param_1 = param_1 + 1;
        lVar3 = (**(code **)(*(long *)this + 0x10))(this,param_1,4);
        uVar4 = uVar5 + 1;
      } while (lVar3 == 4);
      uVar4 = CONCAT71((int7)((ulong)lVar3 >> 8),uVar5 < uVar6);
    }
    *param_1 = 0;
  }
LAB_001790a6:
  return uVar4 ^ 1;
}


