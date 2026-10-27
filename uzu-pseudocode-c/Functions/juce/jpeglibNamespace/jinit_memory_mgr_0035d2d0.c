// Function : jinit_memory_mgr
// Namespace: juce:jpeglibNamespace
// Entry    : 0035d2d0
// Prototype: undefined jinit_memory_mgr(long * param_1)
// Body     : 0035d2d0 - 0035d418


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jinit_memory_mgr(juce::jpeglibNamespace::jpeg_common_struct*) */

void __cdecl juce::jpeglibNamespace::jinit_memory_mgr(long *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  char *pcVar4;
  byte local_19;
  long local_18;
  
  param_1[1] = 0;
  local_18 = 0;
  puVar3 = malloc(0xa8);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)(*param_1 + 0x28) = 0x38;
    (**(code **)*param_1)(param_1);
  }
  *puVar3 = alloc_small;
  puVar3[1] = alloc_large;
  puVar3[2] = alloc_sarray;
  puVar3[3] = alloc_barray;
  puVar3[4] = request_virt_sarray;
  puVar3[5] = request_virt_barray;
  puVar3[6] = realize_virt_arrays;
  puVar3[7] = access_virt_sarray;
  puVar3[8] = access_virt_barray;
  puVar3[9] = free_pool;
  puVar3[10] = self_destruct;
  uVar1 = _UNK_005dd748;
  puVar3[0xb] = _DAT_005dd740;
  puVar3[0xc] = uVar1;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0xa8;
  param_1[1] = (long)puVar3;
  pcVar4 = getenv("JPEGMEM");
  if (pcVar4 != (char *)0x0) {
    local_19 = 0x78;
    iVar2 = __isoc99_sscanf(pcVar4,&DAT_005e3d6d,&local_18,&local_19);
    if (0 < iVar2) {
      if ((local_19 & 0xdf) == 0x4d) {
        local_18 = local_18 * 1000;
      }
      puVar3[0xb] = local_18 * 1000;
    }
  }
  return;
}


