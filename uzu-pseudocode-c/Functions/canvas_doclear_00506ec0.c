// Function : canvas_doclear
// Namespace: 
// Entry    : 00506ec0
// Prototype: undefined canvas_doclear(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, char * param_10, undefined8 param_11, long * param_12, char * param_13, undefined * param_14)
// Body     : 00506ec0 - 00507190


void canvas_doclear(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long *param_9,char *param_10,undefined8 param_11,long *param_12,char *param_13,
                   undefined *param_14)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  long *plVar8;
  undefined8 extraout_RDX_06;
  char *pcVar9;
  char *pcVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Db;
  float fVar14;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined8 uVar12;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 uVar15;
  undefined8 uVar13;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  char *in_stack_ffffffffffffff38;
  char local_a8 [128];
  
  uVar3 = canvas_suspend_dsp(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  lVar6 = param_9[0x18];
  uVar12 = extraout_RDX;
  pcVar10 = param_14;
  uVar11 = extraout_XMM0_Da;
  uVar15 = extraout_XMM0_Db;
  if ((*(byte *)(lVar6 + 0x88) & 0x20) != 0) {
    iVar1 = *(int *)(lVar6 + 0x70);
    iVar2 = *(int *)(lVar6 + 0x78);
    fVar14 = (float)*(int *)(lVar6 + 0x74);
    fVar16 = (float)*(int *)(lVar6 + 0x7c);
    param_3 = CONCAT44(fVar16,(float)iVar2);
    fVar17 = fVar14;
    fVar18 = fVar14;
    fVar19 = fVar16;
    fVar20 = fVar16;
    canvas_disconnect((float)iVar1,CONCAT44(fVar14,fVar14),param_3,CONCAT44(fVar16,fVar16),param_5,
                      param_6,param_7,param_8,(long)param_9);
    param_12 = getbytes(0x10);
    lVar6 = CONCAT44((int)fVar14,(int)(float)iVar1);
    *param_12 = lVar6;
    param_12[1] = CONCAT44((int)fVar16,(int)(float)iVar2);
    param_10 = (char *)0x2;
    canvas_undo_add(lVar6,CONCAT44(fVar18,fVar17),param_3,CONCAT44(fVar20,fVar19),param_5,param_6,
                    param_7,param_8,(long)param_9,2,"disconnect",param_12,param_13,param_14);
    param_4 = CONCAT44(fVar20,fVar19);
    param_2 = CONCAT44(fVar18,fVar17);
    *(byte *)(param_9[0x18] + 0x88) = *(byte *)(param_9[0x18] + 0x88) & 0xdf;
    lVar6 = param_9[0x18];
    uVar12 = extraout_RDX_00;
    pcVar10 = param_14;
    uVar11 = extraout_XMM0_Da_00;
    uVar15 = extraout_XMM0_Db_00;
  }
  uVar13 = CONCAT44(uVar15,uVar11);
  if (*(long *)(lVar6 + 0x28) != 0) {
    plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
    uVar12 = CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
    *(undefined8 *)(*plVar4 + 0x58) = 0;
    puVar5 = *(undefined8 **)(lVar6 + 0x20);
    uVar13 = extraout_RDX_01;
    while (puVar5 != (undefined8 *)0x0) {
      param_10 = (char *)*puVar5;
      uVar12 = glist_deselect(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                              ,(long *)param_10,uVar13,param_12,param_13,pcVar10);
      lVar6 = param_9[0x18];
      uVar13 = extraout_RDX_02;
      puVar5 = *(undefined8 **)(lVar6 + 0x20);
    }
    if ((*(byte *)(lVar6 + 0x88) & 0x20) != 0) {
      *(byte *)(lVar6 + 0x88) = *(byte *)(lVar6 + 0x88) & 0xdf;
      param_13 = local_a8;
      sprintf(param_13,"l%p",*(undefined8 *)(param_9[0x18] + 0x80));
      in_stack_ffffffffffffff38 = "black";
      param_10 = "crs rs";
      pcVar10 = "-fill";
      pdgui_vmess(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,0,"crs rs",param_9,"itemconfigure",param_13,"-fill",0x51);
    }
    plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
    lVar6 = *plVar4;
    param_12 = *(long **)(lVar6 + 0x58);
    uVar12 = extraout_RDX_03;
    uVar13 = CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03);
    if ((param_12 != (long *)0x0) &&
       (plVar4 = (long *)param_9[6], uVar13 = CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),
       plVar4 != (long *)0x0)) {
      uVar11 = extraout_XMM0_Da_03;
      uVar15 = extraout_XMM0_Db_03;
      if (plVar4 != param_12) goto LAB_005070e5;
      do {
        if (param_9[0x18] != 0) {
          puVar5 = getbytes(0x10);
          lVar6 = param_9[0x18];
          param_12 = *(long **)(lVar6 + 0x20);
          plVar7 = param_12;
          if (param_12 == (long *)0x0) {
            param_12 = (long *)0x0;
          }
          else {
            do {
              if ((long *)*plVar7 == plVar4) {
                bug(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04),param_2,param_3,param_4,
                    param_5,param_6,param_7,param_8,"glist_select",param_10,plVar7,param_12,param_13
                    ,pcVar10,(char)in_stack_ffffffffffffff38);
                lVar6 = param_9[0x18];
                param_12 = *(long **)(lVar6 + 0x20);
                break;
              }
              plVar7 = (long *)plVar7[1];
            } while (plVar7 != (long *)0x0);
          }
          puVar5[1] = param_12;
          *puVar5 = plVar4;
          *(undefined8 **)(lVar6 + 0x20) = puVar5;
          param_10 = (char *)param_9;
          gobj_select(plVar4,(long)param_9);
          plVar7 = (long *)__tls_get_addr(&PTR_007159b0);
          lVar6 = *plVar7;
          uVar12 = extraout_RDX_04;
          uVar11 = extraout_XMM0_Da_05;
          uVar15 = extraout_XMM0_Db_05;
        }
LAB_005070e5:
        do {
          uVar13 = CONCAT44(uVar15,uVar11);
          plVar4 = (long *)plVar4[1];
          if (plVar4 == (long *)0x0) goto LAB_00507108;
          param_12 = *(long **)(lVar6 + 0x58);
        } while (plVar4 != param_12);
      } while( true );
    }
  }
LAB_00507108:
  plVar4 = (long *)param_9[6];
  if (plVar4 != (long *)0x0) {
    if (param_9[0x18] == 0) {
      do {
        plVar4 = (long *)plVar4[1];
      } while (plVar4 != (long *)0x0);
    }
    else {
      plVar7 = *(long **)(param_9[0x18] + 0x20);
      if (plVar7 == (long *)0x0) {
        do {
          plVar4 = (long *)plVar4[1];
        } while (plVar4 != (long *)0x0);
      }
      else {
        do {
          param_12 = (long *)plVar4[1];
          plVar8 = plVar7;
          do {
            if ((long *)*plVar8 == plVar4) {
              uVar13 = glist_delete(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                    param_9,plVar4,plVar8,param_12,param_13,pcVar10);
              uVar12 = extraout_RDX_05;
              goto LAB_00507108;
            }
            plVar8 = (long *)plVar8[1];
          } while (plVar8 != (long *)0x0);
          plVar4 = param_12;
        } while (param_12 != (long *)0x0);
        uVar12 = 0;
      }
    }
  }
  pcVar9 = (char *)0x0;
  canvas_resume_dsp(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(ulong)uVar3,0,
                    uVar12,param_12,param_13,pcVar10);
  canvas_dirty(DAT_005d9038,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9,
               pcVar9,extraout_RDX_06,param_12,param_13,pcVar10);
  return;
}


