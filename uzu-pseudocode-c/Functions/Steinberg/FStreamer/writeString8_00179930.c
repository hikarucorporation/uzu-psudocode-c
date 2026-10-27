// Function : writeString8
// Namespace: Steinberg:FStreamer
// Entry    : 00179930
// Prototype: undefined writeString8(FStreamer * this, char * param_1, uint param_2)
// Body     : 00179930 - 0017995e


/* Steinberg::FStreamer::writeString8(char const*, bool) */

void __thiscall Steinberg::FStreamer::writeString8(FStreamer *this,char *param_1,uint param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
                    /* WARNING: Could not recover jumptable at 0x0017995d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x18))(this,param_1,param_2 + sVar1);
  return;
}


