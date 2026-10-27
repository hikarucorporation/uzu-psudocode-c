// Function : operator()
// Namespace: AudioPluginAudioProcessor:workerProcessAvailableTick__:__1
// Entry    : 0016e580
// Prototype: undefined operator()($_1 * this, uint param_1, char * param_2)
// Body     : 0016e580 - 0016e630


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AudioPluginAudioProcessor::workerProcessAvailableTick()::$_1::TEMPNAMEPLACEHOLDERVALUE(int, char
   const*) const */

void __thiscall
AudioPluginAudioProcessor::workerProcessAvailableTick()::$_1::operator()
          (__1 *this,uint param_1,char *param_2)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  uVar1 = (ulong)param_1;
  fVar2 = (float)(**(code **)(**(long **)(*(long *)(this + 0x238) + uVar1 * 8) + 0x10))();
  if (this[0x550] != (__1)0x0) {
    fVar4 = *(float *)(this + uVar1 * 4 + 0x528);
    fVar3 = (float)((uint)fVar2 & _DAT_005d91c0);
    if ((fVar3 == DAT_005d94c8) ||
       (fVar5 = (float)(_DAT_005d91c0 & (uint)fVar4), fVar5 == DAT_005d94c8)) {
      if ((fVar2 == fVar4) && (!NAN(fVar2) && !NAN(fVar4))) {
        return;
      }
    }
    else {
      fVar4 = (float)((uint)(fVar2 - fVar4) & _DAT_005d91c0);
      if (fVar4 <= DAT_005d94cc) {
        return;
      }
      if (fVar5 <= fVar3) {
        fVar5 = fVar3;
      }
      if (fVar4 <= fVar5 * DAT_005d94d0) {
        return;
      }
    }
  }
  libpd_float(param_2);
  *(float *)(this + uVar1 * 4 + 0x528) = fVar2;
  return;
}


