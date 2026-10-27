// Function : readDouble
// Namespace: Steinberg:FStreamer
// Entry    : 001796d0
// Prototype: bool readDouble(FStreamer * this, undefined8 * param_1)
// Body     : 001796d0 - 00179731


/* Steinberg::FStreamer::readDouble(double&) */

bool __thiscall Steinberg::FStreamer::readDouble(FStreamer *this,undefined8 *param_1)

{
  ushort *puVar1;
  undefined1 uVar2;
  ushort uVar3;
  long lVar4;
  
  lVar4 = (**(code **)(*(long *)this + 0x10))(this,param_1,8);
  if (lVar4 == 8) {
    if (*(short *)(this + 8) != 0) {
      uVar2 = *(undefined1 *)param_1;
      *(undefined1 *)param_1 = *(undefined1 *)((long)param_1 + 7);
      *(undefined1 *)((long)param_1 + 7) = uVar2;
      uVar3 = *(ushort *)((long)param_1 + 1);
      *(ushort *)((long)param_1 + 1) =
           *(ushort *)((long)param_1 + 5) << 8 | *(ushort *)((long)param_1 + 5) >> 8;
      *(ushort *)((long)param_1 + 5) = uVar3 << 8 | uVar3 >> 8;
      puVar1 = (ushort *)((long)param_1 + 3);
      *puVar1 = *puVar1 << 8 | *puVar1 >> 8;
    }
  }
  else {
    *param_1 = 0;
  }
  return lVar4 == 8;
}


