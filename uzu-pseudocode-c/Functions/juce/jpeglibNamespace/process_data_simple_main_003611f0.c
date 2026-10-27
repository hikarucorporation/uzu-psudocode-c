// Function : process_data_simple_main
// Namespace: juce:jpeglibNamespace
// Entry    : 003611f0
// Prototype: undefined process_data_simple_main(long param_1, undefined8 param_2, int * param_3, undefined4 param_4)
// Body     : 003611f0 - 003612ca


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::process_data_simple_main(juce::jpeglibNamespace::jpeg_compress_struct*,
   unsigned char**, unsigned int*, unsigned int) */

void __cdecl
juce::jpeglibNamespace::process_data_simple_main
          (long param_1,undefined8 param_2,int *param_3,undefined4 param_4)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  
  lVar1 = *(long *)(param_1 + 0x1e8);
  if (*(uint *)(lVar1 + 0x10) < *(uint *)(param_1 + 0x160)) {
    uVar3 = *(uint *)(lVar1 + 0x14);
    do {
      uVar4 = *(uint *)(param_1 + 0x15c);
      if (uVar3 < uVar4) {
        (**(code **)(*(long *)(param_1 + 0x1f0) + 8))
                  (param_1,param_2,param_3,param_4,lVar1 + 0x20,(uint *)(lVar1 + 0x14),uVar4);
        uVar3 = *(uint *)(lVar1 + 0x14);
        uVar4 = *(uint *)(param_1 + 0x15c);
      }
      if (uVar3 != uVar4) {
        return;
      }
      cVar2 = (**(code **)(*(long *)(param_1 + 0x1f8) + 8))(param_1,lVar1 + 0x20);
      if (cVar2 == '\0') {
        if (*(char *)(lVar1 + 0x18) == '\0') {
          *param_3 = *param_3 + -1;
          *(undefined1 *)(lVar1 + 0x18) = 1;
          return;
        }
        return;
      }
      if (*(char *)(lVar1 + 0x18) != '\0') {
        *param_3 = *param_3 + 1;
        *(undefined1 *)(lVar1 + 0x18) = 0;
      }
      *(undefined4 *)(lVar1 + 0x14) = 0;
      uVar4 = *(int *)(lVar1 + 0x10) + 1;
      *(uint *)(lVar1 + 0x10) = uVar4;
      uVar3 = 0;
    } while (uVar4 < *(uint *)(param_1 + 0x160));
  }
  return;
}


