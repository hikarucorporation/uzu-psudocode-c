// Function : readInt32u
// Namespace: Steinberg:FStreamer
// Entry    : 00178f20
// Prototype: bool readInt32u(FStreamer * this, undefined4 * param_1)
// Body     : 00178f20 - 00178f6d


/* Steinberg::FStreamer::readInt32u(unsigned int&) */

bool __thiscall Steinberg::FStreamer::readInt32u(FStreamer *this,undefined4 *param_1)

{
  ushort *puVar1;
  undefined1 uVar2;
  long lVar3;
  
  lVar3 = (**(code **)(*(long *)this + 0x10))(this,param_1,4);
  if (lVar3 == 4) {
    if (*(short *)(this + 8) != 0) {
      uVar2 = *(undefined1 *)param_1;
      *(undefined1 *)param_1 = *(undefined1 *)((long)param_1 + 3);
      *(undefined1 *)((long)param_1 + 3) = uVar2;
      puVar1 = (ushort *)((long)param_1 + 1);
      *puVar1 = *puVar1 << 8 | *puVar1 >> 8;
    }
  }
  else {
    *param_1 = 0;
  }
  return lVar3 == 4;
}


