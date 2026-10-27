// Function : write_unknown_chunks
// Namespace: juce:pnglibNamespace
// Entry    : 0039a8a0
// Prototype: undefined write_unknown_chunks(pnglibNamespace * param_1, long param_2, byte param_3)
// Body     : 0039a8a0 - 0039aa46


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::write_unknown_chunks(juce::pnglibNamespace::png_struct_def*,
   juce::pnglibNamespace::png_info_def const*, unsigned int) */

void __cdecl
juce::pnglibNamespace::write_unknown_chunks(pnglibNamespace *param_1,long param_2,byte param_3)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  ulong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  iVar2 = *(int *)(param_2 + 0x128);
  if (((long)iVar2 != 0) && (0 < iVar2)) {
    pbVar5 = *(byte **)(param_2 + 0x120);
    pbVar6 = pbVar5 + (long)iVar2 * 0x20;
    if (param_1 == (pnglibNamespace *)0x0) {
      do {
        if (((pbVar5[0x18] & param_3) != 0) &&
           ((((pbVar5[3] & 0x20) != 0 || (iRam00000000000002e0 == 3)) &&
            (*(long *)(pbVar5 + 0x10) == 0)))) {
          fprintf(*(FILE **)PTR_stderr_00715948,"libpng warning: %s",
                  "Writing zero-length unknown chunk");
          fputc(10,*(FILE **)PTR_stderr_00715948);
        }
        pbVar5 = pbVar5 + 0x20;
      } while (pbVar5 < pbVar6);
    }
    else {
      do {
        if ((pbVar5[0x18] & param_3) != 0) {
          if (*(int *)(param_1 + 0x2e4) != 0) {
            uVar4 = (ulong)(uint)(*(int *)(param_1 + 0x2e4) * 5) + *(ulong *)(param_1 + 0x2e8);
            do {
              if (*(int *)pbVar5 == *(int *)(uVar4 - 5)) {
                cVar1 = *(char *)(uVar4 - 1);
                if (cVar1 == '\x01') goto LAB_0039a927;
                bVar3 = pbVar5[3];
                if ((cVar1 == '\x03') || ((bVar3 & 0x20) != 0)) goto LAB_0039a8f0;
                if (cVar1 == '\0') goto LAB_0039a97c;
                goto LAB_0039a927;
              }
              uVar4 = uVar4 - 5;
            } while (*(ulong *)(param_1 + 0x2e8) < uVar4);
          }
          bVar3 = pbVar5[3];
          if ((bVar3 & 0x20) == 0) {
LAB_0039a97c:
            if (*(int *)(param_1 + 0x2e0) != 3) goto LAB_0039a927;
          }
LAB_0039a8f0:
          uVar4 = *(ulong *)(pbVar5 + 0x10);
          if (uVar4 == 0) {
            png_warning((long)param_1,"Writing zero-length unknown chunk");
            uVar4 = *(ulong *)(pbVar5 + 0x10);
            bVar3 = pbVar5[3];
          }
          png_write_complete_chunk
                    (param_1,(uint)bVar3 |
                             (uint)pbVar5[2] << 8 | (uint)pbVar5[1] << 0x10 | (uint)*pbVar5 << 0x18,
                     *(ulong **)(pbVar5 + 8),uVar4);
        }
LAB_0039a927:
        pbVar5 = pbVar5 + 0x20;
      } while (pbVar5 < pbVar6);
    }
  }
  return;
}


