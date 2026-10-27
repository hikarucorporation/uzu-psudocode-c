// Function : vprintf
// Namespace: Steinberg:String
// Entry    : 00182420
// Prototype: String * vprintf(String * param_1, long param_2, __gnuc_va_list param_3)
// Body     : 00182420 - 001824a7


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::String::vprintf(char16_t const*, __va_list_tag*) */

String * __cdecl Steinberg::String::vprintf(String *param_1,long param_2,__gnuc_va_list param_3)

{
  short *psVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  short local_2018 [4100];
  
  vsnwprintf(local_2018,param_2,param_3);
  if ((short *)*(undefined1 **)(param_1 + 8) != local_2018) {
    uVar4 = 0;
    do {
      psVar1 = (short *)((long)local_2018 + uVar4);
      uVar4 = uVar4 + 2;
    } while (*psVar1 != 0);
    uVar3 = (int)(uVar4 >> 1) - 1;
    uVar2 = resize(param_1,uVar3,1,'\0');
    if ((char)uVar2 != '\0') {
      if ((0 < (int)uVar3) && (*(void **)(param_1 + 8) != (void *)0x0)) {
        memcpy(*(void **)(param_1 + 8),local_2018,(ulong)uVar3 * 2);
      }
      *(uint *)(param_1 + 0x10) =
           (*(uint *)(param_1 + 0x10) & 0x80000000) + (uVar3 & 0x3fffffff) + 0x40000000;
    }
  }
  return param_1;
}


