// Function : png_set_sCAL_s
// Namespace: juce:pnglibNamespace
// Entry    : 003a5ef0
// Prototype: undefined png_set_sCAL_s(pnglibNamespace * param_1, long param_2, uint param_3, char * param_4, char * param_5)
// Body     : 003a5ef0 - 003a6118


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_set_sCAL_s(juce::pnglibNamespace::png_struct_def const*,
   juce::pnglibNamespace::png_info_def*, int, char const*, char const*) */

void __cdecl
juce::pnglibNamespace::png_set_sCAL_s
          (pnglibNamespace *param_1,long param_2,uint param_3,char *param_4,char *param_5)

{
  uint uVar1;
  size_t sVar2;
  size_t sVar3;
  void *pvVar4;
  pnglibNamespace *ppVar5;
  uint local_4c;
  ulong local_48;
  pnglibNamespace *local_40;
  ulong local_38;
  
  if ((param_1 == (pnglibNamespace *)0x0) || (param_2 == 0)) {
    return;
  }
  if ((((0xfffffffd < param_3 - 3) && (param_4 != (char *)0x0)) &&
      (sVar2 = strlen(param_4), sVar2 != 0)) && (*param_4 != '-')) {
    local_4c = 0;
    local_48 = 0;
    uVar1 = png_check_fp_number((long)param_4,sVar2,&local_4c,&local_48);
    if (((uVar1 != 0) && ((local_48 == sVar2 || (param_4[local_48] == '\0')))) && (local_4c != 0)) {
      local_40 = param_1;
      local_38 = (ulong)param_3;
      if (((param_5 != (char *)0x0) && (sVar3 = strlen(param_5), sVar3 != 0)) && (*param_5 != '-'))
      {
        local_4c = 0;
        local_48 = 0;
        uVar1 = png_check_fp_number((long)param_5,sVar3,&local_4c,&local_48);
        if ((uVar1 != 0) &&
           (((local_48 == sVar3 || (param_5[local_48] == '\0')) && (local_4c != 0)))) {
          *(char *)(param_2 + 0x13c) = (char)local_38;
          sVar2 = sVar2 + 1;
          if ((sVar2 == 0) || (pvVar4 = malloc(sVar2), pvVar4 == (void *)0x0)) {
            ppVar5 = local_40;
            png_warning((long)local_40,"Out of memory");
          }
          else {
            *(void **)(param_2 + 0x140) = pvVar4;
            memcpy(pvVar4,param_4,sVar2);
            sVar3 = sVar3 + 1;
            if ((sVar3 != 0) && (pvVar4 = malloc(sVar3), pvVar4 != (void *)0x0)) {
              *(void **)(param_2 + 0x148) = pvVar4;
              memcpy(pvVar4,param_5,sVar3);
              *(byte *)(param_2 + 9) = *(byte *)(param_2 + 9) | 0x40;
              *(byte *)(param_2 + 0x11d) = *(byte *)(param_2 + 0x11d) | 1;
              return;
            }
            ppVar5 = local_40;
            png_warning((long)local_40,"Out of memory");
            *(undefined8 *)(param_2 + 0x148) = 0;
            if (*(void **)(param_2 + 0x140) != (void *)0x0) {
              free(*(void **)(param_2 + 0x140));
            }
          }
          *(undefined8 *)(param_2 + 0x140) = 0;
          png_warning((long)ppVar5,"Memory allocation failed while processing sCAL");
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      png_err(local_40);
    }
  }
                    /* WARNING: Subroutine does not return */
  png_err(param_1);
}


