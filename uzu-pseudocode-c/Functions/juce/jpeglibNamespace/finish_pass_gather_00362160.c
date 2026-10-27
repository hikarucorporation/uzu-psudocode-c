// Function : finish_pass_gather
// Namespace: juce:jpeglibNamespace
// Entry    : 00362160
// Prototype: undefined finish_pass_gather(long * param_1)
// Body     : 00362160 - 003622c4


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::finish_pass_gather(juce::jpeglibNamespace::jpeg_compress_struct*) */

void __cdecl juce::jpeglibNamespace::finish_pass_gather(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 local_30;
  undefined4 local_2c;
  
  lVar2 = param_1[0x44];
  if (*(char *)((long)param_1 + 0x14c) != '\0') {
    emit_eobrun(lVar2);
  }
  local_2c = 0;
  local_30 = 0;
  if (0 < *(int *)((long)param_1 + 0x164)) {
    lVar4 = 0;
    do {
      lVar5 = param_1[lVar4 + 0x2d];
      if (((*(int *)((long)param_1 + 0x1bc) == 0) && (*(int *)((long)param_1 + 0x1c4) == 0)) &&
         (lVar6 = (long)*(int *)(lVar5 + 0x14), *(char *)((long)&local_2c + lVar6) == '\0')) {
        puVar3 = (undefined8 *)param_1[lVar6 + 0x14];
        if (puVar3 == (undefined8 *)0x0) {
          puVar3 = (undefined8 *)(**(code **)param_1[1])(param_1,0,0x112);
          *(undefined1 *)((long)puVar3 + 0x111) = 0;
          param_1[lVar6 + 0x14] = (long)puVar3;
        }
        jpeg_gen_optimal_table(param_1,puVar3,*(long *)(lVar2 + 0x80 + lVar6 * 8));
        *(undefined1 *)((long)&local_2c + lVar6) = 1;
        iVar1 = (int)param_1[0x38];
      }
      else {
        iVar1 = (int)param_1[0x38];
      }
      if ((iVar1 != 0) &&
         (lVar5 = (long)*(int *)(lVar5 + 0x18), *(char *)((long)&local_30 + lVar5) == '\0')) {
        puVar3 = (undefined8 *)param_1[lVar5 + 0x18];
        if (puVar3 == (undefined8 *)0x0) {
          puVar3 = (undefined8 *)(**(code **)param_1[1])(param_1,0,0x112);
          *(undefined1 *)((long)puVar3 + 0x111) = 0;
          param_1[lVar5 + 0x18] = (long)puVar3;
        }
        jpeg_gen_optimal_table(param_1,puVar3,*(long *)(lVar2 + 0xa0 + lVar5 * 8));
        *(undefined1 *)((long)&local_30 + lVar5) = 1;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)((long)param_1 + 0x164));
  }
  return;
}


