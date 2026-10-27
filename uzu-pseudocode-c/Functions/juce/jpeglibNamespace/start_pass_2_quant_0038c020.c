// Function : start_pass_2_quant
// Namespace: juce:jpeglibNamespace
// Entry    : 0038c020
// Prototype: undefined start_pass_2_quant(long * param_1, char param_2)
// Body     : 0038c020 - 0038c58c


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::start_pass_2_quant(juce::jpeglibNamespace::jpeg_decompress_struct*,
   unsigned char) */

void __cdecl juce::jpeglibNamespace::start_pass_2_quant(long *param_1,char param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  void *__s;
  long lVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  long lVar11;
  size_t __n;
  
  lVar3 = param_1[0x4e];
  puVar4 = *(undefined8 **)(lVar3 + 0x30);
  if (*(int *)((long)param_1 + 100) == 0) {
    if (param_2 == '\0') {
      pcVar7 = pass2_no_dither;
      goto LAB_0038c086;
    }
  }
  else {
    *(undefined4 *)((long)param_1 + 100) = 2;
    if (param_2 == '\0') {
      pcVar7 = pass2_fs_dither;
LAB_0038c086:
      *(code **)(lVar3 + 8) = pcVar7;
      *(code **)(lVar3 + 0x10) = finish_pass2;
      if ((int)*(uint *)(param_1 + 0x11) < 1) {
        uVar6 = 1;
        uVar9 = 0x3a;
LAB_0038c31d:
        lVar11 = *param_1;
        *(undefined4 *)(lVar11 + 0x28) = uVar9;
        *(undefined4 *)(lVar11 + 0x2c) = uVar6;
        (**(code **)*param_1)(param_1);
        iVar2 = *(int *)((long)param_1 + 100);
      }
      else {
        if (0x100 < *(uint *)(param_1 + 0x11)) {
          uVar6 = 0x100;
          uVar9 = 0x3b;
          goto LAB_0038c31d;
        }
        iVar2 = *(int *)((long)param_1 + 100);
      }
      if (iVar2 == 2) {
        __n = (ulong)*(uint *)((long)param_1 + 0x74) * 6 + 0xc;
        __s = *(void **)(lVar3 + 0x40);
        if (__s == (void *)0x0) {
          __s = (void *)(**(code **)(param_1[1] + 8))(param_1,1,__n);
          *(void **)(lVar3 + 0x40) = __s;
        }
        memset(__s,0,__n);
        if (*(long *)(lVar3 + 0x50) == 0) {
          lVar11 = param_1[0x4e];
          lVar8 = (**(code **)param_1[1])(param_1,1,0x7fc);
          *(long *)(lVar11 + 0x50) = lVar8 + 0x3fc;
          uVar5 = _UNK_005dd528;
          *(undefined8 *)(lVar8 + 0x3f0) = _DAT_005dd520;
          *(undefined8 *)(lVar8 + 0x3f8) = uVar5;
          uVar5 = _UNK_005dd538;
          *(undefined8 *)(lVar8 + 0x400) = _DAT_005dd530;
          *(undefined8 *)(lVar8 + 0x408) = uVar5;
          uVar5 = _UNK_005dd548;
          *(undefined8 *)(lVar8 + 0x3e0) = _DAT_005dd540;
          *(undefined8 *)(lVar8 + 1000) = uVar5;
          uVar5 = _UNK_005dd558;
          *(undefined8 *)(lVar8 + 0x410) = _DAT_005dd550;
          *(undefined8 *)(lVar8 + 0x418) = uVar5;
          uVar5 = _UNK_005dd568;
          *(undefined8 *)(lVar8 + 0x3d0) = _DAT_005dd560;
          *(undefined8 *)(lVar8 + 0x3d8) = uVar5;
          uVar5 = _UNK_005dd578;
          *(undefined8 *)(lVar8 + 0x420) = _DAT_005dd570;
          *(undefined8 *)(lVar8 + 0x428) = uVar5;
          uVar5 = _UNK_005dd588;
          *(undefined8 *)(lVar8 + 0x3c0) = _DAT_005dd580;
          *(undefined8 *)(lVar8 + 0x3c8) = uVar5;
          uVar5 = _UNK_005dd598;
          *(undefined8 *)(lVar8 + 0x430) = _DAT_005dd590;
          *(undefined8 *)(lVar8 + 0x438) = uVar5;
          uVar5 = _UNK_005dd5a8;
          *(undefined8 *)(lVar8 + 0x3b0) = _DAT_005dd5a0;
          *(undefined8 *)(lVar8 + 0x3b8) = uVar5;
          uVar5 = _UNK_005dd5b8;
          *(undefined8 *)(lVar8 + 0x440) = _DAT_005dd5b0;
          *(undefined8 *)(lVar8 + 0x448) = uVar5;
          uVar5 = _UNK_005dd5c8;
          *(undefined8 *)(lVar8 + 0x3a0) = _DAT_005dd5c0;
          *(undefined8 *)(lVar8 + 0x3a8) = uVar5;
          uVar5 = _UNK_005dd5d8;
          *(undefined8 *)(lVar8 + 0x450) = _DAT_005dd5d0;
          *(undefined8 *)(lVar8 + 0x458) = uVar5;
          uVar5 = _UNK_005dd5e8;
          *(undefined8 *)(lVar8 + 0x390) = _DAT_005dd5e0;
          *(undefined8 *)(lVar8 + 0x398) = uVar5;
          uVar5 = _UNK_005dd5f8;
          *(undefined8 *)(lVar8 + 0x460) = _DAT_005dd5f0;
          *(undefined8 *)(lVar8 + 0x468) = uVar5;
          uVar5 = _UNK_005dd608;
          *(undefined8 *)(lVar8 + 0x380) = _DAT_005dd600;
          *(undefined8 *)(lVar8 + 0x388) = uVar5;
          uVar5 = _UNK_005dd618;
          *(undefined8 *)(lVar8 + 0x470) = _DAT_005dd610;
          *(undefined8 *)(lVar8 + 0x478) = uVar5;
          uVar5 = _UNK_005dd628;
          *(undefined8 *)(lVar8 + 0x370) = _DAT_005dd620;
          *(undefined8 *)(lVar8 + 0x378) = uVar5;
          uVar5 = _UNK_005dd638;
          *(undefined8 *)(lVar8 + 0x480) = _DAT_005dd630;
          *(undefined8 *)(lVar8 + 0x488) = uVar5;
          uVar5 = _UNK_005dd648;
          *(undefined8 *)(lVar8 + 0x360) = _DAT_005dd640;
          *(undefined8 *)(lVar8 + 0x368) = uVar5;
          uVar5 = _UNK_005dd658;
          *(undefined8 *)(lVar8 + 0x490) = _DAT_005dd650;
          *(undefined8 *)(lVar8 + 0x498) = uVar5;
          uVar5 = _UNK_005dd668;
          *(undefined8 *)(lVar8 + 0x350) = _DAT_005dd660;
          *(undefined8 *)(lVar8 + 0x358) = uVar5;
          uVar5 = _UNK_005dd678;
          *(undefined8 *)(lVar8 + 0x4a0) = _DAT_005dd670;
          *(undefined8 *)(lVar8 + 0x4a8) = uVar5;
          *(undefined8 *)(lVar8 + 0x4b0) = 0x1f0000001e;
          *(undefined4 *)(lVar8 + 0x4b8) = 0x1f;
          uVar5 = _UNK_005dd688;
          *(undefined8 *)(lVar8 + 0x340) = _DAT_005dd680;
          *(undefined8 *)(lVar8 + 0x348) = uVar5;
          puVar10 = (undefined4 *)(lVar8 + 0x4c8);
          lVar11 = 0;
          do {
            puVar10[-3] = 0x20;
            *(undefined4 *)(lVar8 + 0x33c + lVar11 * 4) = 0xffffffe0;
            puVar10[-2] = 0x20;
            *(undefined4 *)(lVar8 + 0x338 + lVar11 * 4) = 0xffffffe0;
            puVar10[-1] = 0x20;
            *(undefined4 *)(lVar8 + 0x334 + lVar11 * 4) = 0xffffffe0;
            *puVar10 = 0x20;
            *(undefined4 *)(lVar8 + 0x330 + lVar11 * 4) = 0xffffffe0;
            lVar11 = lVar11 + -4;
            puVar10 = puVar10 + 4;
          } while (lVar11 != -0xd0);
        }
        *(undefined1 *)(lVar3 + 0x48) = 0;
        cVar1 = *(char *)(lVar3 + 0x38);
      }
      else {
        cVar1 = *(char *)(lVar3 + 0x38);
      }
      goto joined_r0x0038c582;
    }
  }
  *(code **)(lVar3 + 8) = prescan_quantize;
  *(code **)(lVar3 + 0x10) = finish_pass1;
  *(undefined1 *)(lVar3 + 0x38) = 1;
  cVar1 = *(char *)(lVar3 + 0x38);
joined_r0x0038c582:
  if (cVar1 != '\0') {
    memset((void *)*puVar4,0,0x1000);
    memset((void *)puVar4[1],0,0x1000);
    memset((void *)puVar4[2],0,0x1000);
    memset((void *)puVar4[3],0,0x1000);
    memset((void *)puVar4[4],0,0x1000);
    memset((void *)puVar4[5],0,0x1000);
    memset((void *)puVar4[6],0,0x1000);
    memset((void *)puVar4[7],0,0x1000);
    memset((void *)puVar4[8],0,0x1000);
    memset((void *)puVar4[9],0,0x1000);
    memset((void *)puVar4[10],0,0x1000);
    memset((void *)puVar4[0xb],0,0x1000);
    memset((void *)puVar4[0xc],0,0x1000);
    memset((void *)puVar4[0xd],0,0x1000);
    memset((void *)puVar4[0xe],0,0x1000);
    memset((void *)puVar4[0xf],0,0x1000);
    memset((void *)puVar4[0x10],0,0x1000);
    memset((void *)puVar4[0x11],0,0x1000);
    memset((void *)puVar4[0x12],0,0x1000);
    memset((void *)puVar4[0x13],0,0x1000);
    memset((void *)puVar4[0x14],0,0x1000);
    memset((void *)puVar4[0x15],0,0x1000);
    memset((void *)puVar4[0x16],0,0x1000);
    memset((void *)puVar4[0x17],0,0x1000);
    memset((void *)puVar4[0x18],0,0x1000);
    memset((void *)puVar4[0x19],0,0x1000);
    memset((void *)puVar4[0x1a],0,0x1000);
    memset((void *)puVar4[0x1b],0,0x1000);
    memset((void *)puVar4[0x1c],0,0x1000);
    memset((void *)puVar4[0x1d],0,0x1000);
    memset((void *)puVar4[0x1e],0,0x1000);
    memset((void *)puVar4[0x1f],0,0x1000);
    *(undefined1 *)(lVar3 + 0x38) = 0;
  }
  return;
}


