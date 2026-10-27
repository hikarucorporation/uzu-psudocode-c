// Function : int_upsample
// Namespace: juce:jpeglibNamespace
// Entry    : 0038ad70
// Prototype: undefined int_upsample(long param_1, long param_2, undefined8 * param_3, ulong * param_4)
// Body     : 0038ad70 - 0038af74


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::int_upsample(juce::jpeglibNamespace::jpeg_decompress_struct*,
   juce::jpeglibNamespace::jpeg_component_info*, unsigned char**, unsigned char***) */

void __cdecl
juce::jpeglibNamespace::int_upsample(long param_1,long param_2,undefined8 *param_3,ulong *param_4)

{
  long *plVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  void *pvVar5;
  ulong __n;
  byte *pbVar6;
  long *plVar7;
  ulong __n_00;
  uint uVar8;
  void *pvVar9;
  ulong uVar10;
  long lVar11;
  long *local_60;
  
  if (0 < (long)*(int *)(param_1 + 0x184)) {
    bVar2 = *(byte *)(*(long *)(param_1 + 0x260) + 0xe8 + (long)*(int *)(param_2 + 4));
    __n_00 = (ulong)bVar2;
    if (__n_00 != 0) {
      bVar3 = *(byte *)(*(long *)(param_1 + 0x260) + 0xf2 + (long)*(int *)(param_2 + 4));
      uVar4 = (ulong)bVar3;
      local_60 = (long *)*param_4;
      plVar1 = local_60 + *(int *)(param_1 + 0x184);
      lVar11 = (ulong)(bVar2 - 1) + 1;
      if (bVar3 < 2) {
        do {
          if ((ulong)*(uint *)(param_1 + 0x74) != 0) {
            pvVar5 = (void *)*local_60;
            pvVar9 = (void *)((ulong)*(uint *)(param_1 + 0x74) + (long)pvVar5);
            pbVar6 = (byte *)*param_3;
            do {
              memset(pvVar5,(uint)*pbVar6,__n_00);
              pbVar6 = pbVar6 + 1;
              pvVar5 = (void *)((long)pvVar5 + lVar11);
            } while (pvVar5 < pvVar9);
          }
          param_3 = param_3 + 1;
          local_60 = local_60 + uVar4;
        } while (local_60 < plVar1);
      }
      else {
        do {
          if ((ulong)*(uint *)(param_1 + 0x74) == 0) {
            uVar8 = 0;
          }
          else {
            pvVar5 = (void *)*local_60;
            pvVar9 = (void *)((ulong)*(uint *)(param_1 + 0x74) + (long)pvVar5);
            pbVar6 = (byte *)*param_3;
            do {
              memset(pvVar5,(uint)*pbVar6,__n_00);
              pbVar6 = pbVar6 + 1;
              pvVar5 = (void *)((long)pvVar5 + lVar11);
            } while (pvVar5 < pvVar9);
            uVar8 = *(uint *)(param_1 + 0x74);
          }
          __n = (ulong)uVar8;
          plVar7 = local_60;
          uVar10 = uVar4;
          if ((bVar3 & 1) == 0) {
            plVar7 = local_60 + 1;
            memcpy((void *)local_60[1],(void *)*local_60,__n);
            uVar10 = (ulong)(bVar3 - 1);
          }
          if (bVar3 != 2) {
            do {
              memcpy((void *)plVar7[1],(void *)*plVar7,__n);
              uVar8 = (int)uVar10 - 2;
              uVar10 = (ulong)uVar8;
              memcpy((void *)plVar7[2],(void *)plVar7[1],__n);
              plVar7 = plVar7 + 2;
            } while (1 < uVar8);
          }
          param_3 = param_3 + 1;
          local_60 = local_60 + uVar4;
        } while (local_60 < plVar1);
      }
    }
  }
  return;
}


