// Function : deflate_stored
// Namespace: juce:zlibNamespace
// Entry    : 004b5590
// Prototype: int deflate_stored(long * param_1, uint param_2)
// Body     : 004b5590 - 004b5aa7


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::zlibNamespace::deflate_stored(juce::zlibNamespace::internal_state*, int) */

int __cdecl juce::zlibNamespace::deflate_stored(long *param_1,uint param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  long *plVar13;
  ulong *puVar14;
  
  plVar13 = (long *)*param_1;
  uVar7 = (uint)(param_1[3] - 5U);
  if ((ulong)*(uint *)(param_1 + 10) < param_1[3] - 5U) {
    uVar7 = *(uint *)(param_1 + 10);
  }
  lVar3 = plVar13[1];
  do {
    uVar4 = *(int *)((long)param_1 + 0x1734) + 0x2a >> 3;
    bVar2 = true;
    uVar10 = *(uint *)(plVar13 + 4) - uVar4;
    if (*(uint *)(plVar13 + 4) < uVar4) goto LAB_004b5782;
    uVar12 = *(int *)((long)param_1 + 0xac) - (int)param_1[0x13];
    uVar5 = *(uint *)(plVar13 + 1) + uVar12;
    uVar4 = 0xffff;
    if ((ulong)*(uint *)(plVar13 + 1) + (ulong)uVar12 < 0xffff) {
      uVar4 = uVar5;
    }
    if (uVar10 < uVar4) {
      uVar4 = uVar10;
    }
    uVar11 = (ulong)uVar4;
    if (uVar4 < uVar7) {
      if (((param_2 == 0) || (param_2 != 4 && uVar4 == 0)) || (uVar4 != uVar5)) goto LAB_004b5782;
    }
    _tr_stored_block((long)param_1,(void *)0x0,0,(uint)(uVar5 == uVar4 && param_2 == 4));
    *(char *)(param_1[5] + -4 + param_1[2]) = (char)uVar4;
    *(char *)(param_1[5] + -3 + param_1[2]) = (char)(uVar4 >> 8);
    *(char *)(param_1[5] + -2 + param_1[2]) = (char)~uVar4;
    *(char *)(param_1[5] + -1 + param_1[2]) = (char)(~uVar4 >> 8);
    flush_pending(*param_1);
    if (uVar12 != 0) {
      uVar9 = (ulong)uVar12;
      if (uVar4 < uVar12) {
        uVar9 = uVar11;
      }
      memcpy(*(void **)(*param_1 + 0x18),(void *)(param_1[0xc] + param_1[0x13]),uVar9);
      lVar1 = *param_1;
      *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + uVar9;
      *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x20) - (int)uVar9;
      *(long *)(lVar1 + 0x28) = *(long *)(lVar1 + 0x28) + uVar9;
      param_1[0x13] = param_1[0x13] + uVar9;
      uVar11 = (ulong)(uVar4 - (int)uVar9);
    }
    plVar13 = (long *)*param_1;
    uVar10 = (uint)uVar11;
    if (uVar10 != 0) {
      puVar14 = (ulong *)plVar13[3];
      uVar12 = *(uint *)(plVar13 + 1);
      uVar6 = uVar12;
      if (uVar10 < uVar12) {
        uVar6 = uVar10;
      }
      if (uVar6 != 0) {
        *(uint *)(plVar13 + 1) = uVar12 - uVar6;
        uVar9 = (ulong)uVar6;
        memcpy(puVar14,(void *)*plVar13,uVar9);
        if (*(int *)(plVar13[7] + 0x30) == 2) {
          uVar8 = crc32_z((uint)plVar13[0xc],puVar14,uVar9);
LAB_004b55da:
          plVar13[0xc] = uVar8;
        }
        else if (*(int *)(plVar13[7] + 0x30) == 1) {
          uVar8 = adler32_z(plVar13[0xc],(byte *)puVar14,uVar9);
          goto LAB_004b55da;
        }
        *plVar13 = *plVar13 + uVar9;
        plVar13[2] = plVar13[2] + uVar9;
        plVar13 = (long *)*param_1;
        puVar14 = (ulong *)plVar13[3];
      }
      plVar13[3] = (long)puVar14 + uVar11;
      *(uint *)(plVar13 + 4) = (int)plVar13[4] - uVar10;
      plVar13[5] = plVar13[5] + uVar11;
    }
  } while (uVar5 != uVar4 || param_2 != 4);
  bVar2 = false;
LAB_004b5782:
  uVar7 = (int)lVar3 - (int)plVar13[1];
  if (uVar7 == 0) {
    uVar4 = *(uint *)((long)param_1 + 0xac);
    uVar11 = (ulong)uVar4;
    if ((ulong)param_1[0x2e7] < uVar11) goto LAB_004b5894;
  }
  else {
    uVar4 = *(uint *)(param_1 + 10);
    uVar11 = (ulong)uVar4;
    if (uVar7 < uVar4) {
      uVar10 = *(uint *)((long)param_1 + 0xac);
      uVar9 = (ulong)uVar7;
      if (param_1[0xd] - (ulong)uVar10 <= uVar9) {
        *(uint *)((long)param_1 + 0xac) = uVar10 - uVar4;
        memcpy((void *)param_1[0xc],(void *)(uVar11 + param_1[0xc]),(ulong)(uVar10 - uVar4));
        if (*(uint *)(param_1 + 0x2e5) < 2) {
          *(uint *)(param_1 + 0x2e5) = *(uint *)(param_1 + 0x2e5) + 1;
        }
        uVar10 = *(uint *)((long)param_1 + 0xac);
        if (uVar10 < *(uint *)((long)param_1 + 0x172c)) {
          *(uint *)((long)param_1 + 0x172c) = uVar10;
        }
      }
      memcpy((void *)((ulong)uVar10 + param_1[0xc]),(void *)(*(long *)*param_1 - uVar9),uVar9);
      uVar4 = *(int *)((long)param_1 + 0xac) + uVar7;
      *(uint *)((long)param_1 + 0xac) = uVar4;
      uVar10 = (int)param_1[10] - *(int *)((long)param_1 + 0x172c);
      if (uVar7 <= uVar10) {
        uVar10 = uVar7;
      }
      *(uint *)((long)param_1 + 0x172c) = uVar10 + *(int *)((long)param_1 + 0x172c);
    }
    else {
      *(undefined4 *)(param_1 + 0x2e5) = 2;
      memcpy((void *)param_1[0xc],(void *)(*plVar13 - uVar11),uVar11);
      uVar4 = *(uint *)(param_1 + 10);
      *(uint *)((long)param_1 + 0xac) = uVar4;
      *(uint *)((long)param_1 + 0x172c) = uVar4;
    }
    uVar11 = (ulong)uVar4;
    param_1[0x13] = uVar11;
    if ((ulong)param_1[0x2e7] < uVar11) {
LAB_004b5894:
      param_1[0x2e7] = uVar11;
    }
  }
  if (!bVar2) {
    return 3;
  }
  if (((param_2 & 0xfffffffb) == 0) || (*(uint *)(*param_1 + 8) != 0)) {
    uVar7 = (int)param_1[0xd] - uVar4;
    if (uVar7 < *(uint *)(*param_1 + 8)) {
      uVar11 = (ulong)*(uint *)(param_1 + 10);
      if ((long)uVar11 <= param_1[0x13]) {
        param_1[0x13] = param_1[0x13] - uVar11;
        uVar4 = uVar4 - *(uint *)(param_1 + 10);
        *(uint *)((long)param_1 + 0xac) = uVar4;
        memcpy((void *)param_1[0xc],(void *)(uVar11 + param_1[0xc]),(ulong)uVar4);
        if (*(uint *)(param_1 + 0x2e5) < 2) {
          *(uint *)(param_1 + 0x2e5) = *(uint *)(param_1 + 0x2e5) + 1;
        }
        uVar7 = uVar7 + (int)param_1[10];
        uVar4 = *(uint *)((long)param_1 + 0xac);
        if (uVar4 < *(uint *)((long)param_1 + 0x172c)) {
          *(uint *)((long)param_1 + 0x172c) = uVar4;
        }
      }
    }
  }
  else {
    if (param_1[0x13] == uVar11) {
      return 1;
    }
    uVar7 = (int)param_1[0xd] - uVar4;
  }
  plVar13 = (long *)*param_1;
  uVar10 = *(uint *)(plVar13 + 1);
  if (uVar10 < uVar7) {
    uVar7 = uVar10;
  }
  if (uVar7 == 0) goto LAB_004b59d8;
  puVar14 = (ulong *)((ulong)uVar4 + param_1[0xc]);
  *(uint *)(plVar13 + 1) = uVar10 - uVar7;
  uVar11 = (ulong)uVar7;
  memcpy(puVar14,(void *)*plVar13,uVar11);
  if (*(int *)(plVar13[7] + 0x30) == 2) {
    uVar9 = crc32_z((uint)plVar13[0xc],puVar14,uVar11);
LAB_004b59a1:
    plVar13[0xc] = uVar9;
  }
  else if (*(int *)(plVar13[7] + 0x30) == 1) {
    uVar9 = adler32_z(plVar13[0xc],(byte *)puVar14,uVar11);
    goto LAB_004b59a1;
  }
  *plVar13 = *plVar13 + uVar11;
  plVar13[2] = plVar13[2] + uVar11;
  uVar4 = *(int *)((long)param_1 + 0xac) + uVar7;
  *(uint *)((long)param_1 + 0xac) = uVar4;
  uVar10 = (int)param_1[10] - *(int *)((long)param_1 + 0x172c);
  if (uVar7 <= uVar10) {
    uVar10 = uVar7;
  }
  *(uint *)((long)param_1 + 0x172c) = uVar10 + *(int *)((long)param_1 + 0x172c);
LAB_004b59d8:
  if ((ulong)param_1[0x2e7] < (ulong)uVar4) {
    param_1[0x2e7] = (ulong)uVar4;
  }
  uVar11 = param_1[3] - (ulong)(uint)(*(int *)((long)param_1 + 0x1734) + 0x2a >> 3);
  uVar7 = 0xffff;
  if (uVar11 < 0xffff) {
    uVar7 = (uint)uVar11;
  }
  uVar10 = *(uint *)(param_1 + 10);
  if (uVar7 <= *(uint *)(param_1 + 10)) {
    uVar10 = uVar7;
  }
  uVar4 = uVar4 - (int)param_1[0x13];
  if (uVar4 < uVar10) {
    if (param_2 == 0) {
      return 0;
    }
    if (param_2 != 4 && uVar4 == 0) {
      return 0;
    }
    if (*(int *)(*param_1 + 8) != 0) {
      return 0;
    }
    if (uVar7 < uVar4) {
      return 0;
    }
  }
  uVar10 = uVar4;
  if (uVar7 < uVar4) {
    uVar10 = uVar7;
  }
  if (param_2 == 4) {
    uVar7 = (uint)(uVar4 <= uVar7 && *(int *)(*param_1 + 8) == 0);
  }
  else {
    uVar7 = 0;
  }
  _tr_stored_block((long)param_1,(void *)(param_1[0x13] + param_1[0xc]),(ulong)uVar10,uVar7);
  param_1[0x13] = param_1[0x13] + (ulong)uVar10;
  flush_pending(*param_1);
  return uVar7 * 2;
}


