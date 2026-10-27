// Function : next_addextension
// Namespace: 
// Entry    : 005a1200
// Prototype: bool next_addextension(char * param_1, size_t param_2)
// Body     : 005a1200 - 005a124b


bool next_addextension(char *param_1,size_t param_2)

{
  size_t sVar1;
  bool bVar2;
  
  sVar1 = strnlen(param_1,param_2);
  bVar2 = (ulong)((long)((sVar1 << 0x20) + 0x400000000) >> 0x20) < param_2;
  if (bVar2) {
    builtin_strncpy(param_1 + ((long)(sVar1 << 0x20) >> 0x20),".snd",5);
  }
  return bVar2;
}


