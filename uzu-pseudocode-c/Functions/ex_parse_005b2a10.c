// Function : ex_parse
// Namespace: 
// Entry    : 005b2a10
// Prototype: long * ex_parse(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long * param_10, long * param_11, long param_12, undefined8 param_13, undefined8 param_14)
// Body     : 005b2a10 - 005b2e41


long * ex_parse(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,long *param_10,long *param_11,long param_12,undefined8 param_13,
               undefined8 param_14)

{
  undefined1 auVar1 [16];
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  char *pcVar7;
  long lVar8;
  undefined8 uVar9;
  char *pcVar10;
  char *pcVar11;
  long lVar12;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar14;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar15;
  undefined4 uVar16;
  long lVar17;
  long lStack_50;
  long local_48;
  char *local_38;
  
  uVar13 = 0;
  uVar14 = 0;
  lVar12 = 0;
  if (param_10 == (long *)0x0) {
    pcVar11 = "ex_parse: input is null, iptr = 0x%lx\n";
LAB_005b2ced:
    post(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pcVar11);
  }
  else {
    lVar8 = param_10[1];
    if (lVar8 != 0) {
      pcVar11 = BinaryData::temp_binary_data_9 + 0x10130;
      plVar5 = (long *)0x0;
      lVar4 = 0;
      do {
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(lVar8) {
        case 1:
        case 2:
        case 7:
        case 8:
        case 0xb:
        case 0xc:
        case 0xe:
        case 0x11:
        case 0x14:
        case 0x15:
          if (lVar4 == 0) {
            if (param_10[5] == 0) {
              uVar13 = (undefined4)*param_10;
              uVar14 = *(undefined4 *)((long)param_10 + 4);
              uVar15 = (undefined4)param_10[1];
              uVar16 = *(undefined4 *)((long)param_10 + 0xc);
              lVar12 = param_10[3];
              param_11[2] = param_10[2];
              param_11[3] = lVar12;
LAB_005b2b97:
              *(undefined4 *)param_11 = uVar13;
              *(undefined4 *)((long)param_11 + 4) = uVar14;
              *(undefined4 *)(param_11 + 1) = uVar15;
              *(undefined4 *)((long)param_11 + 0xc) = uVar16;
              plVar5 = param_11 + 4;
              goto LAB_005b2cbf;
            }
          }
          break;
        case 3:
          if (*param_10 == 0x20002) {
            if (((param_12 == 0) || (lVar4 == 0)) || (param_10[5] == 0)) {
              pcVar11 = "expr: \'%s\' - syntax error: illegal comma\n";
              goto LAB_005b2ced;
            }
          }
          else if (param_10[5] == 0) {
            pcVar11 = "expr: \'%s\' - syntax error: missing operand\n";
            goto LAB_005b2ced;
          }
          pcVar7 = (char *)(ulong)((uint)*param_10 & 0xffff0000);
          if (pcVar7 <= pcVar11) {
            pcVar11 = pcVar7;
            plVar5 = param_10;
          }
          break;
        default:
          post(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               "expr: \'%s\' - ex_parse: type = 0x%lx\n");
          return (long *)0x0;
        case 5:
        case 0x10:
        case 0x12:
switchD_005b2aa0_caseD_5:
          if (param_10[5] == 10) {
            plVar6 = (long *)param_10[4];
            if ((lVar4 == 0) && (plVar6[5] == 0)) {
              lVar12 = *plVar6;
              local_48 = plVar6[3];
              lVar17 = plVar6[1];
              lStack_50 = plVar6[2];
              lVar8 = *(long *)PTR_nullex_007159d0;
              lVar4 = *(long *)(PTR_nullex_007159d0 + 8);
              lVar2 = *(long *)(PTR_nullex_007159d0 + 0x18);
              plVar6[2] = *(long *)(PTR_nullex_007159d0 + 0x10);
              plVar6[3] = lVar2;
              *plVar6 = lVar8;
              plVar6[1] = lVar4;
              lVar8 = *param_10;
              lVar4 = param_10[1];
              lVar2 = param_10[2];
              lVar3 = param_10[3];
              *param_11 = lVar8;
              param_11[1] = lVar4;
              param_11[2] = lVar2;
              param_11[3] = lVar3;
              plVar5 = ex_parse(lVar8,lVar2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                                param_10 + 8,param_11 + 4,0,pcVar11,param_14);
              plVar6 = (long *)param_10[4];
LAB_005b2cab:
              *plVar6 = lVar12;
              plVar6[3] = local_48;
              plVar6[1] = lVar17;
              plVar6[2] = lStack_50;
LAB_005b2cbf:
              param_11[2] = (long)plVar5;
              return plVar5;
            }
            goto LAB_005b2a80;
          }
          pcVar11 = "expr: \'%s\' - syntax error: brackets missing\n";
          goto LAB_005b2ced;
        case 6:
          if (param_10[5] != 9) {
            pcVar11 = "expr: \'%s\' - ex_parse: no parenthesis\n";
            goto LAB_005b2ced;
          }
          plVar6 = (long *)param_10[4];
          if ((lVar4 == 0) && (plVar6[5] == 0)) {
            local_38 = (char *)0x0;
            lVar12 = *param_10;
            lVar8 = param_10[1];
            uVar15 = (undefined4)param_10[2];
            uVar16 = *(undefined4 *)((long)param_10 + 0x14);
            lVar4 = param_10[3];
            uVar13 = *(undefined4 *)((long)param_10 + 0x1c);
            *(undefined4 *)(param_11 + 2) = uVar15;
            *(undefined4 *)((long)param_11 + 0x14) = uVar16;
            *(int *)(param_11 + 3) = (int)lVar4;
            *(undefined4 *)((long)param_11 + 0x1c) = uVar13;
            *param_11 = lVar12;
            param_11[1] = lVar8;
            plVar6 = (long *)param_10[4];
            lVar8 = *plVar6;
            lVar4 = plVar6[3];
            uVar13 = (undefined4)plVar6[1];
            uVar14 = *(undefined4 *)((long)plVar6 + 0xc);
            lVar12 = plVar6[1];
            lVar2 = plVar6[2];
            if (plVar6 != param_10 + 8) {
              lVar3 = *(long *)PTR_nullex_007159d0;
              lVar17 = *(long *)(PTR_nullex_007159d0 + 8);
              auVar1 = *(undefined1 (*) [16])(PTR_nullex_007159d0 + 0x10);
              uVar15 = auVar1._0_4_;
              uVar16 = auVar1._4_4_;
              *(undefined1 (*) [16])(plVar6 + 2) = auVar1;
              *plVar6 = lVar3;
              plVar6[1] = lVar17;
              plVar5 = ex_parse(lVar3,auVar1._0_8_,param_3,param_4,param_5,param_6,param_7,param_8,
                                param_9,param_10 + 8,param_11 + 4,(long)&local_38,pcVar11,param_14);
              if (plVar5 == (long *)0x0) {
                return (long *)0x0;
              }
              local_38 = local_38 + 1;
              uVar13 = extraout_XMM0_Da;
              uVar14 = extraout_XMM0_Db;
            }
            param_2 = CONCAT44(uVar16,uVar15);
            pcVar7 = (char *)((undefined8 *)*param_10)[2];
            if ((pcVar7 != (char *)0xffffffffffffffff) && (local_38 != pcVar7)) {
              uVar9 = *(undefined8 *)*param_10;
              pcVar10 = "syntax error: function \'%s\' needs %ld arguments\n";
LAB_005b2e07:
              ex_error(CONCAT44(uVar14,uVar13),param_2,param_3,param_4,param_5,param_6,param_7,
                       param_8,param_9,pcVar10,uVar9,pcVar7,pcVar11,param_14,(char)lVar12);
              return (long *)0x0;
            }
            *(short *)((long)param_11 + 0x1a) = (short)local_38;
            plVar6 = (long *)param_10[4];
            *plVar6 = lVar8;
            plVar6[1] = lVar12;
            plVar6[2] = lVar2;
            plVar6[3] = lVar4;
            if (plVar5 == (long *)0x0) {
              plVar5 = param_11 + 4;
            }
            goto LAB_005b2cbf;
          }
LAB_005b2a80:
          param_10 = plVar6;
          break;
        case 9:
        case 10:
          if (lVar4 == 0) {
            plVar6 = (long *)*param_10;
            if (plVar6[5] != 0) goto LAB_005b2a80;
            if (plVar6 == param_10 + 4) {
              uVar9 = *(undefined8 *)(param_9 + 0x40);
              pcVar7 = "[]";
              if (lVar8 == 9) {
                pcVar7 = "()";
              }
              pcVar10 = "expr: \'%s\' - syntax error: empty \'%s\'\n";
              goto LAB_005b2e07;
            }
            lVar12 = *plVar6;
            local_48 = plVar6[3];
            lVar17 = plVar6[1];
            lStack_50 = plVar6[2];
            lVar8 = *(long *)PTR_nullex_007159d0;
            lVar4 = *(long *)(PTR_nullex_007159d0 + 8);
            lVar2 = *(long *)(PTR_nullex_007159d0 + 0x10);
            lVar3 = *(long *)(PTR_nullex_007159d0 + 0x18);
            plVar6[2] = lVar2;
            plVar6[3] = lVar3;
            *plVar6 = lVar8;
            plVar6[1] = lVar4;
            plVar5 = ex_parse(lVar8,lVar2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                              param_10 + 4,param_11,0,pcVar11,param_14);
            plVar6 = (long *)*param_10;
            goto LAB_005b2cab;
          }
          param_10 = (long *)*param_10;
          break;
        case 0xd:
          if (param_10[5] == 10) {
            *(byte *)(param_10 + 3) = *(byte *)(param_10 + 3) | 2;
            goto switchD_005b2aa0_caseD_5;
          }
          if (param_10[5] == 0 && lVar4 == 0) {
            *(byte *)(param_10 + 3) = *(byte *)(param_10 + 3) & 0xfd;
            lVar12 = param_10[3];
            param_11[2] = param_10[2];
            param_11[3] = lVar12;
            uVar13 = (undefined4)*param_10;
            uVar14 = *(undefined4 *)((long)param_10 + 4);
            uVar15 = (undefined4)param_10[1];
            uVar16 = *(undefined4 *)((long)param_10 + 0xc);
            goto LAB_005b2b97;
          }
        }
        lVar4 = lVar4 + 1;
        lVar8 = param_10[5];
        param_10 = param_10 + 4;
      } while( true );
    }
  }
  return (long *)0x0;
}


