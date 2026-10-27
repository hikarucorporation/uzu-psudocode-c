// Function : prepare_for_pass
// Namespace: juce:jpeglibNamespace
// Entry    : 00375750
// Prototype: undefined prepare_for_pass(long * param_1)
// Body     : 00375750 - 00375905


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::prepare_for_pass(juce::jpeglibNamespace::jpeg_compress_struct*) */

void __cdecl juce::jpeglibNamespace::prepare_for_pass(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar2 = param_1[0x3c];
  iVar1 = *(int *)(lVar2 + 0x20);
  if (iVar1 == 2) {
LAB_0037587f:
    if (*(char *)((long)param_1 + 0x122) == '\0') {
      select_scan_parameters(param_1);
      per_scan_setup(param_1);
    }
    (**(code **)param_1[0x44])(param_1,0);
    (**(code **)param_1[0x3f])(param_1,2);
    if (*(int *)(lVar2 + 0x2c) == 0) {
      (**(code **)(param_1[0x40] + 8))(param_1);
    }
    (**(code **)(param_1[0x40] + 0x10))(param_1);
  }
  else if (iVar1 == 1) {
    select_scan_parameters(param_1);
    per_scan_setup(param_1);
    if ((*(int *)((long)param_1 + 0x1bc) == 0) && (*(int *)((long)param_1 + 0x1c4) != 0)) {
      *(undefined4 *)(lVar2 + 0x20) = 2;
      *(int *)(lVar2 + 0x24) = *(int *)(lVar2 + 0x24) + 1;
      goto LAB_0037587f;
    }
    (**(code **)param_1[0x44])(param_1,1);
    (**(code **)param_1[0x3f])(param_1,2);
  }
  else {
    if (iVar1 != 0) {
      puVar3 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar3 + 5) = 0x31;
      (*(code *)*puVar3)(param_1);
      goto LAB_003758dd;
    }
    select_scan_parameters(param_1);
    per_scan_setup(param_1);
    if ((char)param_1[0x24] == '\0') {
      (**(code **)param_1[0x41])(param_1);
      (**(code **)param_1[0x42])(param_1);
      (**(code **)param_1[0x3e])(param_1,0);
    }
    (**(code **)param_1[0x43])(param_1);
    (**(code **)param_1[0x44])(param_1,*(undefined1 *)((long)param_1 + 0x122));
    (**(code **)param_1[0x3f])(param_1,(1 < *(int *)(lVar2 + 0x28)) * '\x03');
    (**(code **)param_1[0x3d])(param_1,0);
    if (*(char *)((long)param_1 + 0x122) == '\0') {
      *(undefined1 *)(lVar2 + 0x18) = 1;
      goto LAB_003758dd;
    }
  }
  *(undefined1 *)(lVar2 + 0x18) = 0;
LAB_003758dd:
  iVar1 = *(int *)(lVar2 + 0x28);
  *(bool *)(lVar2 + 0x19) = *(int *)(lVar2 + 0x24) == iVar1 + -1;
  lVar4 = param_1[2];
  if (lVar4 != 0) {
    *(int *)(lVar4 + 0x18) = *(int *)(lVar2 + 0x24);
    *(int *)(lVar4 + 0x1c) = iVar1;
  }
  return;
}


