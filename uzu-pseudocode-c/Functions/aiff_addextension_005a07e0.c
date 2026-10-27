// Function : aiff_addextension
// Namespace: 
// Entry    : 005a07e0
// Prototype: bool aiff_addextension(char * param_1, size_t param_2)
// Body     : 005a07e0 - 005a082b


bool aiff_addextension(char *param_1,size_t param_2)

{
  size_t sVar1;
  bool bVar2;
  
  sVar1 = strnlen(param_1,param_2);
  bVar2 = (ulong)((long)((sVar1 << 0x20) + 0x400000000) >> 0x20) < param_2;
  if (bVar2) {
    builtin_strncpy(param_1 + ((long)(sVar1 << 0x20) >> 0x20),".aif",5);
  }
  return bVar2;
}


