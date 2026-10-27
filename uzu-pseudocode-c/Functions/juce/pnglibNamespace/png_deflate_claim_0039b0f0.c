// Function : png_deflate_claim
// Namespace: juce:pnglibNamespace
// Entry    : 0039b0f0
// Prototype: ulong png_deflate_claim(long param_1, ulong param_2, ulong param_3)
// Body     : 0039b0f0 - 0039b610


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_deflate_claim(juce::pnglibNamespace::png_struct_def*, unsigned int,
   unsigned long) */

ulong __cdecl juce::pnglibNamespace::png_deflate_claim(long param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  code *pcVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  char local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined2 local_74;
  undefined1 local_72;
  undefined1 local_71;
  undefined1 local_70;
  undefined1 local_6f;
  undefined8 local_6e;
  undefined4 local_66;
  undefined2 local_62;
  undefined1 local_60;
  
  iVar5 = *(int *)(param_1 + 0x58);
  if (iVar5 != 0) {
    local_78 = (char)(param_2 >> 0x18);
    local_77 = (undefined1)(param_2 >> 0x10);
    local_76 = (undefined1)((param_2 & 0xffffffff) >> 8);
    local_75 = (undefined1)(param_2 & 0xffffffff);
    local_74 = 0x203a;
    local_72 = (undefined1)((uint)iVar5 >> 0x18);
    local_71 = (undefined1)((uint)iVar5 >> 0x10);
    local_70 = (undefined1)((uint)iVar5 >> 8);
    local_6f = (undefined1)iVar5;
    local_6e = 0x7a20676e69737520;
    local_66 = 0x65727473;
    local_62 = 0x6d61;
    local_60 = 0;
    png_warning(param_1,&local_78);
    if (*(int *)(param_1 + 0x58) == 0x49444154) {
      *(char **)(param_1 + 0x90) = "in use by IDAT";
      return 0xfffffffe;
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if ((int)param_2 == 0x49444154) {
    uVar11 = *(uint *)(param_1 + 0xdc);
    iVar5 = *(int *)(param_1 + 0xe0);
    uVar14 = *(uint *)(param_1 + 0xe4);
    iVar2 = *(int *)(param_1 + 0xe8);
    if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
      uVar12 = (uint)(*(char *)(param_1 + 0x186) != '\b');
    }
    else {
      uVar12 = *(uint *)(param_1 + 0xec);
    }
  }
  else {
    uVar11 = *(uint *)(param_1 + 0xf0);
    iVar5 = *(int *)(param_1 + 0xf4);
    uVar14 = *(uint *)(param_1 + 0xf8);
    iVar2 = *(int *)(param_1 + 0xfc);
    uVar12 = *(uint *)(param_1 + 0x100);
  }
  if (param_3 < 0x4001) {
    uVar13 = (ulong)(uint)(1 << ((char)uVar14 - 1U & 0x1f));
    if (param_3 + 0x106 <= uVar13) {
      do {
        uVar13 = uVar13 >> 1;
        uVar14 = uVar14 - 1;
      } while ((uint)(param_3 + 0x106) <= (uint)uVar13);
    }
  }
  uVar15 = *(uint *)(param_1 + 0x50);
  if (((uVar15 & 2) != 0) &&
     ((((*(uint *)(param_1 + 0x104) != uVar11 || (*(int *)(param_1 + 0x108) != iVar5)) ||
       (*(uint *)(param_1 + 0x10c) != uVar14)) ||
      ((*(int *)(param_1 + 0x110) != iVar2 || (*(uint *)(param_1 + 0x114) != uVar12)))))) {
    iVar4 = zlibNamespace::deflateEnd(param_1 + 0x60);
    if (iVar4 != 0) {
      png_warning(param_1,"deflateEnd failed (ignored)");
    }
    uVar15 = 0;
    *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) & 0xfffffffd;
  }
  lVar1 = param_1 + 0x60;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  if ((uVar15 & 2) != 0) {
    uVar8 = zlibNamespace::deflateReset(lVar1);
    uVar13 = uVar8 & 0xffffffff;
    if ((int)uVar8 == 0) goto LAB_0039b345;
    goto LAB_0039b5de;
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  pcVar9 = *(code **)(param_1 + 0xa0);
  if (pcVar9 == (code *)0x0) {
    pcVar9 = zlibNamespace::zcalloc;
    *(code **)(param_1 + 0xa0) = zlibNamespace::zcalloc;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    lVar7 = *(long *)(param_1 + 0xa8);
  }
  else {
    lVar7 = *(long *)(param_1 + 0xa8);
  }
  if (lVar7 == 0) {
    *(code **)(param_1 + 0xa8) = zlibNamespace::zcfree;
  }
  uVar15 = 6;
  if (uVar11 != 0xffffffff) {
    uVar15 = uVar11;
  }
  if ((int)uVar14 < 0) {
    uVar13 = 0xfffffffe;
    if (uVar14 < 0xfffffff1) goto LAB_0039b5de;
    uVar14 = -uVar14;
    uVar10 = 0;
LAB_0039b3a3:
    bVar3 = 1;
  }
  else {
    if (0xf < uVar14) {
      uVar14 = uVar14 - 0x10;
      uVar10 = 2;
      goto LAB_0039b3a3;
    }
    uVar10 = 1;
    bVar3 = 0;
  }
  uVar13 = 0xfffffffe;
  if (((uVar12 < 5) && (uVar13 = 0xfffffffe, uVar15 < 10)) &&
     ((iVar5 == 8 &&
      ((((0xfffffff6 < iVar2 - 10U && (7 < uVar14)) && (uVar14 < 0x10)) &&
       (!(bool)(uVar14 == 8 & bVar3))))))) {
    uVar11 = 9;
    if (uVar14 != 8) {
      uVar11 = uVar14;
    }
    plVar6 = (long *)(*pcVar9)(*(undefined8 *)(param_1 + 0xb0),1,0x1740);
    uVar13 = 0xfffffffc;
    if (plVar6 != (long *)0x0) {
      *(long **)(param_1 + 0x98) = plVar6;
      *plVar6 = lVar1;
      *(undefined4 *)(plVar6 + 1) = 0x2a;
      *(undefined4 *)(plVar6 + 6) = uVar10;
      iVar4 = 1 << ((byte)uVar11 & 0x1f);
      plVar6[7] = 0;
      *(uint *)((long)plVar6 + 0x54) = uVar11;
      *(int *)(plVar6 + 10) = iVar4;
      *(int *)(plVar6 + 0xb) = iVar4 + -1;
      *(int *)(plVar6 + 0x11) = iVar2 + 7;
      iVar5 = 1 << ((byte)(iVar2 + 7) & 0x1f);
      *(int *)((long)plVar6 + 0x84) = iVar5;
      *(int *)((long)plVar6 + 0x8c) = iVar5 + -1;
      *(uint *)(plVar6 + 0x12) = (iVar2 + 9U & 0xff) / 3;
      lVar7 = (**(code **)(param_1 + 0xa0))(*(undefined8 *)(param_1 + 0xb0),iVar4,2);
      plVar6[0xc] = lVar7;
      lVar7 = (**(code **)(param_1 + 0xa0))(*(undefined8 *)(param_1 + 0xb0),(int)plVar6[10],2);
      plVar6[0xe] = lVar7;
      lVar7 = (**(code **)(param_1 + 0xa0))
                        (*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)((long)plVar6 + 0x84),2);
      iVar5 = 1 << ((char)iVar2 + 6U & 0x1f);
      plVar6[0xf] = lVar7;
      plVar6[0x2e7] = 0;
      *(int *)(plVar6 + 0x2e1) = iVar5;
      lVar7 = (**(code **)(param_1 + 0xa0))(*(undefined8 *)(param_1 + 0xb0),iVar5,4);
      plVar6[2] = lVar7;
      uVar11 = *(uint *)(plVar6 + 0x2e1);
      plVar6[3] = (ulong)uVar11 * 4;
      if (((plVar6[0xc] == 0) || (plVar6[0xe] == 0)) || ((lVar7 == 0 || (plVar6[0xf] == 0)))) {
        *(undefined4 *)(plVar6 + 1) = 0x29a;
        *(char **)(param_1 + 0x90) = "insufficient memory";
        zlibNamespace::deflateEnd(lVar1);
      }
      else {
        plVar6[0x2e0] = lVar7 + (ulong)uVar11;
        *(uint *)(plVar6 + 0x2e2) = uVar11 * 3 + -3;
        *(uint *)((long)plVar6 + 0xc4) = uVar15;
        *(uint *)(plVar6 + 0x19) = uVar12;
        *(undefined1 *)(plVar6 + 9) = 8;
        uVar8 = zlibNamespace::deflateReset(lVar1);
        uVar13 = uVar8 & 0xffffffff;
        if ((int)uVar8 == 0) {
          *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) | 2;
LAB_0039b345:
          *(int *)(param_1 + 0x58) = (int)param_2;
          return 0;
        }
      }
    }
  }
LAB_0039b5de:
  if (*(long *)(param_1 + 0x90) == 0) {
    *(undefined **)(param_1 + 0x90) = (&PTR_s_unexpected_zlib_return_00712720)[(int)uVar13 + 7];
  }
  return uVar13;
}


