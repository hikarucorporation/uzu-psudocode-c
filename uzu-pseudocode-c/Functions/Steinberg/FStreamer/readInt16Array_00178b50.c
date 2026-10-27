// Function : readInt16Array
// Namespace: Steinberg:FStreamer
// Entry    : 00178b50
// Prototype: ulong readInt16Array(FStreamer * this, ushort * param_1, uint param_2)
// Body     : 00178b50 - 00178be4


/* Steinberg::FStreamer::readInt16Array(short*, int) */

ulong __thiscall Steinberg::FStreamer::readInt16Array(FStreamer *this,ushort *param_1,uint param_2)

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
          goto LAB_00178bd8;
        }
        param_1 = param_1 + 1;
        lVar1 = (**(code **)(*(long *)this + 0x10))(this,param_1,2);
        uVar2 = uVar3 + 1;
      } while (lVar1 == 2);
      uVar2 = CONCAT71((int7)((ulong)lVar1 >> 8),uVar3 < uVar4);
    }
    *param_1 = 0;
  }
LAB_00178bd8:
  return uVar2 ^ 1;
}


