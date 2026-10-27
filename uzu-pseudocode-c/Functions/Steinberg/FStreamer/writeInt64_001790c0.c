// Function : writeInt64
// Namespace: Steinberg:FStreamer
// Entry    : 001790c0
// Prototype: bool writeInt64(FStreamer * this, ulong param_1)
// Body     : 001790c0 - 001790e9


/* Steinberg::FStreamer::writeInt64(long) */

bool __thiscall Steinberg::FStreamer::writeInt64(FStreamer *this,ulong param_1)

{
  long lVar1;
  ulong local_8;
  
  local_8 = param_1;
  if (*(short *)(this + 8) != 0) {
    local_8 = param_1 >> 0x38 | (param_1 & 0xff000000000000) >> 0x28 |
              (param_1 & 0xff0000000000) >> 0x18 | (param_1 & 0xff00000000) >> 8 |
              (param_1 & 0xff000000) << 8 | (param_1 & 0xff0000) << 0x18 |
              (param_1 & 0xff00) << 0x28 | param_1 << 0x38;
  }
  lVar1 = (**(code **)(*(long *)this + 0x18))(this,&local_8,8);
  return lVar1 == 8;
}


