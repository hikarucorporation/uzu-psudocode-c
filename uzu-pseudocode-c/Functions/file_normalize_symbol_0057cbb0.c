// Function : file_normalize_symbol
// Namespace: 
// Entry    : 0057cbb0
// Prototype: undefined file_normalize_symbol(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, char * param_13, char * param_14)
// Body     : 0057cbb0 - 0057d177


void file_normalize_symbol
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
               char *param_13,char *param_14)

{
  char *__src;
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined7 extraout_var;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined8 *extraout_RAX;
  ulong uVar8;
  char *pcVar9;
  uint uVar10;
  char *pcVar11;
  uint uVar12;
  int iVar13;
  char **ppcVar14;
  long *plVar15;
  int *piVar16;
  int *piVar17;
  ulong uVar18;
  undefined **ppuVar19;
  int iVar20;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 uVar21;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  undefined4 uVar22;
  undefined4 extraout_XMM0_Db_07;
  undefined1 in_stack_fffffffffffffb28;
  char local_4cc;
  char local_4cb;
  char local_4ca;
  undefined1 local_4c9;
  int *local_4c8;
  ulong local_4c0;
  long local_4b8;
  undefined8 *local_4b0;
  uint local_4a4;
  undefined8 *local_4a0;
  undefined8 *local_498;
  undefined8 *local_490;
  int *local_488;
  undefined8 *local_480;
  undefined8 *local_478;
  long local_470;
  undefined *local_468;
  char *local_460 [5];
  undefined *local_438;
  undefined *apuStack_430 [3];
  char local_418 [999];
  undefined1 local_31;
  
  local_4b8 = param_9;
  do_expandpath((char *)*param_10,local_418,1000);
  local_31 = 0;
  sys_unbashfilename(local_418,local_418);
  local_31 = 0;
  local_4a4 = 0;
  local_488 = (int *)0x0;
  puVar4 = gensym(".");
  local_4b0 = gensym("..");
  local_478 = gensym("/");
  local_490 = gensym("./");
  bVar2 = sys_isabsolutepath(local_418);
  uVar10 = (uint)CONCAT71(extraout_var,bVar2);
  puVar5 = do_splitpath(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                        param_6,param_7,param_8,local_418,&local_4a4,&local_488);
  uVar8 = (ulong)local_4a4;
  local_4c8 = local_488;
  uVar21 = extraout_XMM0_Da_00;
  uVar22 = extraout_XMM0_Db_00;
  local_4c0 = uVar8;
  local_4a0 = puVar5;
  local_480 = puVar4;
  if ((int)uVar10 < (int)local_4a4) {
    local_498 = (undefined8 *)(long)(int)uVar10;
    piVar7 = local_488 + (long)local_498 * 4;
    uVar18 = uVar8;
    do {
      puVar6 = (undefined8 *)atom_getsymbol(piVar7);
      if (puVar6 == puVar4) {
        *piVar7 = 0;
      }
      piVar7 = piVar7 + 4;
      uVar12 = (int)uVar18 - 1;
      uVar18 = (ulong)uVar12;
    } while (uVar10 != uVar12);
    uVar21 = extraout_XMM0_Da_01;
    uVar22 = extraout_XMM0_Db_01;
    if ((int)uVar10 < (int)local_4c0) {
      piVar7 = local_4c8;
      uVar8 = local_4c0;
      puVar4 = local_498;
      piVar17 = (int *)0x0;
      bVar2 = false;
      do {
        do {
          bVar1 = bVar2;
          piVar16 = piVar17;
          if (piVar7[(long)puVar4 * 4] != 0) {
            piVar16 = piVar7 + (long)puVar4 * 4;
            puVar5 = (undefined8 *)atom_getsymbol(piVar16);
            if (puVar5 == local_4b0) {
              if (piVar17 == (int *)0x0) {
                piVar16 = (int *)0x0;
              }
              else {
                local_4c8[(long)puVar4 * 4] = 0;
                *piVar17 = 0;
                bVar1 = true;
                piVar16 = (int *)0x0;
              }
            }
            piVar7 = local_4c8;
            uVar8 = local_4c0;
            uVar21 = extraout_XMM0_Da_02;
            uVar22 = extraout_XMM0_Db_02;
          }
          puVar5 = local_4a0;
          puVar4 = (undefined8 *)((long)puVar4 + 1);
          iVar13 = (int)uVar8;
          piVar17 = piVar16;
          bVar2 = bVar1;
        } while (iVar13 != (int)puVar4);
        piVar17 = (int *)0x0;
        puVar4 = local_498;
        bVar2 = false;
      } while (bVar1);
      if ((uVar10 != 0) && ((int)uVar10 < iVar13)) {
        piVar7 = piVar7 + (long)(int)uVar10 * 4;
        iVar13 = iVar13 - uVar10;
        do {
          if (*piVar7 != 0) {
            puVar4 = (undefined8 *)atom_getsymbol(piVar7);
            uVar21 = extraout_XMM0_Da_03;
            uVar22 = extraout_XMM0_Db_03;
            if (local_4b0 != puVar4) break;
            *piVar7 = 0;
          }
          piVar7 = piVar7 + 4;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
      }
    }
  }
  uVar10 = (uint)local_4c0;
  do_joinpath(CONCAT44(uVar22,uVar21),param_2,param_3,param_4,param_5,param_6,param_7,param_8,uVar10
              ,local_4c8,puVar5,uVar8,param_13,param_14);
  piVar7 = local_4c8;
  local_498 = extraout_RAX;
  local_470 = (long)(int)uVar10;
  if ((int)uVar10 < 1) {
    iVar13 = 0;
  }
  else {
    uVar18 = 0;
    iVar13 = 0;
    uVar8 = local_4c0;
    do {
      if (piVar7[uVar18 * 4] != 0) {
        local_4b0 = (undefined8 *)CONCAT44(local_4b0._4_4_,iVar13);
        puVar5 = (undefined8 *)atom_getsymbol(piVar7 + uVar18 * 4);
        __src = (char *)*puVar5;
        cVar3 = *__src;
        if (cVar3 != '\0') {
          pcVar9 = __src;
          do {
            pcVar9 = pcVar9 + 1;
            uVar12 = (uint)cVar3;
            uVar10 = uVar12 - 0x22;
            if (uVar10 < 0x3b) {
              if ((0x34000101UL >> ((ulong)uVar10 & 0x3f) & 1) != 0) goto LAB_0057cff0;
              if ((0x400000001000000U >> ((ulong)uVar10 & 0x3f) & 1) == 0) goto LAB_0057cea1;
              param_14 = "reserved";
              iVar13 = *(int *)(local_4b8 + 0x4c);
joined_r0x0057d0bc:
              iVar20 = 1;
              if (iVar13 != 0) {
                iVar20 = 1;
                logpost(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04),param_2,param_3,param_4,
                        param_5,param_6,param_7,param_8,local_4b8,3,
                        "cross-platform issue: the path \"%s\" contains the character \'%c\', which is %s on MSW."
                        ,__src,(ulong)uVar12,param_14,in_stack_fffffffffffffb28);
              }
              goto LAB_0057ce30;
            }
LAB_0057cea1:
            if ((uVar12 == 0x7c) || (cVar3 < ' ')) {
LAB_0057cff0:
              param_14 = "illegal";
              iVar13 = *(int *)(local_4b8 + 0x4c);
              goto joined_r0x0057d0bc;
            }
            cVar3 = *pcVar9;
          } while (cVar3 != '\0');
        }
        strncpy(&local_4cc,__src,4);
        local_4c9 = 0;
        iVar20 = 0;
        if (local_4ca != '\0') {
          local_460[3] = (char *)0x0;
          local_468 = &DAT_0065c10c;
          local_460[0] = "CON";
          local_460[1] = "NUL";
          local_460[2] = "PRN";
          apuStack_430[1] = (undefined *)DAT_007150e0;
          local_438 = PTR_DAT_007150d0;
          apuStack_430[0] = PTR_DAT_007150d8;
          if ((byte)(local_4cc + 0x9fU) < 0x1a) {
            local_4cc = local_4cc + -0x20;
          }
          if ((byte)(local_4cb + 0x9fU) < 0x1a) {
            local_4cb = local_4cb + -0x20;
          }
          if ((byte)(local_4ca + 0x9fU) < 0x1a) {
            local_4ca = local_4ca + -0x20;
          }
          ppcVar14 = local_460;
          pcVar9 = "AUX";
          do {
            iVar13 = strcmp(pcVar9,&local_4cc);
            if ((iVar13 == 0) && ((__src[3] == '.' || (__src[3] == '\0')))) {
              piVar7 = local_4c8;
              uVar8 = local_4c0;
              if (*(int *)(local_4b8 + 0x4c) == 0) goto LAB_0057d09b;
              pcVar11 = 
              "cross-platform issue: the path \"%s\" contains the name \'%s\' which is reserved on MSW."
              ;
              uVar21 = extraout_XMM0_Da_05;
              uVar22 = extraout_XMM0_Db_05;
              goto LAB_0057d08e;
            }
            pcVar9 = *ppcVar14;
            ppcVar14 = ppcVar14 + 1;
          } while (pcVar9 != (char *)0x0);
          ppuVar19 = apuStack_430;
          pcVar9 = "COM";
LAB_0057d040:
          iVar13 = strcmp(pcVar9,&local_4cc);
          piVar7 = local_4c8;
          uVar8 = local_4c0;
          if (((iVar13 != 0) || (8 < (byte)(__src[3] - 0x31U))) ||
             ((__src[4] != '.' && (__src[4] != '\0')))) goto LAB_0057d030;
          if (*(int *)(local_4b8 + 0x4c) != 0) {
            pcVar11 = 
            "cross-platform issue: the path \"%s\" contains the name \'%s[1-9]\' which is reserved on MSW."
            ;
            uVar21 = extraout_XMM0_Da_06;
            uVar22 = extraout_XMM0_Db_06;
LAB_0057d08e:
            uVar8 = local_4c0;
            piVar7 = local_4c8;
            logpost(CONCAT44(uVar22,uVar21),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    local_4b8,3,pcVar11,__src,pcVar9,param_14,in_stack_fffffffffffffb28);
          }
LAB_0057d09b:
          iVar20 = 1;
        }
LAB_0057ce30:
        iVar13 = (int)local_4b0;
        if ((int)local_4b0 < iVar20) {
          iVar13 = iVar20;
        }
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 != uVar8);
  }
  freebytes(piVar7);
  outlet_float((ulong)(uint)(float)iVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               *(long **)(local_4b8 + 0x60));
  if ((local_498 == (undefined8 *)0x0) || (*(char *)*local_498 == '\0')) {
    plVar15 = *(long **)(local_4b8 + 0x58);
  }
  else {
    plVar15 = *(long **)(local_4b8 + 0x58);
  }
  outlet_symbol(CONCAT44(extraout_XMM0_Db_07,extraout_XMM0_Da_07),param_2,param_3,param_4,param_5,
                param_6,param_7,param_8,plVar15);
  return;
LAB_0057d030:
  pcVar9 = *ppuVar19;
  ppuVar19 = ppuVar19 + 1;
  if (pcVar9 == (char *)0x0) goto LAB_0057ce30;
  goto LAB_0057d040;
}


