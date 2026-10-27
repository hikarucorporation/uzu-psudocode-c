// Function : glist_readfrombinbuf
// Namespace: 
// Entry    : 0051b820
// Prototype: undefined glist_readfrombinbuf(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined4 * param_10, undefined8 param_11, char * param_12, char * param_13, undefined8 param_14)
// Body     : 0051b820 - 0051bd1a


void glist_readfrombinbuf
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long *param_9,undefined4 *param_10,undefined8 param_11,char *param_12,char *param_13,
               undefined8 param_14)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined8 *extraout_RAX;
  long extraout_RAX_00;
  long *plVar7;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  bool bVar11;
  undefined8 extraout_RDX;
  int *piVar12;
  undefined8 extraout_RDX_00;
  long lVar13;
  uint uVar14;
  char *pcVar15;
  char *pcVar16;
  uint uVar17;
  uint uVar18;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar19;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 uVar21;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined8 uVar20;
  int iVar22;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  int *local_70;
  uint local_64;
  long local_60;
  undefined8 *local_58;
  uint local_4c;
  ulong local_48;
  int *local_40;
  long *local_38;
  
  pcVar8 = param_12;
  glist_getcanvas((long)param_9);
  uVar4 = binbuf_getnatom(param_10);
  piVar6 = (int *)binbuf_getvec((long)param_10);
  local_4c = (uint)param_12;
  if ((int)uVar4 < 1) {
    iVar5 = *piVar6;
    uVar17 = 0;
LAB_0051b8b2:
    if (iVar5 == 2) goto LAB_0051b8f0;
  }
  else {
    iVar5 = *piVar6;
    uVar17 = 1;
    if (iVar5 != 4) {
      pcVar8 = (char *)(ulong)uVar4;
      pcVar15 = (char *)0x1;
      piVar12 = piVar6;
      do {
        pcVar16 = pcVar15;
        piVar12 = piVar12 + 4;
        if (pcVar8 == pcVar16) {
          uVar14 = uVar4;
          goto LAB_0051b8a3;
        }
        pcVar15 = pcVar16 + 1;
      } while (*piVar12 != 4);
      uVar14 = (int)(pcVar16 + 1) - 1;
LAB_0051b8a3:
      uVar17 = uVar14 + (pcVar16 < pcVar8);
      if (uVar14 == 1) goto LAB_0051b8f0;
      goto LAB_0051b8b2;
    }
  }
  iVar5 = strcmp((char *)**(undefined8 **)(piVar6 + 2),"data");
  if (iVar5 != 0) {
    pd_error(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
             param_7,param_8,(long)param_9,"%s: file apparently of wrong type",param_11,pcVar8,
             param_13,param_14);
    return;
  }
LAB_0051b8f0:
  local_38 = param_9;
  local_70 = getbytes(0);
  if ((int)uVar17 < (int)uVar4) {
    local_60 = (long)(int)uVar4;
    local_40 = piVar6 + 4;
    local_48 = (ulong)(1 - uVar4);
    uVar19 = extraout_XMM0_Da_00;
    uVar21 = extraout_XMM0_Db_00;
    do {
      pcVar15 = (char *)(long)(int)uVar17;
      bVar11 = true;
      uVar14 = uVar17;
      if (piVar6[(long)pcVar15 * 4] != 4) {
        piVar12 = local_40 + (long)pcVar15 * 4;
        pcVar8 = (char *)0x0;
        do {
          if (uVar17 + (int)local_48 == (int)pcVar8) {
            bVar11 = (long)(pcVar15 + (1 - (long)pcVar8)) < local_60;
            uVar14 = uVar4;
            goto LAB_0051ba05;
          }
          pcVar8 = pcVar8 + -1;
          iVar5 = *piVar12;
          piVar12 = piVar12 + 4;
        } while (iVar5 != 4);
        bVar11 = (long)pcVar15 - (long)pcVar8 < local_60;
        uVar14 = uVar17 - (int)pcVar8;
      }
LAB_0051ba05:
      uVar18 = bVar11 + uVar14;
      uVar14 = uVar14 - uVar17;
      local_64 = uVar18;
      if ((int)uVar14 < 2) break;
      pcVar16 = pcVar15;
      if (uVar14 == 2) {
        if (piVar6[(long)pcVar15 * 4] == 2) {
          iVar5 = strcmp((char *)**(undefined8 **)(piVar6 + (long)pcVar15 * 4 + 2),"template");
          uVar20 = CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02);
          uVar19 = extraout_XMM0_Da_02;
          uVar21 = extraout_XMM0_Db_02;
          if (iVar5 == 0) {
            pcVar8 = pcVar15 + 1;
            pcVar9 = pcVar8;
            if (piVar6[(long)pcVar8 * 4] == 2) goto LAB_0051bab5;
          }
        }
        uVar20 = pd_error(CONCAT44(uVar21,uVar19),param_2,param_3,param_4,param_5,param_6,param_7,
                          param_8,0,"%s","bad template header",pcVar8,pcVar16,param_14);
        uVar20 = startpost(uVar20,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                           "line was:");
        uVar20 = postatom(uVar20,param_2,param_3,param_4,param_5,param_6,param_7,param_8,2,
                          piVar6 + (long)pcVar15 * 4,extraout_RDX,pcVar8,pcVar16,param_14);
        endpost(uVar20,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
        uVar17 = uVar18;
      }
      else {
        uVar20 = pd_error(CONCAT44(uVar21,uVar19),param_2,param_3,param_4,param_5,param_6,param_7,
                          param_8,0,"%s","extra items ignored",pcVar8,pcVar15,param_14);
        uVar20 = startpost(uVar20,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                           "line was:");
        uVar20 = postatom(uVar20,param_2,param_3,param_4,param_5,param_6,param_7,param_8,uVar14,
                          piVar6 + (long)pcVar15 * 4,extraout_RDX_00,pcVar8,pcVar16,param_14);
        uVar20 = endpost(uVar20,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
        pcVar9 = (char *)(long)(int)(uVar17 + 1);
LAB_0051bab5:
        pcVar8 = (char *)((long)pcVar9 * 0x10);
        uVar20 = canvas_makebindsym(uVar20,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                    *(undefined8 **)(piVar6 + 2 + (long)pcVar9 * 4));
        local_58 = extraout_RAX;
        if ((int)uVar18 < (int)uVar4) {
          pcVar16 = (char *)0x0;
          uVar17 = uVar18;
          do {
            lVar10 = (long)(int)uVar17;
            bVar11 = true;
            uVar14 = uVar17;
            if (piVar6[lVar10 * 4] != 4) {
              piVar12 = local_40 + lVar10 * 4;
              lVar13 = 0;
              do {
                if (uVar17 + (int)local_48 == (int)lVar13) {
                  bVar11 = (lVar10 - lVar13) + 1 < local_60;
                  uVar14 = uVar4;
                  goto LAB_0051bb72;
                }
                lVar13 = lVar13 + -1;
                iVar5 = *piVar12;
                piVar12 = piVar12 + 4;
              } while (iVar5 != 4);
              bVar11 = lVar10 - lVar13 < local_60;
              uVar14 = uVar17 - (int)lVar13;
            }
LAB_0051bb72:
            uVar18 = bVar11 + uVar14;
            uVar14 = uVar14 - uVar17;
            pcVar8 = (char *)(ulong)(uVar14 & 0xfffffffe);
            iVar5 = (int)pcVar16;
            if ((uVar14 & 0xfffffffe) != 2) break;
            uVar17 = iVar5 + uVar14;
            pcVar16 = (char *)(ulong)uVar17;
            lVar13 = (long)iVar5;
            local_70 = resizebytes(uVar20,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                   local_70,lVar13 * 0x10,(long)(int)uVar17 << 4);
            uVar20 = *(undefined8 *)(piVar6 + lVar10 * 4 + 2);
            *(undefined8 *)(local_70 + lVar13 * 4) = *(undefined8 *)(piVar6 + lVar10 * 4);
            *(undefined8 *)(local_70 + lVar13 * 4 + 2) = uVar20;
            piVar12 = piVar6 + lVar10 * 4 + 4;
            iVar5 = *piVar12;
            iVar22 = piVar12[1];
            iVar1 = piVar12[2];
            iVar2 = piVar12[3];
            piVar12 = local_70 + lVar13 * 4 + 4;
            *piVar12 = iVar5;
            piVar12[1] = iVar22;
            piVar12[2] = iVar1;
            piVar12[3] = iVar2;
            if (uVar14 == 3) {
              piVar12 = piVar6 + lVar10 * 4 + 8;
              iVar5 = *piVar12;
              iVar22 = piVar12[1];
              iVar1 = piVar12[2];
              iVar2 = piVar12[3];
              piVar12 = local_70 + lVar13 * 4 + 8;
              *piVar12 = iVar5;
              piVar12[1] = iVar22;
              piVar12[2] = iVar1;
              piVar12[3] = iVar2;
            }
            uVar20 = CONCAT44(iVar22,iVar5);
            uVar17 = uVar18;
          } while ((int)uVar18 < (int)uVar4);
          uVar17 = (uint)pcVar16;
        }
        else {
          uVar17 = 0;
        }
        puVar3 = local_58;
        uVar20 = template_findbyname(uVar20,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                     (long)local_58);
        if (extraout_RAX_00 == 0) {
          pd_error(uVar20,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                   "%s: template not found in current patch",*puVar3,pcVar8,pcVar16,param_14);
          freebytes(local_70);
          return;
        }
        plVar7 = template_new(uVar20,param_2,param_3,param_4,param_5,param_6,param_7,param_8,puVar3,
                              (ulong)uVar17,local_70,pcVar8,pcVar16,param_14);
        freebytes(local_70);
        uVar20 = template_match(extraout_RAX_00,(long)plVar7);
        if ((int)uVar20 == 0) {
          pd_error(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),param_2,param_3,param_4,param_5
                   ,param_6,param_7,param_8,0,"%s: template doesn\'t match current one",*local_58,
                   pcVar8,pcVar16,param_14);
          pd_free(plVar7);
          return;
        }
        pd_free(plVar7);
        uVar17 = uVar18;
      }
      local_70 = getbytes(0);
      uVar19 = extraout_XMM0_Da_01;
      uVar21 = extraout_XMM0_Db_01;
      local_64 = uVar17;
    } while ((int)uVar17 < (int)uVar4);
  }
  else {
    local_64 = uVar17;
  }
  uVar20 = freebytes(local_70);
  plVar7 = local_38;
  uVar17 = local_4c;
  if ((int)local_64 < (int)uVar4) {
    do {
      canvas_readscalar(uVar20,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar7,uVar4,
                        (ulong)piVar6,&local_64,(char *)(ulong)uVar17,param_14);
      uVar20 = CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04);
    } while ((int)local_64 < (int)uVar4);
  }
  return;
}


