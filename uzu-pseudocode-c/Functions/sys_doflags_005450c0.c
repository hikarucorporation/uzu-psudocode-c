// Function : sys_doflags
// Namespace: 
// Entry    : 005450c0
// Prototype: undefined sys_doflags(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 005450c0 - 005453cf


void sys_doflags(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  size_t sVar4;
  char *pcVar5;
  void *__dest;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 extraout_RDX;
  size_t __n;
  ulong uVar9;
  ulong uVar10;
  char *pcVar11;
  char *in_R8;
  undefined8 in_R9;
  void *__ptr;
  char *pcVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  char *pcVar16;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  void *local_420;
  char local_418 [1000];
  
  puVar1 = PTR_sys_flags_007153e8;
  puVar7 = *(undefined8 **)PTR_sys_flags_007153e8;
  if (puVar7 == (undefined8 *)0x0) {
    plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
    puVar7 = (undefined8 *)(*plVar3 + 0x168);
    *(undefined8 **)puVar1 = puVar7;
  }
  pcVar16 = (char *)*puVar7;
  sVar4 = strlen(pcVar16);
  iVar2 = (int)sVar4;
  if (1000 < iVar2) {
    pd_error(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
             "flags: %s: too long",pcVar16,puVar7,in_R8,in_R9);
    return;
  }
  local_420 = (void *)0x0;
  puVar15 = (undefined8 *)0xffffffff;
  if (iVar2 != 1000) {
    puVar7 = (undefined8 *)(sVar4 << 0x20);
    __n = (size_t)iVar2;
    sVar4 = 1000 - __n;
    if ((undefined8 *)0x3e700000000 < puVar7) {
      sVar4 = 0;
    }
    memset(local_418 + __n,0,sVar4);
    memcpy(local_418,pcVar16,__n);
    __ptr = (void *)0x0;
    puVar14 = (undefined8 *)0x0;
    if (local_418[0] != '\0') {
      local_420 = (void *)0x0;
      puVar8 = (undefined8 *)0x0;
      pcVar16 = local_418;
      do {
        puVar14 = (undefined8 *)0x0;
        pcVar12 = pcVar16;
        pcVar11 = pcVar16;
        do {
          puVar7 = puVar14;
          pcVar5 = pcVar11;
          while( true ) {
            pcVar11 = pcVar5 + 1;
            puVar14 = (undefined8 *)(ulong)(uint)(int)local_418[0];
            uVar13 = (uint)puVar7;
            if ((local_418[0] == ' ' || local_418[0] == '\t') && (uVar13 == 0)) goto LAB_00545280;
            if (local_418[0] == '\\') {
              local_418[0] = *pcVar11;
              puVar15 = (undefined8 *)0xfffffff6;
              if (local_418[0] == '\0') goto LAB_0054538c;
              pcVar11 = pcVar5 + 2;
              goto LAB_00545244;
            }
            if (uVar13 != (int)local_418[0]) break;
            local_418[0] = *pcVar11;
            puVar7 = (undefined8 *)0x0;
            pcVar5 = pcVar11;
            if (local_418[0] == '\0') goto LAB_00545280;
          }
          if (uVar13 == 0) {
            if ((local_418[0] != '\"') && (local_418[0] != '\'')) {
              puVar7 = (undefined8 *)0x0;
              goto LAB_00545244;
            }
          }
          else {
LAB_00545244:
            *pcVar12 = local_418[0];
            pcVar12 = pcVar12 + 1;
            puVar14 = puVar7;
          }
          local_418[0] = *pcVar11;
        } while (local_418[0] != '\0');
        puVar15 = (undefined8 *)0xfffffff5;
        if ((int)puVar14 != 0) {
LAB_0054538c:
          goto LAB_005453a1;
        }
LAB_00545280:
        pcVar5 = pcVar12;
        if (pcVar11 == pcVar12) goto LAB_0054528b;
        while( true ) {
          *pcVar5 = '\0';
LAB_0054528b:
          pcVar5 = pcVar11;
          if ((*pcVar5 != ' ') && (*pcVar5 != '\t')) break;
          pcVar11 = pcVar5 + 1;
        }
        __dest = calloc(((long)pcVar12 - (long)pcVar16) + 1,1);
        puVar15 = (undefined8 *)0xffffffea;
        if (__dest == (void *)0x0) goto LAB_0054538c;
        memcpy(__dest,pcVar16,(long)pcVar12 - (long)pcVar16);
        puVar14 = (undefined8 *)((long)puVar8 + 1);
        __ptr = realloc(local_420,(long)puVar8 * 8 + 8);
        if (__ptr == (void *)0x0) {
          free(__dest);
          puVar15 = (undefined8 *)0xffffffe9;
          goto LAB_005453a1;
        }
        *(void **)((long)__ptr + (long)puVar8 * 8) = __dest;
        local_418[0] = *pcVar5;
        puVar7 = puVar14;
        puVar8 = puVar14;
        pcVar16 = pcVar5;
        local_420 = __ptr;
      } while (local_418[0] != '\0');
    }
    uVar13 = (uint)puVar14;
    uVar9 = (ulong)puVar14 & 0xffffffff;
    plVar3 = realloc(__ptr,uVar9 * 8 + 8);
    local_420 = __ptr;
    puVar15 = (undefined8 *)0xffffffe9;
    if (plVar3 != (long *)0x0) {
      plVar3[uVar9] = 0;
      uVar6 = extraout_XMM0_Qa_00;
      if (-1 < (int)uVar13) {
        uVar6 = sys_argparse(uVar13,plVar3);
        if ((int)uVar6 != 0) {
          pd_error(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                   "error parsing startup arguments",extraout_RDX,puVar7,in_R8,in_R9);
        }
        if (uVar13 != 0) {
          uVar10 = 0;
          do {
            free((void *)plVar3[uVar10]);
            uVar10 = uVar10 + 1;
          } while (uVar9 != uVar10);
        }
        free(plVar3);
        return;
      }
      goto LAB_005453ac;
    }
  }
LAB_005453a1:
  puVar14 = puVar15;
  free(local_420);
  uVar6 = extraout_XMM0_Qa_02;
LAB_005453ac:
  pd_error(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
           "error#%d while parsing flags",(ulong)puVar14 & 0xffffffff,puVar7,in_R8,in_R9);
  return;
}


