// Function : writeStr8
// Namespace: Steinberg:FStreamer
// Entry    : 0017a040
// Prototype: bool writeStr8(FStreamer * this, char * param_1)
// Body     : 0017a040 - 0017a0cb


/* Steinberg::FStreamer::writeStr8(char const*) */

bool __thiscall Steinberg::FStreamer::writeStr8(FStreamer *this,char *param_1)

{
  short sVar1;
  size_t sVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  bool bVar6;
  uint local_1c;
  
  if (param_1 == (char *)0x0) {
    uVar5 = 0;
    sVar1 = *(short *)(this + 8);
  }
  else {
    sVar2 = strlen(param_1);
    uVar5 = (int)sVar2 + 1;
    sVar1 = *(short *)(this + 8);
  }
  local_1c = uVar5;
  if (sVar1 != 0) {
    local_1c = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
  }
  lVar3 = (**(code **)(*(long *)this + 0x18))(this,&local_1c,4);
  if (lVar3 == 4) {
    if ((int)uVar5 < 1) {
      bVar6 = true;
    }
    else {
      uVar4 = (**(code **)(*(long *)this + 0x18))(this,param_1,(ulong)uVar5);
      bVar6 = uVar4 == uVar5;
    }
  }
  else {
    bVar6 = false;
  }
  return bVar6;
}


