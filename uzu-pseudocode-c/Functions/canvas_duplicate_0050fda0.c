// Function : canvas_duplicate
// Namespace: 
// Entry    : 0050fda0
// Prototype: undefined canvas_duplicate(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, uint * param_9, char * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined * param_14)
// Body     : 0050fda0 - 005100e0


void canvas_duplicate(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     uint *param_9,char *param_10,undefined8 param_11,undefined8 param_12,
                     char *param_13,undefined *param_14)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  int *piVar6;
  undefined7 extraout_var;
  undefined8 uVar7;
  undefined7 extraout_var_00;
  int *piVar8;
  long lVar9;
  int *piVar10;
  undefined8 *puVar11;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  int iVar12;
  uint *puVar13;
  char *pcVar14;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 uVar15;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  undefined1 auVar17 [16];
  char local_a8 [128];
  
  puVar11 = *(undefined8 **)(param_9 + 0x30);
  if (puVar11 != (undefined8 *)0x0) {
    if ((puVar11[4] != 0) && ((*(byte *)(puVar11 + 0x11) & 0x20) != 0)) {
      *(byte *)(puVar11 + 0x11) = *(byte *)(puVar11 + 0x11) & 0xdf;
      param_13 = local_a8;
      sprintf(param_13,"l%p",*(undefined8 *)(*(long *)(param_9 + 0x30) + 0x80));
      param_10 = "crs rs";
      pcVar14 = "-fill";
      param_1 = pdgui_vmess(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                            param_5,param_6,param_7,param_8,0,"crs rs",param_9,"itemconfigure",
                            param_13,"-fill",0x51);
      puVar11 = *(undefined8 **)(param_9 + 0x30);
      param_14 = pcVar14;
    }
    if ((*(byte *)(puVar11 + 0x11) & 0x20) == 0) {
      if (((*(byte *)(puVar11 + 0x11) & 7) == 0) && (puVar11[4] != 0)) {
        plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
        iVar12 = 0;
        if (*(int **)**(undefined8 **)(*plVar5 + 0x48) == (int *)0x0) {
          piVar6 = (int *)0x0;
          uVar7 = extraout_RDX;
          uVar15 = extraout_XMM0_Da_00;
          uVar16 = extraout_XMM0_Db_00;
        }
        else {
          piVar6 = binbuf_duplicate(*(int **)**(undefined8 **)(*plVar5 + 0x48));
          uVar7 = extraout_RDX_00;
          uVar15 = extraout_XMM0_Da_01;
          uVar16 = extraout_XMM0_Db_01;
        }
        canvas_copy(CONCAT44(uVar16,uVar15),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    (long)param_9,param_10,uVar7,puVar11,param_13,param_14);
        piVar8 = getbytes(0x18);
        lVar9 = *(long *)(param_9 + 0xc);
        if (lVar9 != 0) {
          iVar12 = 0;
          do {
            iVar12 = iVar12 + 1;
            lVar9 = *(long *)(lVar9 + 8);
          } while (lVar9 != 0);
        }
        *piVar8 = iVar12;
        piVar8[1] = -1;
        piVar8[2] = 10;
        plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
        piVar10 = binbuf_duplicate(*(int **)**(undefined8 **)(*plVar5 + 0x48));
        *(int **)(piVar8 + 4) = piVar10;
        canvas_undo_add(CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_05),param_2,param_3,param_4,
                        param_5,param_6,param_7,param_8,(long)param_9,5,"duplicate",piVar8,param_13,
                        param_14);
        puVar13 = *(uint **)**(undefined8 **)(*plVar5 + 0x48);
        canvas_dopaste(CONCAT44(extraout_XMM0_Db_06,extraout_XMM0_Da_06),param_2,param_3,param_4,
                       param_5,param_6,param_7,param_8,(long *)param_9,puVar13,extraout_RDX_01,
                       piVar8,param_13,param_14);
        uVar7 = extraout_RDX_02;
        for (puVar11 = *(undefined8 **)(*(long *)(param_9 + 0x30) + 0x20);
            puVar11 != (undefined8 *)0x0; puVar11 = (undefined8 *)puVar11[1]) {
          piVar8 = (int *)0xa;
          puVar13 = param_9;
          gobj_displace((long *)*puVar11);
          uVar7 = extraout_RDX_03;
        }
        if (piVar6 != (int *)0x0) {
          auVar17 = __tls_get_addr(&PTR_007159b0);
          uVar7 = auVar17._8_8_;
          puVar11 = (undefined8 *)**(undefined8 **)(*auVar17._0_8_ + 0x48);
          if ((void *)*puVar11 != (void *)0x0) {
            binbuf_free((void *)*puVar11);
            auVar17 = __tls_get_addr(&PTR_007159b0);
            uVar7 = auVar17._8_8_;
            puVar11 = (undefined8 *)**(undefined8 **)(*auVar17._0_8_ + 0x48);
          }
          *puVar11 = piVar6;
        }
        canvas_dirty(DAT_005d9038,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     (long)param_9,(char *)puVar13,uVar7,piVar8,param_13,param_14);
      }
    }
    else {
      iVar12 = *(int *)(puVar11 + 0xe);
      iVar3 = *(int *)(puVar11 + 0xf);
      plVar1 = *(long **)(param_9 + 0xc);
      plVar5 = plVar1;
      if (iVar12 != 0) {
        do {
          plVar5 = (long *)plVar5[1];
          if (plVar5 == (long *)0x0) {
            return;
          }
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        plVar1 = (long *)plVar1[1];
        if (plVar1 == (long *)0x0) {
          return;
        }
      }
      iVar3 = *(int *)((long)puVar11 + 0x74) + 1;
      iVar12 = *(int *)((long)puVar11 + 0x7c) + 1;
      bVar2 = canconnect(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                         plVar5,iVar3,plVar1,iVar12);
      uVar15 = extraout_XMM0_Da_02;
      uVar16 = extraout_XMM0_Db_02;
      if ((int)CONCAT71(extraout_var,bVar2) == 0) {
        if (plVar5 == (long *)0x0) {
          return;
        }
        if (plVar1 == (long *)0x0) {
          obj_noutlets((long)plVar5);
          return;
        }
        do {
          iVar4 = obj_noutlets((long)plVar5);
          if (iVar4 <= iVar3) {
            return;
          }
          iVar4 = obj_ninlets(plVar1);
          if (iVar4 <= iVar12) {
            return;
          }
          iVar3 = iVar3 + 1;
          iVar12 = iVar12 + 1;
          bVar2 = canconnect(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),param_2,param_3,
                             param_4,param_5,param_6,param_7,param_8,param_9,plVar5,iVar3,plVar1,
                             iVar12);
          uVar15 = extraout_XMM0_Da_04;
          uVar16 = extraout_XMM0_Db_04;
        } while ((int)CONCAT71(extraout_var_00,bVar2) == 0);
      }
      uVar7 = tryconnect(CONCAT44(uVar16,uVar15),param_2,param_3,param_4,param_5,param_6,param_7,
                         param_8,(long)param_9,plVar5,iVar3,plVar1,iVar12);
      if ((int)uVar7 != 0) {
        lVar9 = *(long *)(param_9 + 0x30);
        *(int *)(lVar9 + 0x74) = iVar3;
        *(int *)(lVar9 + 0x7c) = iVar12;
      }
    }
  }
  return;
}


