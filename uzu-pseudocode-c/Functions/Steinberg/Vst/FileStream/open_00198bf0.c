// Function : open
// Namespace: Steinberg:Vst:FileStream
// Entry    : 00198bf0
// Prototype: undefined8 * open(char * param_1, char * param_2)
// Body     : 00198bf0 - 00198c22


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::Vst::FileStream::open(char const*, char const*) */

undefined8 * __cdecl Steinberg::Vst::FileStream::open(char *param_1,char *param_2)

{
  FILE *pFVar1;
  undefined8 *puVar2;
  
  pFVar1 = fopen(param_1,param_2);
  if (pFVar1 == (FILE *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar2 = operator_new(0x18);
  *puVar2 = &PTR_queryInterface_00704288;
  puVar2[2] = pFVar1;
  *(undefined4 *)(puVar2 + 1) = 1;
  return puVar2;
}


