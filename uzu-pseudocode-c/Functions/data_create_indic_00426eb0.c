// Function : data_create_indic
// Namespace: 
// Entry    : 00426eb0
// Prototype: undefined8 * data_create_indic(long param_1)
// Body     : 00426eb0 - 0042757f


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* data_create_indic(hb_ot_shape_plan_t const*) */

undefined8 * __cdecl data_create_indic(long param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  char *__s;
  char *pcVar6;
  size_t sVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint *puVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  bool bVar18;
  
  puVar4 = calloc(1,0xd0);
  if (puVar4 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar5 = indic_configs;
  *puVar4 = indic_configs;
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 < 0x4b6e6461) {
    if (iVar1 < 0x47756a72) {
      if (iVar1 == 0x42656e67) {
        puVar5 = indic_configs + 0x30;
      }
      else {
        if (iVar1 != 0x44657661) goto LAB_00426fb1;
        puVar5 = indic_configs + 0x18;
      }
    }
    else if (iVar1 == 0x47756a72) {
      puVar5 = indic_configs + 0x60;
    }
    else {
      if (iVar1 != 0x47757275) goto LAB_00426fb1;
      puVar5 = indic_configs + 0x48;
    }
  }
  else if (iVar1 < 0x4f727961) {
    if (iVar1 == 0x4b6e6461) {
      puVar5 = indic_configs + 0xc0;
    }
    else {
      if (iVar1 != 0x4d6c796d) goto LAB_00426fb1;
      puVar5 = indic_configs + 0xd8;
    }
  }
  else if (iVar1 == 0x4f727961) {
    puVar5 = indic_configs + 0x78;
  }
  else if (iVar1 == 0x54616d6c) {
    puVar5 = indic_configs + 0x90;
  }
  else {
    if (iVar1 != 0x54656c75) goto LAB_00426fb1;
    puVar5 = indic_configs + 0xa8;
  }
  *puVar4 = puVar5;
LAB_00426fb1:
  if (puVar5[4] == '\0') {
    bVar18 = false;
    *(undefined1 *)(puVar4 + 1) = 0;
  }
  else {
    bVar18 = *(char *)(param_1 + 0x28) != '2';
    *(bool *)(puVar4 + 1) = bVar18;
  }
  if (_hb_options_0 == 0) {
    __s = getenv("HB_OPTIONS");
    uVar8 = 2;
    if ((__s != (char *)0x0) && (*__s != '\0')) {
      uVar10 = 2;
      do {
        pcVar6 = strchr(__s,0x3a);
        if (pcVar6 == (char *)0x0) {
          sVar7 = strlen(__s);
          pcVar6 = __s + sVar7;
        }
        iVar3 = strncmp(__s,"uniscribe-bug-compatible",(long)pcVar6 - (long)__s);
        uVar8 = (uint)(byte)((byte)uVar10 | 4);
        if ((long)pcVar6 - (long)__s != 0x18) {
          uVar8 = uVar10;
        }
        if (iVar3 != 0) {
          uVar8 = uVar10;
        }
        __s = pcVar6 + (*pcVar6 != '\0');
        uVar10 = uVar8;
      } while (*__s != '\0');
    }
    _hb_options_0 = uVar8;
  }
  *(byte *)((long)puVar4 + 9) = (byte)_hb_options_0 >> 2 & 1;
  *(undefined4 *)((long)puVar4 + 0xc) = 0xffffffff;
  bVar18 = iVar1 != 0x4d6c796d && !bVar18;
  *(bool *)(puVar4 + 4) = bVar18;
  lVar2 = *(long *)(param_1 + 0x40);
  iVar1 = *(int *)(param_1 + 0x3c);
  uVar8 = 0xffffffff;
  if (0 < iVar1) {
    iVar3 = iVar1 + -1;
    iVar14 = 0;
    do {
      while( true ) {
        uVar13 = (uint)(iVar14 + iVar3) >> 1;
        uVar10 = *(uint *)(lVar2 + (ulong)uVar13 * 0x24);
        if (0x72706866 < uVar10) break;
        if (uVar10 == 0x72706866) {
          uVar8 = *(uint *)(lVar2 + 0xc + (ulong)uVar13 * 0x24);
          goto LAB_00427064;
        }
        iVar14 = uVar13 + 1;
        if (iVar3 < iVar14) goto LAB_00427064;
      }
      iVar3 = uVar13 - 1;
    } while (iVar14 <= iVar3);
  }
LAB_00427064:
  uVar10 = *(uint *)(param_1 + 0x6c);
  lVar16 = 0;
  uVar13 = 0;
  if (uVar10 < uVar8) {
    uVar8 = 0;
  }
  else {
    if (uVar8 != 0) {
      if (uVar8 - 1 < uVar10) {
        puVar11 = (uint *)((ulong)(uVar8 - 1) * 0x10 + *(long *)(param_1 + 0x70));
      }
      else {
        puVar11 = &_hb_NullPool;
      }
      uVar13 = *puVar11;
    }
    if (uVar8 < uVar10) {
      piVar12 = (int *)((ulong)uVar8 * 0x10 + *(long *)(param_1 + 0x70));
    }
    else {
      piVar12 = (int *)(param_1 + 0x4c);
    }
    uVar8 = *(uint *)(param_1 + 0x4c) - uVar13;
    if (*(uint *)(param_1 + 0x4c) < uVar13) {
      uVar8 = 0;
    }
    if (*piVar12 - uVar13 < uVar8) {
      uVar8 = *piVar12 - uVar13;
    }
    lVar16 = (ulong)uVar13 * 0xc + *(long *)(param_1 + 0x50);
  }
  puVar4[2] = lVar16;
  puVar4[3] = (ulong)uVar8;
  *(bool *)(puVar4 + 7) = bVar18;
  uVar8 = 0xffffffff;
  if (0 < iVar1) {
    iVar3 = iVar1 + -1;
    iVar14 = 0;
    do {
      while( true ) {
        uVar15 = (uint)(iVar3 + iVar14) >> 1;
        uVar13 = *(uint *)(lVar2 + (ulong)uVar15 * 0x24);
        if (0x70726566 < uVar13) break;
        if (uVar13 == 0x70726566) {
          uVar8 = *(uint *)(lVar2 + 0xc + (ulong)uVar15 * 0x24);
          goto LAB_0042712b;
        }
        iVar14 = uVar15 + 1;
        if (iVar3 < iVar14) goto LAB_0042712b;
      }
      iVar3 = uVar15 - 1;
    } while (iVar14 <= iVar3);
  }
LAB_0042712b:
  lVar16 = 0;
  uVar13 = 0;
  if (uVar10 < uVar8) {
    uVar8 = 0;
  }
  else {
    if (uVar8 != 0) {
      if (uVar8 - 1 < uVar10) {
        puVar11 = (uint *)((ulong)(uVar8 - 1) * 0x10 + *(long *)(param_1 + 0x70));
      }
      else {
        puVar11 = &_hb_NullPool;
      }
      uVar13 = *puVar11;
    }
    if (uVar8 < uVar10) {
      piVar12 = (int *)((ulong)uVar8 * 0x10 + *(long *)(param_1 + 0x70));
    }
    else {
      piVar12 = (int *)(param_1 + 0x4c);
    }
    uVar8 = *(uint *)(param_1 + 0x4c) - uVar13;
    if (*(uint *)(param_1 + 0x4c) < uVar13) {
      uVar8 = 0;
    }
    if (*piVar12 - uVar13 < uVar8) {
      uVar8 = *piVar12 - uVar13;
    }
    lVar16 = (ulong)uVar13 * 0xc + *(long *)(param_1 + 0x50);
  }
  puVar4[5] = lVar16;
  puVar4[6] = (ulong)uVar8;
  *(bool *)(puVar4 + 10) = bVar18;
  uVar8 = 0xffffffff;
  if (0 < iVar1) {
    iVar3 = iVar1 + -1;
    iVar14 = 0;
    do {
      while( true ) {
        uVar15 = (uint)(iVar3 + iVar14) >> 1;
        uVar13 = *(uint *)(lVar2 + (ulong)uVar15 * 0x24);
        if (0x626c7766 < uVar13) break;
        if (uVar13 == 0x626c7766) {
          uVar8 = *(uint *)(lVar2 + 0xc + (ulong)uVar15 * 0x24);
          goto LAB_004271eb;
        }
        iVar14 = uVar15 + 1;
        if (iVar3 < iVar14) goto LAB_004271eb;
      }
      iVar3 = uVar15 - 1;
    } while (iVar14 <= iVar3);
  }
LAB_004271eb:
  lVar16 = 0;
  uVar13 = 0;
  if (uVar10 < uVar8) {
    uVar8 = 0;
  }
  else {
    if (uVar8 != 0) {
      if (uVar8 - 1 < uVar10) {
        puVar11 = (uint *)((ulong)(uVar8 - 1) * 0x10 + *(long *)(param_1 + 0x70));
      }
      else {
        puVar11 = &_hb_NullPool;
      }
      uVar13 = *puVar11;
    }
    if (uVar8 < uVar10) {
      piVar12 = (int *)((ulong)uVar8 * 0x10 + *(long *)(param_1 + 0x70));
    }
    else {
      piVar12 = (int *)(param_1 + 0x4c);
    }
    uVar8 = *(uint *)(param_1 + 0x4c) - uVar13;
    if (*(uint *)(param_1 + 0x4c) < uVar13) {
      uVar8 = 0;
    }
    if (*piVar12 - uVar13 < uVar8) {
      uVar8 = *piVar12 - uVar13;
    }
    lVar16 = (ulong)uVar13 * 0xc + *(long *)(param_1 + 0x50);
  }
  puVar4[8] = lVar16;
  puVar4[9] = (ulong)uVar8;
  *(bool *)(puVar4 + 0xd) = bVar18;
  uVar17 = 0xffffffff;
  if (0 < iVar1) {
    iVar3 = iVar1 + -1;
    iVar14 = 0;
    do {
      while( true ) {
        uVar13 = (uint)(iVar3 + iVar14) >> 1;
        uVar8 = *(uint *)(lVar2 + (ulong)uVar13 * 0x24);
        if (0x70737466 < uVar8) break;
        if (uVar8 == 0x70737466) {
          uVar17 = (ulong)*(uint *)(lVar2 + 0xc + (ulong)uVar13 * 0x24);
          goto LAB_004272ab;
        }
        iVar14 = uVar13 + 1;
        if (iVar3 < iVar14) goto LAB_004272ab;
      }
      iVar3 = uVar13 - 1;
    } while (iVar14 <= iVar3);
  }
LAB_004272ab:
  lVar16 = 0;
  uVar8 = 0;
  uVar13 = (uint)uVar17;
  if (uVar10 < uVar13) {
    uVar13 = 0;
  }
  else {
    if (uVar13 != 0) {
      if (uVar13 - 1 < uVar10) {
        puVar11 = (uint *)((ulong)(uVar13 - 1) * 0x10 + *(long *)(param_1 + 0x70));
      }
      else {
        puVar11 = &_hb_NullPool;
      }
      uVar8 = *puVar11;
    }
    if (uVar13 < uVar10) {
      piVar12 = (int *)(uVar17 * 0x10 + *(long *)(param_1 + 0x70));
    }
    else {
      piVar12 = (int *)(param_1 + 0x4c);
    }
    uVar13 = *(uint *)(param_1 + 0x4c) - uVar8;
    if (*(uint *)(param_1 + 0x4c) < uVar8) {
      uVar13 = 0;
    }
    if (*piVar12 - uVar8 < uVar13) {
      uVar13 = *piVar12 - uVar8;
    }
    lVar16 = (ulong)uVar8 * 0xc + *(long *)(param_1 + 0x50);
  }
  puVar4[0xb] = lVar16;
  puVar4[0xc] = (ulong)uVar13;
  *(bool *)(puVar4 + 0x10) = bVar18;
  uVar8 = 0xffffffff;
  if (0 < iVar1) {
    iVar3 = iVar1 + -1;
    iVar14 = 0;
    do {
      while( true ) {
        uVar15 = (uint)(iVar14 + iVar3) >> 1;
        uVar13 = *(uint *)(lVar2 + (ulong)uVar15 * 0x24);
        if (0x76617475 < uVar13) break;
        if (uVar13 == 0x76617475) {
          uVar8 = *(uint *)(lVar2 + 0xc + (ulong)uVar15 * 0x24);
          goto LAB_00427364;
        }
        iVar14 = uVar15 + 1;
        if (iVar3 < iVar14) goto LAB_00427364;
      }
      iVar3 = uVar15 - 1;
    } while (iVar14 <= iVar3);
  }
LAB_00427364:
  uVar13 = 0;
  if (uVar10 < uVar8) {
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
  }
  else {
    if (uVar8 != 0) {
      if (uVar8 - 1 < uVar10) {
        puVar11 = (uint *)((ulong)(uVar8 - 1) * 0x10 + *(long *)(param_1 + 0x70));
      }
      else {
        puVar11 = &_hb_NullPool;
      }
      uVar13 = *puVar11;
    }
    if (uVar8 < uVar10) {
      piVar12 = (int *)((ulong)uVar8 * 0x10 + *(long *)(param_1 + 0x70));
    }
    else {
      piVar12 = (int *)(param_1 + 0x4c);
    }
    uVar8 = *(uint *)(param_1 + 0x4c) - uVar13;
    if (*(uint *)(param_1 + 0x4c) < uVar13) {
      uVar8 = 0;
    }
    if (*piVar12 - uVar13 < uVar8) {
      uVar8 = *piVar12 - uVar13;
    }
    puVar4[0xe] = (ulong)uVar13 * 0xc + *(long *)(param_1 + 0x50);
    puVar4[0xf] = (ulong)uVar8;
  }
  if (0 < iVar1) {
    uVar17 = 0;
    do {
      uVar9 = 0;
      if ((0x9f4UL >> (uVar17 & 0x3f) & 1) != 0) {
        iVar14 = 0;
        iVar3 = iVar1 + -1;
        do {
          while( true ) {
            uVar10 = (uint)(iVar3 + iVar14) >> 1;
            uVar8 = *(uint *)(lVar2 + (ulong)uVar10 * 0x24);
            if (*(uint *)("tkunM" + uVar17 * 8) < uVar8) break;
            if (*(uint *)("tkunM" + uVar17 * 8) <= uVar8) {
              uVar9 = *(undefined4 *)(lVar2 + 0x1c + (ulong)uVar10 * 0x24);
              goto LAB_004273f2;
            }
            iVar14 = uVar10 + 1;
            if (iVar3 < iVar14) goto LAB_004273f0;
          }
          iVar3 = uVar10 - 1;
        } while (iVar14 <= iVar3);
LAB_004273f0:
        uVar9 = 0;
      }
LAB_004273f2:
      *(undefined4 *)((long)puVar4 + uVar17 * 4 + 0x88) = uVar9;
      uVar17 = uVar17 + 1;
    } while (uVar17 != 0x11);
  }
  return puVar4;
}


