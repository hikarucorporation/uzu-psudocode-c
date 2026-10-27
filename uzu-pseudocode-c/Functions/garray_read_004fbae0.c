// Function : garray_read
// Namespace: 
// Entry    : 004fbae0
// Prototype: undefined garray_read(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, int * param_12, char * param_13, undefined8 param_14)
// Body     : 004fbae0 - 004fbd84


void garray_read(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9,undefined8 *param_10,undefined8 param_11,int *param_12,char *param_13,
                undefined8 param_14)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  int *piVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 uVar16;
  undefined8 extraout_XMM0_Qa_06;
  undefined1 uVar17;
  undefined4 uVar18;
  int local_448;
  undefined4 uStack_444;
  long local_440;
  FILE *local_438;
  int local_430 [2];
  undefined8 *local_428;
  long local_420;
  int local_418 [250];
  
  puVar3 = (uint *)garray_getarray(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                   param_9,param_10,param_11,param_12,param_13,param_14);
  lVar4 = template_findbyname(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8,*(long *)(puVar3 + 4));
  puVar5 = gensym("y");
  piVar10 = &local_448;
  piVar14 = local_418;
  uVar6 = template_find_field(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8,lVar4,(long)puVar5,local_430,piVar10,(char *)piVar14,param_14)
  ;
  if (((int)uVar6 == 0) || (local_448 != 0)) {
    uVar6 = **(undefined8 **)(param_9 + 0x28);
    pcVar8 = "%s: needs floating-point \'y\' field";
    uVar16 = extraout_XMM0_Qa_01;
  }
  else {
    lVar4 = (long)local_430[0];
    lVar15 = (long)(int)puVar3[1];
    uVar2 = *puVar3;
    uVar11 = (ulong)uVar2;
    lVar7 = glist_getcanvas(*(long *)(param_9 + 0x18));
    uVar18 = 0;
    piVar10 = local_418;
    piVar14 = local_430;
    param_14 = 1000;
    iVar1 = canvas_open(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        lVar7,(char *)*param_10,"",(char *)piVar10,(undefined8 *)piVar14,1000,0);
    uVar16 = extraout_XMM0_Qa_03;
    if (-1 < iVar1) {
      local_438 = fdopen(iVar1,"r");
      uVar17 = (undefined1)uVar18;
      uVar16 = extraout_XMM0_Qa_04;
      if (local_438 != (FILE *)0x0) {
        local_440 = lVar4;
        local_420 = param_9;
        if ((int)uVar2 < 1) {
          uVar13 = 0;
          if (0 < (int)uVar2) {
LAB_004fbc73:
            piVar10 = *(int **)(puVar3 + 2);
            piVar14 = (int *)(uVar13 & 0xffffffff);
            uVar2 = uVar2 - (int)uVar13;
            uVar13 = ~(ulong)piVar14;
            if ((uVar2 & 3) != 0) {
              pcVar8 = (char *)((long)piVar10 + lVar15 * (long)piVar14 + local_440 * 4);
              lVar4 = 0;
              do {
                pcVar8[0] = '\0';
                pcVar8[1] = '\0';
                pcVar8[2] = '\0';
                pcVar8[3] = '\0';
                lVar4 = lVar4 + -1;
                pcVar8 = pcVar8 + lVar15;
              } while (-lVar4 != ((ulong)uVar2 & 3));
              piVar14 = (int *)((long)piVar14 - lVar4);
            }
            if (2 < uVar13 + uVar11) {
              lVar12 = uVar11 - (long)piVar14;
              lVar4 = (long)piVar14 + 3;
              piVar10 = piVar10 + local_440;
              lVar7 = (long)piVar14 + 2;
              lVar9 = (long)piVar14 * lVar15;
              piVar14 = (int *)(((long)piVar14 + 1) * lVar15);
              do {
                *(int *)((long)piVar10 + lVar9) = 0;
                *(int *)((long)piVar10 + (long)piVar14) = 0;
                *(int *)((long)piVar10 + lVar7 * lVar15) = 0;
                *(int *)((long)piVar10 + lVar4 * lVar15) = 0;
                piVar10 = piVar10 + lVar15;
                lVar12 = lVar12 + -4;
              } while (lVar12 != 0);
            }
          }
        }
        else {
          lVar4 = lVar4 * 4;
          uVar13 = 0;
          local_428 = param_10;
          do {
            iVar1 = __isoc99_fscanf(local_438,&DAT_005db3a9,&local_448);
            uVar17 = (undefined1)uVar18;
            if (iVar1 == 0) {
              piVar10 = (int *)(ulong)uVar2;
              post(extraout_XMM0_Qa_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   "%s: read %d elements into table of size %d");
              if ((int)uVar13 < (int)uVar2) goto LAB_004fbc73;
              break;
            }
            *(float *)(*(long *)(puVar3 + 2) + lVar4) =
                 (float)(double)CONCAT44(uStack_444,local_448);
            uVar13 = uVar13 + 1;
            lVar4 = lVar4 + lVar15;
          } while (uVar11 != uVar13);
        }
        fclose(local_438);
        lVar4 = local_420;
        uVar2 = glist_isvisible(*(long *)(local_420 + 0x18));
        if (uVar2 != 0) {
          sys_queuegui(lVar4,*(long *)(lVar4 + 0x18),0x4fa9e0);
          return;
        }
        if ((*(byte *)(lVar4 + 0x30) & 8) == 0) {
          return;
        }
        pdgui_vmess(extraout_XMM0_Qa_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    0x653aa2,"s",**(undefined8 **)(lVar4 + 0x28),piVar10,piVar14,param_14,uVar17);
        return;
      }
    }
    uVar6 = *param_10;
    pcVar8 = "%s: can\'t open";
  }
  pd_error(uVar16,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,pcVar8,uVar6,piVar10,
           (char *)piVar14,param_14);
  return;
}


