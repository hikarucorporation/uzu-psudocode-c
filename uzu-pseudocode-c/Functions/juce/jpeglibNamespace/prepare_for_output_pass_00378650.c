// Function : prepare_for_output_pass
// Namespace: juce:jpeglibNamespace
// Entry    : 00378650
// Prototype: undefined prepare_for_output_pass(long * param_1)
// Body     : 00378650 - 003787b9


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::prepare_for_output_pass(juce::jpeglibNamespace::jpeg_decompress_struct*)
    */

void __cdecl juce::jpeglibNamespace::prepare_for_output_pass(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined4 uVar5;
  
  lVar1 = param_1[0x44];
  if (*(char *)(lVar1 + 0x10) == '\0') {
    if ((*(char *)((long)param_1 + 0x62) != '\0') && (param_1[0x12] == 0)) {
      if (((char)param_1[0xd] == '\0') || (*(char *)((long)param_1 + 0x72) == '\0')) {
        if ((char)param_1[0xe] == '\0') {
          puVar3 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar3 + 5) = 0x2f;
          (*(code *)*puVar3)(param_1);
        }
        else {
          param_1[0x4e] = *(long *)(lVar1 + 0x20);
        }
      }
      else {
        param_1[0x4e] = *(long *)(lVar1 + 0x28);
        *(undefined1 *)(lVar1 + 0x10) = 1;
      }
    }
    (**(code **)param_1[0x4b])(param_1);
    (**(code **)(param_1[0x46] + 0x10))(param_1);
    if (*(char *)((long)param_1 + 0x59) != '\0') goto LAB_003786d1;
    if (*(char *)(lVar1 + 0x1c) == '\0') {
      (**(code **)param_1[0x4d])(param_1);
    }
    (**(code **)param_1[0x4c])(param_1);
    if (*(char *)((long)param_1 + 0x62) != '\0') {
      (**(code **)param_1[0x4e])(param_1,*(undefined1 *)(lVar1 + 0x10));
    }
    (**(code **)param_1[0x47])(param_1,(*(char *)(lVar1 + 0x10) != '\0') * '\x03');
    uVar5 = 0;
  }
  else {
    *(undefined1 *)(lVar1 + 0x10) = 0;
    (**(code **)param_1[0x4e])(param_1,0);
    uVar5 = 2;
    (**(code **)param_1[0x47])(param_1,2);
  }
  (**(code **)param_1[0x45])(param_1,uVar5);
LAB_003786d1:
  lVar2 = param_1[2];
  if (lVar2 != 0) {
    iVar4 = *(int *)(lVar1 + 0x18);
    *(int *)(lVar2 + 0x18) = iVar4;
    iVar4 = (iVar4 - (uint)(*(char *)(lVar1 + 0x10) == '\0')) + 2;
    *(int *)(lVar2 + 0x1c) = iVar4;
    if (((char)param_1[0xb] != '\0') && (*(char *)(param_1[0x48] + 0x21) == '\0')) {
      *(uint *)(lVar2 + 0x1c) = (iVar4 - (uint)(*(char *)((long)param_1 + 0x72) == '\0')) + 2;
      return;
    }
  }
  return;
}


