// Function : getStr8Size
// Namespace: Steinberg:FStreamer
// Entry    : 0017a0d0
// Prototype: int getStr8Size(char * param_1)
// Body     : 0017a0d0 - 0017a0da


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::FStreamer::getStr8Size(char const*) */

int __cdecl Steinberg::FStreamer::getStr8Size(char *param_1)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  return (int)sVar1 + 5;
}


