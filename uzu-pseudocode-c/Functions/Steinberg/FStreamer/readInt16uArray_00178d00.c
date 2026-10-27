// Function : readInt16uArray
// Namespace: Steinberg:FStreamer
// Entry    : 00178d00
// Prototype: ulong readInt16uArray(FStreamer * this, ushort * param_1, uint param_2)
// Body     : 00178d00 - 00178d94


/* Steinberg::FStreamer::readInt16uArray(unsigned short*, int) */

ulong __thiscall Steinberg::FStreamer::readInt16uArray(FStreamer *this,ushort *param_1,uint param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((int)param_2 < 1) {
    uVar2 = 0;
  }
  else {
    lVar1 = (**(code **)(*(long *)this + 0x10))(this,param_1,2);
    uVar2 = CONCAT71((int7)((ulong)lVar1 >> 8),1);
    if (lVar1 == 2) {
      uVar4 = (ulong)param_2;
      lVar1 = 0;
      uVar2 = 1;
      do {
        uVar3 = uVar2;
        if (*(short *)(this + 8) != 0) {
          *param_1 = *param_1 << 8 | *param_1 >> 8;
        }
        if (uVar4 == uVar3) {
          uVar2 = CONCAT71((int7)((ulong)lVar1 >> 8),uVar3 < uVar4);
          goto LAB_00178d88;
        }
        param_1 = param_1 + 1;
        lVar1 = (**(code **)(*(long *)this + 0x10))(this,param_1,2);
        uVar2 = uVar3 + 1;
      } while (lVar1 == 2);
      uVar2 = CONCAT71((int7)((ulong)lVar1 >> 8),uVar3 < uVar4);
    }
    *param_1 = 0;
  }
LAB_00178d88:
  return uVar2 ^ 1;
}


